
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atmel_aes_dev {int data; scalar_t__ datalen; int (* resume ) (struct atmel_aes_dev*) ;int (* cpu_transfer_complete ) (struct atmel_aes_dev*) ;int total; int buf; int real_dst; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct atmel_aes_dev*,int) ;
 int FUNC_3 (struct atmel_aes_dev*,int ) ;
 int FUNC_4 (struct atmel_aes_dev*,int ,int) ;
 int FUNC_5 (struct atmel_aes_dev*,int ,int) ;
 int FUNC_6 (struct atmel_aes_dev*,int ,int) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct atmel_aes_dev*) ;

__attribute__((used)) static int FUNC_10(struct atmel_aes_dev *VAR_6)
{
 int VAR_7 = 0;
 u32 VAR_8;

 for (;;) {
  FUNC_4(VAR_6, FUNC_1(0), VAR_6->data);
  VAR_6->data += 4;
  VAR_6->datalen -= VAR_0;

  if (VAR_6->datalen < VAR_0)
   break;

  FUNC_6(VAR_6, FUNC_0(0), VAR_6->data);

  VAR_8 = FUNC_3(VAR_6, VAR_3);
  if (!(VAR_8 & VAR_2)) {
   VAR_6->resume = FUNC_10;
   FUNC_5(VAR_6, VAR_1, VAR_2);
   return -VAR_4;
  }
 }

 if (!FUNC_7(VAR_6->real_dst, FUNC_8(VAR_6->real_dst),
     VAR_6->buf, VAR_6->total))
  VAR_7 = -VAR_5;

 if (VAR_7)
  return FUNC_2(VAR_6, VAR_7);

 return VAR_6->cpu_transfer_complete(VAR_6);
}
