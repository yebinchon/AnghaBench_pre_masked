
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct arizona_extcon_info {int hpdet_ip_version; struct arizona* arizona; } ;
struct arizona {int dev; int regmap; } ;
struct TYPE_4__ {unsigned int threshold; unsigned int factor_b; unsigned int max; unsigned int min; int factor_a; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__* VAR_13 ;
 TYPE_1__* VAR_14 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct arizona_extcon_info *VAR_15)
{
 struct arizona *VAR_16 = VAR_15->arizona;
 unsigned int VAR_17, VAR_18;
 int VAR_19;

 VAR_19 = FUNC_4(VAR_16->regmap, VAR_1, &VAR_17);
 if (VAR_19 != 0) {
  FUNC_2(VAR_16->dev, "Failed to read HPDET status: %d\n",
   VAR_19);
  return VAR_19;
 }

 switch (VAR_15->hpdet_ip_version) {
 case 0:
  if (!(VAR_17 & VAR_5)) {
   FUNC_2(VAR_16->dev, "HPDET did not complete: %x\n",
    VAR_17);
   return -VAR_11;
  }

  VAR_17 &= VAR_10;
  break;

 case 1:
  if (!(VAR_17 & VAR_6)) {
   FUNC_2(VAR_16->dev, "HPDET did not complete: %x\n",
    VAR_17);
   return -VAR_11;
  }

  VAR_19 = FUNC_4(VAR_16->regmap, VAR_4, &VAR_17);
  if (VAR_19 != 0) {
   FUNC_2(VAR_16->dev, "Failed to read HP value: %d\n",
    VAR_19);
   return -VAR_11;
  }

  FUNC_4(VAR_16->regmap, VAR_0,
       &VAR_18);
  VAR_18 = (VAR_18 & VAR_7)
      >> VAR_8;

  if (VAR_18 < FUNC_0(VAR_13) - 1 &&
      (VAR_17 < VAR_13[VAR_18].threshold ||
       VAR_17 >= VAR_2)) {
   VAR_18++;
   FUNC_1(VAR_16->dev, "Moving to HPDET range %d\n",
    VAR_18);
   FUNC_5(VAR_16->regmap,
        VAR_0,
        VAR_7,
        VAR_18 <<
        VAR_8);
   return -VAR_11;
  }


  if (VAR_17 < VAR_13[VAR_18].threshold ||
      VAR_17 >= VAR_2) {
   FUNC_1(VAR_16->dev, "Measurement out of range\n");
   return VAR_3;
  }

  FUNC_1(VAR_16->dev, "HPDET read %d in range %d\n",
   VAR_17, VAR_18);

  VAR_17 = VAR_13[VAR_18].factor_b
   / ((VAR_17 * 100) -
      VAR_13[VAR_18].factor_a);
  break;

 case 2:
  if (!(VAR_17 & VAR_6)) {
   FUNC_2(VAR_16->dev, "HPDET did not complete: %x\n",
    VAR_17);
   return -VAR_11;
  }

  VAR_17 &= VAR_9;

  VAR_17 /= 2;

  FUNC_4(VAR_16->regmap, VAR_0,
       &VAR_18);
  VAR_18 = (VAR_18 & VAR_7)
      >> VAR_8;


  if (VAR_18 < FUNC_0(VAR_14) - 1 &&
      (VAR_17 >= VAR_14[VAR_18].max)) {
   VAR_18++;
   FUNC_1(VAR_16->dev, "Moving to HPDET range %d-%d\n",
    VAR_14[VAR_18].min,
    VAR_14[VAR_18].max);
   FUNC_5(VAR_16->regmap,
        VAR_0,
        VAR_7,
        VAR_18 <<
        VAR_8);
   return -VAR_11;
  }

  if (VAR_18 && (VAR_17 < VAR_14[VAR_18].min)) {
   FUNC_1(VAR_16->dev, "Reporting range boundary %d\n",
    VAR_14[VAR_18].min);
   VAR_17 = VAR_14[VAR_18].min;
  }
  break;

 default:
  FUNC_3(VAR_16->dev, "Unknown HPDET IP revision %d\n",
    VAR_15->hpdet_ip_version);
  return -VAR_12;
 }

 FUNC_1(VAR_16->dev, "HP impedance %d ohms\n", VAR_17);
 return VAR_17;
}
