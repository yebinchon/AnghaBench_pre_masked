
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int tex_border_color; int * tex_offset; int tex_combine_cntl; int tex_cntl; } ;
typedef TYPE_1__ drm_r128_texture_regs_t ;
struct TYPE_9__ {int constant_color_c; int tex_size_pitch_c; } ;
struct TYPE_7__ {TYPE_1__* tex_state; TYPE_4__ context_state; } ;
typedef TYPE_2__ drm_r128_sarea_t ;
struct TYPE_8__ {TYPE_2__* sarea_priv; } ;
typedef TYPE_3__ drm_r128_private_t ;
typedef TYPE_4__ drm_r128_context_regs_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static __inline__ void FUNC_5(drm_r128_private_t *VAR_4)
{
 drm_r128_sarea_t *VAR_5 = VAR_4->sarea_priv;
 drm_r128_context_regs_t *VAR_6 = &VAR_5->context_state;
 drm_r128_texture_regs_t *VAR_7 = &VAR_5->tex_state[0];
 int VAR_8;
 VAR_3;
 FUNC_3("\n");

 FUNC_1(7 + VAR_1);

 FUNC_4(FUNC_2(VAR_2,
        2 + VAR_1));
 FUNC_4(VAR_7->tex_cntl);
 FUNC_4(VAR_7->tex_combine_cntl);
 FUNC_4(VAR_6->tex_size_pitch_c);
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  FUNC_4(VAR_7->tex_offset[VAR_8]);

 FUNC_4(FUNC_2(VAR_0, 1));
 FUNC_4(VAR_6->constant_color_c);
 FUNC_4(VAR_7->tex_border_color);

 FUNC_0();
}
