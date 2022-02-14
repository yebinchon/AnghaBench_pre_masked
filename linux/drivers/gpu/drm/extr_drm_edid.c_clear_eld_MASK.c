
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {int* latency_present; scalar_t__* audio_latency; scalar_t__* video_latency; int eld; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct drm_connector *VAR_0)
{
 FUNC_0(VAR_0->eld, 0, sizeof(VAR_0->eld));

 VAR_0->latency_present[0] = 0;
 VAR_0->latency_present[1] = 0;
 VAR_0->video_latency[0] = 0;
 VAR_0->audio_latency[0] = 0;
 VAR_0->video_latency[1] = 0;
 VAR_0->audio_latency[1] = 0;
}
