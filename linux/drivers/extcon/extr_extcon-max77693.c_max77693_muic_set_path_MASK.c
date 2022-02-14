
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct max77693_muic_info {int dev; TYPE_1__* max77693; } ;
struct TYPE_2__ {int regmap_muic; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int,char*) ;
 int FUNC_2 (int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct max77693_muic_info *VAR_6,
  u8 VAR_7, bool VAR_8)
{
 int VAR_9;
 unsigned int VAR_10, VAR_11 = 0;

 if (VAR_8)
  VAR_10 = VAR_7;
 else
  VAR_10 = VAR_1;

 VAR_9 = FUNC_2(VAR_6->max77693->regmap_muic,
   VAR_4, VAR_0, VAR_10);
 if (VAR_9 < 0) {
  FUNC_0(VAR_6->dev, "failed to update MUIC register\n");
  return VAR_9;
 }

 if (VAR_8)
  VAR_11 |= VAR_2;
 else
  VAR_11 |= VAR_3;

 VAR_9 = FUNC_2(VAR_6->max77693->regmap_muic,
   VAR_5,
   VAR_3 | VAR_2,
   VAR_11);
 if (VAR_9 < 0) {
  FUNC_0(VAR_6->dev, "failed to update MUIC register\n");
  return VAR_9;
 }

 FUNC_1(VAR_6->dev,
  "CONTROL1 : 0x%02x, CONTROL2 : 0x%02x, state : %s\n",
  VAR_10, VAR_11, VAR_8 ? "attached" : "detached");

 return 0;
}
