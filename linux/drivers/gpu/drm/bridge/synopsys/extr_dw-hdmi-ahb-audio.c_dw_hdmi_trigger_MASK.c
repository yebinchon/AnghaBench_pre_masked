
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; struct snd_dw_hdmi* private_data; } ;
struct TYPE_4__ {int hdmi; } ;
struct snd_dw_hdmi {int lock; TYPE_2__ data; struct snd_pcm_substream* substream; int buf_offset; } ;
struct TYPE_3__ {int period_size; int delay; } ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_dw_hdmi*) ;
 int FUNC_3 (struct snd_dw_hdmi*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct snd_dw_hdmi *VAR_3 = VAR_1->private_data;
 unsigned long VAR_4;
 int VAR_5 = 0;

 switch (VAR_2) {
 case 129:
  FUNC_4(&VAR_3->lock, VAR_4);
  VAR_3->buf_offset = 0;
  VAR_3->substream = VAR_1;
  FUNC_2(VAR_3);
  FUNC_1(VAR_3->data.hdmi);
  FUNC_5(&VAR_3->lock, VAR_4);
  VAR_1->runtime->delay = VAR_1->runtime->period_size;
  break;

 case 128:
  FUNC_4(&VAR_3->lock, VAR_4);
  VAR_3->substream = ((void*)0);
  FUNC_3(VAR_3);
  FUNC_0(VAR_3->data.hdmi);
  FUNC_5(&VAR_3->lock, VAR_4);
  break;

 default:
  VAR_5 = -VAR_0;
  break;
 }

 return VAR_5;
}
