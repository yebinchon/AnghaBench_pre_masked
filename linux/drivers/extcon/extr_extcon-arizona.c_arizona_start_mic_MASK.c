
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct arizona_extcon_info {int dev; int micvdd; scalar_t__ detecting; scalar_t__ micd_reva; struct arizona* arizona; } ;
struct TYPE_2__ {scalar_t__ micd_software_compare; } ;
struct arizona {int dev; int regmap; TYPE_1__ pdata; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct arizona_extcon_info*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,unsigned int) ;
 int FUNC_5 (int ,int ,int ,int ,int*) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct arizona_extcon_info *VAR_6)
{
 struct arizona *VAR_7 = VAR_6->arizona;
 bool VAR_8;
 int VAR_9;
 unsigned int VAR_10;


 FUNC_2(VAR_6->dev);

 if (VAR_6->detecting) {
  VAR_9 = FUNC_7(VAR_6->micvdd, 0);
  if (VAR_9 != 0) {
   FUNC_1(VAR_7->dev,
    "Failed to regulate MICVDD: %d\n",
    VAR_9);
  }
 }

 VAR_9 = FUNC_9(VAR_6->micvdd);
 if (VAR_9 != 0) {
  FUNC_1(VAR_7->dev, "Failed to enable MICVDD: %d\n",
   VAR_9);
 }

 if (VAR_6->micd_reva) {
  FUNC_6(VAR_7->regmap, 0x80, 0x3);
  FUNC_6(VAR_7->regmap, 0x294, 0);
  FUNC_6(VAR_7->regmap, 0x80, 0x0);
 }

 if (VAR_6->detecting && VAR_7->pdata.micd_software_compare)
  VAR_10 = VAR_0;
 else
  VAR_10 = VAR_2;

 FUNC_4(VAR_7->regmap,
      VAR_3,
      VAR_1, VAR_10);

 FUNC_0(VAR_6);

 VAR_9 = FUNC_5(VAR_7->regmap, VAR_5,
           VAR_4, VAR_4,
           &VAR_8);
 if (VAR_9 < 0) {
  FUNC_1(VAR_7->dev, "Failed to enable micd: %d\n", VAR_9);
 } else if (!VAR_8) {
  FUNC_8(VAR_6->micvdd);
  FUNC_3(VAR_6->dev);
 }
}
