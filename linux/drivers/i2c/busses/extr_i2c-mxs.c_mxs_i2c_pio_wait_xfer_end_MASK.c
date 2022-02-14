
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_i2c_dev {scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 unsigned long VAR_6 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct mxs_i2c_dev *VAR_7)
{
 unsigned long VAR_8 = VAR_6 + FUNC_1(1000);

 while (FUNC_2(VAR_7->regs + VAR_2) & VAR_3) {
  if (FUNC_2(VAR_7->regs + VAR_4) &
    VAR_5)
   return -VAR_0;
  if (FUNC_3(VAR_6, VAR_8))
   return -VAR_1;
  FUNC_0();
 }

 return 0;
}
