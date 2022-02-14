
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpm_chip {int dev; } ;
struct proxy_dev {int state; size_t resp_len; int buf_lock; int buffer; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,size_t,size_t) ;
 struct proxy_dev* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct tpm_chip *VAR_3, u8 *VAR_4, size_t VAR_5)
{
 struct proxy_dev *VAR_6 = FUNC_1(&VAR_3->dev);
 size_t VAR_7;


 FUNC_3(&VAR_6->buf_lock);

 if (!(VAR_6->state & VAR_2)) {
  FUNC_4(&VAR_6->buf_lock);
  return -VAR_1;
 }

 VAR_7 = VAR_6->resp_len;
 if (VAR_5 < VAR_7) {
  FUNC_0(&VAR_3->dev,
   "Invalid size in recv: count=%zd, resp_len=%zd\n",
   VAR_5, VAR_7);
  VAR_7 = -VAR_0;
  goto out;
 }

 FUNC_2(VAR_4, VAR_6->buffer, VAR_7);
 VAR_6->resp_len = 0;

out:
 FUNC_4(&VAR_6->buf_lock);

 return VAR_7;
}
