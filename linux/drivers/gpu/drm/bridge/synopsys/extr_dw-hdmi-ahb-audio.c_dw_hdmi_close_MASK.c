
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_dw_hdmi* private_data; } ;
struct TYPE_2__ {int irq; scalar_t__ base; } ;
struct snd_dw_hdmi {TYPE_1__ data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct snd_dw_hdmi*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_2)
{
 struct snd_dw_hdmi *VAR_3 = VAR_2->private_data;


 FUNC_1(VAR_1,
         VAR_3->data.base + VAR_0);

 FUNC_0(VAR_3->data.irq, VAR_3);

 return 0;
}
