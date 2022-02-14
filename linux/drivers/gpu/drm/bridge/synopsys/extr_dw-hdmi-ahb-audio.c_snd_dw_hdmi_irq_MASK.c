
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {scalar_t__ base; } ;
struct snd_dw_hdmi {int lock; struct snd_pcm_substream* substream; TYPE_1__ data; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_dw_hdmi*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 struct snd_dw_hdmi *VAR_6 = VAR_5;
 struct snd_pcm_substream *VAR_7;
 unsigned VAR_8;

 VAR_8 = FUNC_1(VAR_6->data.base + VAR_0);
 if (!VAR_8)
  return VAR_3;

 FUNC_5(VAR_8, VAR_6->data.base + VAR_0);

 VAR_7 = VAR_6->substream;
 if (VAR_8 & VAR_1 && VAR_7) {
  FUNC_2(VAR_7);

  FUNC_3(&VAR_6->lock);
  if (VAR_6->substream)
   FUNC_0(VAR_6);
  FUNC_4(&VAR_6->lock);
 }

 return VAR_2;
}
