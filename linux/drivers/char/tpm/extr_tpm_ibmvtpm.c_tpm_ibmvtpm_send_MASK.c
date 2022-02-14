
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpm_chip {int dev; } ;
struct ibmvtpm_dev {size_t rtce_size; int tpm_processing_cmd; int rtce_lock; int dev; int rtce_dma_handle; int vdev; scalar_t__ rtce_buf; scalar_t__ res_len; int wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 struct ibmvtpm_dev* FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int ,size_t,int ) ;
 int FUNC_4 (void*,void*,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(struct tpm_chip *VAR_5, u8 *VAR_6, size_t VAR_7)
{
 struct ibmvtpm_dev *VAR_8 = FUNC_1(&VAR_5->dev);
 int VAR_9, VAR_10;

 if (!VAR_8->rtce_buf) {
  FUNC_0(VAR_8->dev, "ibmvtpm device is not ready\n");
  return 0;
 }

 if (VAR_7 > VAR_8->rtce_size) {
  FUNC_0(VAR_8->dev,
   "Invalid size in send: count=%zd, rtce_size=%d\n",
   VAR_7, VAR_8->rtce_size);
  return -VAR_1;
 }

 if (VAR_8->tpm_processing_cmd) {
  FUNC_2(VAR_8->dev,
           "Need to wait for TPM to finish\n");

  VAR_10 = FUNC_7(VAR_8->wq, !VAR_8->tpm_processing_cmd);
  if (VAR_10)
   return -VAR_0;
 }

 FUNC_5(&VAR_8->rtce_lock);
 VAR_8->res_len = 0;
 FUNC_4((void *)VAR_8->rtce_buf, (void *)VAR_6, VAR_7);





 VAR_8->tpm_processing_cmd = 1;

 VAR_9 = FUNC_3(VAR_8->vdev,
   VAR_3, VAR_4,
   VAR_7, VAR_8->rtce_dma_handle);
 if (VAR_9 != VAR_2) {
  FUNC_0(VAR_8->dev, "tpm_ibmvtpm_send failed rc=%d\n", VAR_9);
  VAR_9 = 0;
  VAR_8->tpm_processing_cmd = 0;
 } else
  VAR_9 = 0;

 FUNC_6(&VAR_8->rtce_lock);
 return VAR_9;
}
