
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_hdmi {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_soc_card {int dummy; } ;


 struct vc4_hdmi* FUNC_0 (struct snd_soc_card*) ;
 struct snd_soc_card* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static inline struct vc4_hdmi *
FUNC_2(struct snd_soc_component *VAR_0)
{
 struct snd_soc_card *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1);
}
