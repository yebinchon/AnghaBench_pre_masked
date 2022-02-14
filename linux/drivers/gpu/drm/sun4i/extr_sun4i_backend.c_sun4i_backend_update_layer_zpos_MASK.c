
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4i_layer_state {unsigned int pipe; } ;
struct TYPE_2__ {int regs; } ;
struct sun4i_backend {TYPE_1__ engine; } ;
struct drm_plane_state {unsigned int normalized_zpos; } ;
struct drm_plane {struct drm_plane_state* state; } ;


 int FUNC_0 (char*,int,unsigned int,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_0 ;
 int FUNC_3 (unsigned int) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,int,int) ;
 struct sun4i_layer_state* FUNC_5 (struct drm_plane_state*) ;

int FUNC_6(struct sun4i_backend *VAR_2, int VAR_3,
        struct drm_plane *VAR_4)
{
 struct drm_plane_state *VAR_5 = VAR_4->state;
 struct sun4i_layer_state *VAR_6 = FUNC_5(VAR_5);
 unsigned int VAR_7 = VAR_5->normalized_zpos;
 unsigned int VAR_8 = VAR_6->pipe;

 FUNC_0("Setting layer %d's priority to %d and pipe %d\n",
    VAR_3, VAR_7, VAR_8);
 FUNC_4(VAR_2->engine.regs, FUNC_1(VAR_3),
      VAR_0 |
      VAR_1,
      FUNC_2(VAR_6->pipe) |
      FUNC_3(VAR_7));

 return 0;
}
