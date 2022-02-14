
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_connector {int* latency_present; int* video_latency; int* audio_latency; int * eld; } ;


 int FUNC_0 (char*,int,int,int,int,int,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static void
FUNC_2(struct drm_connector *VAR_2, const u8 *VAR_3)
{
 u8 VAR_4 = FUNC_1(VAR_3);

 if (VAR_4 >= 6 && (VAR_3[6] & (1 << 7)))
  VAR_2->eld[VAR_0] |= VAR_1;
 if (VAR_4 >= 8) {
  VAR_2->latency_present[0] = VAR_3[8] >> 7;
  VAR_2->latency_present[1] = (VAR_3[8] >> 6) & 1;
 }
 if (VAR_4 >= 9)
  VAR_2->video_latency[0] = VAR_3[9];
 if (VAR_4 >= 10)
  VAR_2->audio_latency[0] = VAR_3[10];
 if (VAR_4 >= 11)
  VAR_2->video_latency[1] = VAR_3[11];
 if (VAR_4 >= 12)
  VAR_2->audio_latency[1] = VAR_3[12];

 FUNC_0("HDMI: latency present %d %d, "
        "video latency %d %d, "
        "audio latency %d %d\n",
        VAR_2->latency_present[0],
        VAR_2->latency_present[1],
        VAR_2->video_latency[0],
        VAR_2->video_latency[1],
        VAR_2->audio_latency[0],
        VAR_2->audio_latency[1]);
}
