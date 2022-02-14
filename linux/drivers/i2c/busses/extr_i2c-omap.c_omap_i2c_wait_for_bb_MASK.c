
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_i2c_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct omap_i2c_dev*,int ) ;
 int FUNC_2 (struct omap_i2c_dev*) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct omap_i2c_dev *VAR_4)
{
 unsigned long VAR_5;

 VAR_5 = VAR_3 + VAR_2;
 while (FUNC_1(VAR_4, VAR_1) & VAR_0) {
  if (FUNC_3(VAR_3, VAR_5))
   return FUNC_2(VAR_4);
  FUNC_0(1);
 }

 return 0;
}
