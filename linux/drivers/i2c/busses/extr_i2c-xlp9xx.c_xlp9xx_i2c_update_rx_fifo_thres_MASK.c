
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlp9xx_i2c_dev {int msg_buf_remaining; scalar_t__ len_recv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xlp9xx_i2c_dev*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct xlp9xx_i2c_dev *VAR_3)
{
 u32 VAR_4;

 if (VAR_3->len_recv)



  VAR_4 = 1;
 else if (VAR_3->msg_buf_remaining > VAR_0)
  VAR_4 = VAR_0;
 else
  VAR_4 = VAR_3->msg_buf_remaining;

 FUNC_0(VAR_3, VAR_1,
        VAR_4 << VAR_2);
}
