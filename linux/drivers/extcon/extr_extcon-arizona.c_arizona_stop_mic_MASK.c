
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct arizona_extcon_info {int dev; int micvdd; scalar_t__ micd_reva; struct arizona* arizona; } ;
struct arizona {int dev; int regmap; struct snd_soc_dapm_context* dapm; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct arizona_extcon_info*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,char const*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ,int*) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct snd_soc_component*,char const*) ;
 int FUNC_10 (struct snd_soc_dapm_context*) ;
 struct snd_soc_component* FUNC_11 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static void FUNC_12(struct arizona_extcon_info *VAR_2)
{
 struct arizona *VAR_3 = VAR_2->arizona;
 const char *VAR_4 = FUNC_0(VAR_2);
 struct snd_soc_dapm_context *VAR_5 = VAR_3->dapm;
 struct snd_soc_component *VAR_6 = FUNC_11(VAR_5);
 bool VAR_7 = 0;
 int VAR_8;

 VAR_8 = FUNC_5(VAR_3->regmap, VAR_1,
           VAR_0, 0,
           &VAR_7);
 if (VAR_8 < 0)
  FUNC_1(VAR_3->dev, "Failed to disable micd: %d\n", VAR_8);

 VAR_8 = FUNC_9(VAR_6, VAR_4);
 if (VAR_8 != 0)
  FUNC_2(VAR_3->dev,
    "Failed to disable %s: %d\n",
    VAR_4, VAR_8);

 FUNC_10(VAR_5);

 if (VAR_2->micd_reva) {
  FUNC_6(VAR_3->regmap, 0x80, 0x3);
  FUNC_6(VAR_3->regmap, 0x294, 2);
  FUNC_6(VAR_3->regmap, 0x80, 0x0);
 }

 VAR_8 = FUNC_7(VAR_2->micvdd, 1);
 if (VAR_8 != 0) {
  FUNC_1(VAR_3->dev, "Failed to bypass MICVDD: %d\n",
   VAR_8);
 }

 if (VAR_7) {
  FUNC_8(VAR_2->micvdd);
  FUNC_3(VAR_2->dev);
  FUNC_4(VAR_2->dev);
 }
}
