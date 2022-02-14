
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_hdmi {int audio_enable; int audio_lock; int (* disable_audio ) (struct dw_hdmi*) ;} ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct dw_hdmi*) ;

void FUNC_3(struct dw_hdmi *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_0->audio_lock, VAR_1);
 VAR_0->audio_enable = 0;
 if (VAR_0->disable_audio)
  VAR_0->disable_audio(VAR_0);
 FUNC_1(&VAR_0->audio_lock, VAR_1);
}
