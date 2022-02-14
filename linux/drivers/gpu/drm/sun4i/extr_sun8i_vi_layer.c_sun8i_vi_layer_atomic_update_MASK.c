
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun8i_vi_layer {int overlay; int channel; struct sun8i_mixer* mixer; } ;
struct sun8i_mixer {int dummy; } ;
struct drm_plane_state {unsigned int normalized_zpos; } ;
struct drm_plane {TYPE_1__* state; } ;
struct TYPE_2__ {unsigned int normalized_zpos; int visible; } ;


 struct sun8i_vi_layer* FUNC_0 (struct drm_plane*) ;
 int FUNC_1 (struct sun8i_mixer*,int ,int ,int,unsigned int,unsigned int) ;
 int FUNC_2 (struct sun8i_mixer*,int ,int ,struct drm_plane*) ;
 int FUNC_3 (struct sun8i_mixer*,int ,int ,struct drm_plane*,unsigned int) ;
 int FUNC_4 (struct sun8i_mixer*,int ,int ,struct drm_plane*) ;

__attribute__((used)) static void FUNC_5(struct drm_plane *VAR_0,
      struct drm_plane_state *VAR_1)
{
 struct sun8i_vi_layer *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3 = VAR_0->state->normalized_zpos;
 unsigned int VAR_4 = VAR_1->normalized_zpos;
 struct sun8i_mixer *VAR_5 = VAR_2->mixer;

 if (!VAR_0->state->visible) {
  FUNC_1(VAR_5, VAR_2->channel,
          VAR_2->overlay, 0, 0, VAR_4);
  return;
 }

 FUNC_3(VAR_5, VAR_2->channel,
        VAR_2->overlay, VAR_0, VAR_3);
 FUNC_4(VAR_5, VAR_2->channel,
          VAR_2->overlay, VAR_0);
 FUNC_2(VAR_5, VAR_2->channel,
         VAR_2->overlay, VAR_0);
 FUNC_1(VAR_5, VAR_2->channel, VAR_2->overlay,
         1, VAR_3, VAR_4);
}
