
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_2__ {size_t channel_allocation; size_t level_shift_value; int downmix_inhibit; int channels; } ;
struct hdmi_audio {int enabled; TYPE_1__ infoframe; } ;
struct hdmi {struct hdmi_audio audio; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct hdmi*) ;
 int * VAR_2 ;

int FUNC_2(struct hdmi *VAR_3, bool VAR_4,
 uint32_t VAR_5, uint32_t VAR_6,
 uint32_t VAR_7, bool VAR_8)
{
 struct hdmi_audio *VAR_9;

 if (!VAR_3)
  return -VAR_1;

 VAR_9 = &VAR_3->audio;

 if (VAR_5 >= FUNC_0(VAR_2))
  return -VAR_0;

 VAR_9->enabled = VAR_4;
 VAR_9->infoframe.channels = VAR_2[VAR_5];
 VAR_9->infoframe.channel_allocation = VAR_6;
 VAR_9->infoframe.level_shift_value = VAR_7;
 VAR_9->infoframe.downmix_inhibit = VAR_8;

 return FUNC_1(VAR_3);
}
