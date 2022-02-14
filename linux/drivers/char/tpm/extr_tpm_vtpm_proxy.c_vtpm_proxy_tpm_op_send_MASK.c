
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpm_chip {int dev; } ;
struct proxy_dev {int state; size_t req_len; int wq; int buf_lock; int buffer; scalar_t__ resp_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,size_t,int) ;
 struct proxy_dev* FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct tpm_chip*,int *,size_t) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct tpm_chip *VAR_6, u8 *VAR_7, size_t VAR_8)
{
 struct proxy_dev *VAR_9 = FUNC_1(&VAR_6->dev);

 if (VAR_8 > sizeof(VAR_9->buffer)) {
  FUNC_0(&VAR_6->dev,
   "Invalid size in send: count=%zd, buffer size=%zd\n",
   VAR_8, sizeof(VAR_9->buffer));
  return -VAR_1;
 }

 if (!(VAR_9->state & VAR_3) &&
     FUNC_5(VAR_6, VAR_7, VAR_8))
  return -VAR_0;

 FUNC_3(&VAR_9->buf_lock);

 if (!(VAR_9->state & VAR_4)) {
  FUNC_4(&VAR_9->buf_lock);
  return -VAR_2;
 }

 VAR_9->resp_len = 0;

 VAR_9->req_len = VAR_8;
 FUNC_2(VAR_9->buffer, VAR_7, VAR_8);

 VAR_9->state &= ~VAR_5;

 FUNC_4(&VAR_9->buf_lock);

 FUNC_6(&VAR_9->wq);

 return 0;
}
