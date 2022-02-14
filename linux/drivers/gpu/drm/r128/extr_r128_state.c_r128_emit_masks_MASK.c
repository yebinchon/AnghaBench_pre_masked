
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int plane_3d_mask_c; int sten_ref_mask_c; int dp_write_mask; } ;
struct TYPE_5__ {TYPE_3__ context_state; } ;
typedef TYPE_1__ drm_r128_sarea_t ;
struct TYPE_6__ {TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_r128_private_t ;
typedef TYPE_3__ drm_r128_context_regs_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static __inline__ void FUNC_5(drm_r128_private_t *VAR_3)
{
 drm_r128_sarea_t *VAR_4 = VAR_3->sarea_priv;
 drm_r128_context_regs_t *VAR_5 = &VAR_4->context_state;
 VAR_2;
 FUNC_3("\n");

 FUNC_1(5);

 FUNC_4(FUNC_2(VAR_0, 0));
 FUNC_4(VAR_5->dp_write_mask);

 FUNC_4(FUNC_2(VAR_1, 1));
 FUNC_4(VAR_5->sten_ref_mask_c);
 FUNC_4(VAR_5->plane_3d_mask_c);

 FUNC_0();
}
