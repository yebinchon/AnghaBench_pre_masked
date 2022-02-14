
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_i2c {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pxa_i2c*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pxa_i2c*) ;

__attribute__((used)) static int FUNC_4(struct pxa_i2c *VAR_5)
{
 int VAR_6 = VAR_0;

 while (VAR_6-- && FUNC_2(FUNC_0(VAR_5)) & (VAR_2 | VAR_4)) {
  if ((FUNC_2(FUNC_0(VAR_5)) & VAR_3) != 0)
   VAR_6 += 4;

  FUNC_1(2);
  FUNC_3(VAR_5);
 }

 if (VAR_6 < 0)
  FUNC_3(VAR_5);

 return VAR_6 < 0 ? VAR_1 : 0;
}
