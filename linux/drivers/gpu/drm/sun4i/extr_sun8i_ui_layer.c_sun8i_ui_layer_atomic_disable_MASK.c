
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun8i_ui_layer {int overlay; int channel; struct sun8i_mixer* mixer; } ;
struct sun8i_mixer {int dummy; } ;
struct drm_plane_state {unsigned int normalized_zpos; } ;
struct drm_plane {int dummy; } ;


 struct sun8i_ui_layer* FUNC_0 (struct drm_plane*) ;
 int FUNC_1 (struct sun8i_mixer*,int ,int ,int,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct drm_plane *VAR_0,
       struct drm_plane_state *VAR_1)
{
 struct sun8i_ui_layer *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3 = VAR_1->normalized_zpos;
 struct sun8i_mixer *VAR_4 = VAR_2->mixer;

 FUNC_1(VAR_4, VAR_2->channel, VAR_2->overlay, 0, 0,
         VAR_3);
}
