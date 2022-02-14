
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona_extcon_info {int hpdet_ip_version; struct arizona* arizona; } ;
struct arizona {int dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct arizona_extcon_info *VAR_6)
{
 struct arizona *VAR_7 = VAR_6->arizona;
 unsigned int VAR_8;
 int VAR_9, VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_10 = FUNC_3(VAR_7->regmap, VAR_0,
    &VAR_8);
  if (VAR_10) {
   FUNC_0(VAR_7->dev,
    "Failed to read HPDET state: %d\n", VAR_10);
   return VAR_10;
  }

  switch (VAR_6->hpdet_ip_version) {
  case 0:
   if (VAR_8 & VAR_3)
    return 0;
   break;
  default:
   if (VAR_8 & VAR_4)
    return 0;
   break;
  }

  FUNC_2(VAR_2);
 }

 FUNC_1(VAR_7->dev, "HPDET did not appear to complete\n");

 return -VAR_5;
}
