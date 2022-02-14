
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axxia_i2c_dev {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct axxia_i2c_dev *VAR_5)
{
 unsigned long VAR_6 = VAR_4 + VAR_2;

 do {
  if ((FUNC_0(VAR_5->base + VAR_3) & VAR_0) == 0)
   return 0;
  FUNC_2(1, 100);
 } while (FUNC_1(VAR_4, VAR_6));

 return -VAR_1;
}
