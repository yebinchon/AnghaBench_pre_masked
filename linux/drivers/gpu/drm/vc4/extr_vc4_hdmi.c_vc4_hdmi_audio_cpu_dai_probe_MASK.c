
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma_data; } ;
struct vc4_hdmi {TYPE_1__ audio; } ;
struct snd_soc_dai {int dummy; } ;


 struct vc4_hdmi* FUNC_0 (struct snd_soc_dai*) ;
 int FUNC_1 (struct snd_soc_dai*,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_0)
{
 struct vc4_hdmi *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, &VAR_1->audio.dma_data, ((void*)0));

 return 0;
}
