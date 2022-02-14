
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int flags; } ;
struct drm_connector {int* audio_latency; int* video_latency; int * latency_present; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;

int FUNC_2(struct drm_connector *VAR_1,
        const struct drm_display_mode *VAR_2)
{
 int VAR_3 = !!(VAR_2->flags & VAR_0);
 int VAR_4, VAR_5;

 if (!VAR_1->latency_present[0])
  return 0;
 if (!VAR_1->latency_present[1])
  VAR_3 = 0;

 VAR_4 = VAR_1->audio_latency[VAR_3];
 VAR_5 = VAR_1->video_latency[VAR_3];




 if (VAR_4 == 255 || VAR_5 == 255)
  return 0;





 if (VAR_4)
  VAR_4 = FUNC_1(2 * (VAR_4 - 1), 500);
 if (VAR_5)
  VAR_5 = FUNC_1(2 * (VAR_5 - 1), 500);

 return FUNC_0(VAR_5 - VAR_4, 0);
}
