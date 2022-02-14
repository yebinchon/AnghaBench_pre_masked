
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlp9xx_i2c_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct xlp9xx_i2c_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct xlp9xx_i2c_dev *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6 = VAR_1;

 while (VAR_6) {
  VAR_5 = FUNC_1(VAR_4, VAR_2);
  if ((VAR_5 & VAR_3) == 0)
   break;

  VAR_6--;
  FUNC_0(1000, 1100);
 }

 if (!VAR_6)
  return -VAR_0;

 return 0;
}
