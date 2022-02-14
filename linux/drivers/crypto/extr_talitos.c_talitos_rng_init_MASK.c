
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_private {scalar_t__ reg_rngu; } ;
struct hwrng {scalar_t__ priv; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (struct device*,char*) ;
 struct talitos_private* FUNC_2 (struct device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(struct hwrng *VAR_7)
{
 struct device *VAR_8 = (struct device *)VAR_7->priv;
 struct talitos_private *VAR_9 = FUNC_2(VAR_8);
 unsigned int VAR_10 = VAR_6;

 FUNC_4(VAR_9->reg_rngu + VAR_2, VAR_4);
 while (!(FUNC_3(VAR_9->reg_rngu + VAR_3)
   & VAR_5)
        && --VAR_10)
  FUNC_0();
 if (VAR_10 == 0) {
  FUNC_1(VAR_8, "failed to reset rng hw\n");
  return -VAR_0;
 }


 FUNC_4(VAR_9->reg_rngu + VAR_1, 0);

 return 0;
}
