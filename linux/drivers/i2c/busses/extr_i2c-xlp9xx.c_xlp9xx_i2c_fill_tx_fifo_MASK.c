
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct xlp9xx_i2c_dev {int * msg_buf; int msg_buf_remaining; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ,int ) ;
 int FUNC_1 (struct xlp9xx_i2c_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct xlp9xx_i2c_dev *VAR_2)
{
 u32 VAR_3, VAR_4;
 u8 *VAR_5 = VAR_2->msg_buf;

 VAR_3 = FUNC_0(VAR_2->msg_buf_remaining, VAR_0);
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_1(VAR_2, VAR_1, VAR_5[VAR_4]);
 VAR_2->msg_buf_remaining -= VAR_3;
 VAR_2->msg_buf += VAR_3;
}
