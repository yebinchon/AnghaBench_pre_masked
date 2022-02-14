
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct arizona_extcon_info {struct arizona* arizona; } ;
struct TYPE_2__ {int micd_force_micbias; } ;
struct arizona {int dev; TYPE_1__ pdata; struct snd_soc_dapm_context* dapm; } ;


 char* FUNC_0 (struct arizona_extcon_info*) ;
 int FUNC_1 (int ,char*,char const*,int) ;
 int FUNC_2 (struct snd_soc_component*,char const*) ;
 int FUNC_3 (struct snd_soc_component*,char const*) ;
 int FUNC_4 (struct snd_soc_dapm_context*) ;
 struct snd_soc_component* FUNC_5 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static void FUNC_6(struct arizona_extcon_info *VAR_0)
{
 struct arizona *VAR_1 = VAR_0->arizona;
 const char *VAR_2 = FUNC_0(VAR_0);
 struct snd_soc_dapm_context *VAR_3 = VAR_1->dapm;
 struct snd_soc_component *VAR_4 = FUNC_5(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_3(VAR_4, VAR_2);
 if (VAR_5 != 0)
  FUNC_1(VAR_1->dev, "Failed to enable %s: %d\n",
    VAR_2, VAR_5);

 FUNC_4(VAR_3);

 if (!VAR_1->pdata.micd_force_micbias) {
  VAR_5 = FUNC_2(VAR_4, VAR_2);
  if (VAR_5 != 0)
   FUNC_1(VAR_1->dev, "Failed to disable %s: %d\n",
     VAR_2, VAR_5);

  FUNC_4(VAR_3);
 }
}
