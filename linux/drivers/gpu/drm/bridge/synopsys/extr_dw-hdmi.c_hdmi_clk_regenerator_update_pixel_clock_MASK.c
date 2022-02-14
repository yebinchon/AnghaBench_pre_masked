
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mtmdsclock; } ;
struct TYPE_4__ {TYPE_1__ video_mode; } ;
struct dw_hdmi {int audio_mutex; int sample_rate; TYPE_2__ hdmi_data; } ;


 int FUNC_0 (struct dw_hdmi*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dw_hdmi *VAR_0)
{
 FUNC_1(&VAR_0->audio_mutex);
 FUNC_0(VAR_0, VAR_0->hdmi_data.video_mode.mtmdsclock,
     VAR_0->sample_rate);
 FUNC_2(&VAR_0->audio_mutex);
}
