
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_private {int num_channels; int features; scalar_t__ reg_mdeu; scalar_t__ reg; scalar_t__ reg_deu; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (scalar_t__,int ) ;
 struct talitos_private* FUNC_1 (struct device*) ;
 int FUNC_2 (struct talitos_private*) ;
 int FUNC_3 (struct device*,int) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_11)
{
 struct talitos_private *VAR_12 = FUNC_1(VAR_11);
 int VAR_13, VAR_14;
 bool VAR_15 = FUNC_2(VAR_12);







 VAR_14 = FUNC_4(VAR_11);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_4(VAR_11);
 if (VAR_14)
  return VAR_14;


 for (VAR_13 = 0; VAR_13 < VAR_12->num_channels; VAR_13++) {
  VAR_14 = FUNC_3(VAR_11, VAR_13);
  if (VAR_14)
   return VAR_14;
 }


 if (VAR_15) {
  FUNC_0(VAR_12->reg + VAR_8, VAR_1);
  FUNC_0(VAR_12->reg + VAR_9, VAR_2);

  FUNC_5(VAR_12->reg_deu + VAR_5, VAR_0);
 } else {
  FUNC_5(VAR_12->reg + VAR_8, VAR_3);
  FUNC_5(VAR_12->reg + VAR_9, VAR_4);
 }


 if (VAR_12->features & VAR_7)
  FUNC_5(VAR_12->reg_mdeu + VAR_6,
            VAR_10);

 return 0;
}
