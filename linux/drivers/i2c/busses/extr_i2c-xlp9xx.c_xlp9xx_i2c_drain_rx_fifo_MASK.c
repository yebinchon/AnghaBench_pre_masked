
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct xlp9xx_i2c_dev {int* msg_buf; int len_recv; int msg_buf_remaining; int msg_len; scalar_t__ client_pec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct xlp9xx_i2c_dev*) ;
 int FUNC_2 (struct xlp9xx_i2c_dev*) ;
 int FUNC_3 (struct xlp9xx_i2c_dev*,int ) ;

__attribute__((used)) static void FUNC_4(struct xlp9xx_i2c_dev *VAR_4)
{
 u32 VAR_5, VAR_6;
 u8 VAR_7, *VAR_8 = VAR_4->msg_buf;

 VAR_5 = FUNC_3(VAR_4, VAR_1) &
      VAR_2;
 if (!VAR_5)
  return;
 if (VAR_4->len_recv) {

  VAR_7 = FUNC_3(VAR_4, VAR_3);
  VAR_5--;
  if (VAR_7 > VAR_0 || VAR_7 == 0) {
   VAR_7 = 0;
   VAR_4->msg_buf_remaining = 0;
   VAR_4->msg_len = 0;
   FUNC_1(VAR_4);
   return;
  }

  *VAR_8++ = VAR_7;
  if (VAR_4->client_pec)
   ++VAR_7;

  VAR_4->msg_buf_remaining = VAR_7;
  VAR_4->msg_len = VAR_7 + 1;
  FUNC_1(VAR_4);
  VAR_4->len_recv = 0;
 }

 VAR_5 = FUNC_0(VAR_4->msg_buf_remaining, VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++, VAR_8++)
  *VAR_8 = FUNC_3(VAR_4, VAR_3);

 VAR_4->msg_buf_remaining -= VAR_5;
 VAR_4->msg_buf = VAR_8;

 if (VAR_4->msg_buf_remaining)
  FUNC_2(VAR_4);
}
