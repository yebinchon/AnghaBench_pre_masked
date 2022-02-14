
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
struct tpm_chip {int dev; } ;
struct ibmvtpm_dev {size_t res_len; int rtce_lock; scalar_t__ rtce_buf; int dev; int tpm_processing_cmd; int wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 struct ibmvtpm_dev* FUNC_1 (int *) ;
 int FUNC_2 (void*,void*,size_t) ;
 int FUNC_3 (scalar_t__,int ,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(struct tpm_chip *VAR_2, u8 *VAR_3, size_t VAR_4)
{
 struct ibmvtpm_dev *VAR_5 = FUNC_1(&VAR_2->dev);
 u16 VAR_6;
 int VAR_7;

 if (!VAR_5->rtce_buf) {
  FUNC_0(VAR_5->dev, "ibmvtpm device is not ready\n");
  return 0;
 }

 VAR_7 = FUNC_6(VAR_5->wq, !VAR_5->tpm_processing_cmd);
 if (VAR_7)
  return -VAR_0;

 VAR_6 = VAR_5->res_len;

 if (VAR_4 < VAR_6) {
  FUNC_0(VAR_5->dev,
   "Invalid size in recv: count=%zd, crq_size=%d\n",
   VAR_4, VAR_6);
  return -VAR_1;
 }

 FUNC_4(&VAR_5->rtce_lock);
 FUNC_2((void *)VAR_3, (void *)VAR_5->rtce_buf, VAR_6);
 FUNC_3(VAR_5->rtce_buf, 0, VAR_6);
 VAR_5->res_len = 0;
 FUNC_5(&VAR_5->rtce_lock);
 return VAR_6;
}
