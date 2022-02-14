
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct talitos_private {scalar_t__ reg_rngu; } ;
struct hwrng {scalar_t__ priv; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct talitos_private* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct hwrng *VAR_2, int VAR_3)
{
 struct device *VAR_4 = (struct device *)VAR_2->priv;
 struct talitos_private *VAR_5 = FUNC_0(VAR_4);
 u32 VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 20; VAR_7++) {
  VAR_6 = FUNC_1(VAR_5->reg_rngu + VAR_0) &
        VAR_1;
  if (VAR_6 || !VAR_3)
   break;
  FUNC_2(10);
 }

 return !!VAR_6;
}
