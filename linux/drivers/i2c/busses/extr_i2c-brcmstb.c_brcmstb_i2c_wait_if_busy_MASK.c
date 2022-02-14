
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmstb_i2c_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brcmstb_i2c_dev*,int ) ;
 int FUNC_1 () ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct brcmstb_i2c_dev *VAR_5)
{
 unsigned long VAR_6 = VAR_4 + FUNC_2(VAR_2);

 while ((FUNC_0(VAR_5, VAR_3) & VAR_0)) {
  if (FUNC_3(VAR_4, VAR_6))
   return -VAR_1;
  FUNC_1();
 }
 return 0;
}
