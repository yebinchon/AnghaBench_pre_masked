
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct max14577_muic_info {int dev; TYPE_1__* max14577; } ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,int,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct max14577_muic_info *VAR_6,
  u8 VAR_7, bool VAR_8)
{
 u8 VAR_9, VAR_10 = 0;
 int VAR_11;


 VAR_11 = FUNC_2(VAR_6->max14577->regmap,
    VAR_4,
    VAR_0, VAR_1);
 if (VAR_11 < 0) {
  FUNC_1(VAR_6->dev, "failed to update MUIC register\n");
  return VAR_11;
 }

 if (VAR_8)
  VAR_9 = VAR_7;
 else
  VAR_9 = VAR_1;

 VAR_11 = FUNC_2(VAR_6->max14577->regmap,
    VAR_4,
    VAR_0, VAR_9);
 if (VAR_11 < 0) {
  FUNC_1(VAR_6->dev, "failed to update MUIC register\n");
  return VAR_11;
 }

 if (VAR_8)
  VAR_10 |= VAR_2;
 else
  VAR_10 |= VAR_3;

 VAR_11 = FUNC_2(VAR_6->max14577->regmap,
   VAR_5,
   VAR_3 | VAR_2, VAR_10);
 if (VAR_11 < 0) {
  FUNC_1(VAR_6->dev, "failed to update MUIC register\n");
  return VAR_11;
 }

 FUNC_0(VAR_6->dev,
  "CONTROL1 : 0x%02x, CONTROL2 : 0x%02x, state : %s\n",
  VAR_9, VAR_10, VAR_8 ? "attached" : "detached");

 return 0;
}
