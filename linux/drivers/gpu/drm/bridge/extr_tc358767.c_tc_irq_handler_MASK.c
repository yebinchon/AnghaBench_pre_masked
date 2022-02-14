
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ dev; } ;
struct tc_data {scalar_t__ hpd_pin; int regmap; TYPE_1__ bridge; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,scalar_t__,char*,char*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_5, void *VAR_6)
{
 struct tc_data *VAR_7 = VAR_6;
 u32 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_5(VAR_7->regmap, VAR_0, &VAR_8);
 if (VAR_9)
  return VAR_3;

 if (!VAR_8)
  return VAR_3;

 if (VAR_8 & VAR_1) {
  u32 VAR_10 = 0;

  FUNC_5(VAR_7->regmap, VAR_4, &VAR_10);

  FUNC_3(VAR_7->dev, "syserr %x\n", VAR_10);
 }

 if (VAR_7->hpd_pin >= 0 && VAR_7->bridge.dev) {






  bool VAR_11 = VAR_8 & FUNC_0(VAR_7->hpd_pin);
  bool VAR_12 = VAR_8 & FUNC_1(VAR_7->hpd_pin);

  FUNC_2(VAR_7->dev, "GPIO%d: %s %s\n", VAR_7->hpd_pin,
   VAR_11 ? "H" : "", VAR_12 ? "LC" : "");

  if (VAR_11 || VAR_12)
   FUNC_4(VAR_7->bridge.dev);
 }

 FUNC_6(VAR_7->regmap, VAR_0, VAR_8);

 return VAR_2;
}
