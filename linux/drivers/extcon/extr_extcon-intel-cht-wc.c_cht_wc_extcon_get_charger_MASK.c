
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cht_wc_extcon_data {int dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 unsigned long VAR_10 ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int*) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct cht_wc_extcon_data *VAR_11,
         bool VAR_12)
{
 int VAR_13, VAR_14, VAR_15;
 unsigned long VAR_16;


 VAR_16 = VAR_10 + FUNC_2(800);
 do {
  VAR_13 = FUNC_4(VAR_11->regmap, VAR_0, &VAR_14);
  if (VAR_13) {
   FUNC_0(VAR_11->dev, "Error reading usbsrc: %d\n", VAR_13);
   return VAR_13;
  }

  VAR_15 = VAR_14 & VAR_2;
  if (VAR_15 == VAR_3 ||
      VAR_15 == VAR_1)
   break;

  FUNC_3(50);
 } while (FUNC_5(VAR_10, VAR_16));

 if (VAR_15 != VAR_3) {
  if (VAR_12)
   return VAR_9;

  if (VAR_15 == VAR_1)
   FUNC_1(VAR_11->dev, "Could not detect charger type\n");
  else
   FUNC_1(VAR_11->dev, "Timeout detecting charger type\n");
  return VAR_9;
 }

 VAR_14 = (VAR_14 & VAR_4) >> VAR_5;
 switch (VAR_14) {
 default:
  FUNC_1(VAR_11->dev,
   "Unhandled charger type %d, defaulting to SDP\n",
    VAR_13);
  return VAR_9;
 case 128:
 case 131:
 case 129:
  return VAR_9;
 case 134:
  return VAR_7;
 case 133:
 case 132:
 case 130:
  return VAR_8;
 case 135:
  return VAR_6;
 }
}
