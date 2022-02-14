
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int texctl2; int texctl; int texfilter; int texbordercol; int texorg; int texorg1; int texorg2; int texorg3; int texorg4; int texwidth; int texheight; } ;
typedef TYPE_1__ drm_mga_texture_regs_t ;
struct TYPE_6__ {TYPE_1__* tex_state; } ;
typedef TYPE_2__ drm_mga_sarea_t ;
struct TYPE_7__ {TYPE_2__* sarea_priv; } ;
typedef TYPE_3__ drm_mga_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int ,int,int ,int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static __inline__ void FUNC_3(drm_mga_private_t *VAR_25)
{
 drm_mga_sarea_t *VAR_26 = VAR_25->sarea_priv;
 drm_mga_texture_regs_t *VAR_27 = &VAR_26->tex_state[0];
 VAR_0;




 FUNC_1(6);

 FUNC_2(VAR_6, VAR_27->texctl2 | VAR_2,
    VAR_5, VAR_27->texctl,
    VAR_7, VAR_27->texfilter,
    VAR_4, VAR_27->texbordercol);

 FUNC_2(VAR_9, VAR_27->texorg,
    VAR_10, VAR_27->texorg1,
    VAR_11, VAR_27->texorg2, VAR_12, VAR_27->texorg3);

 FUNC_2(VAR_13, VAR_27->texorg4,
    VAR_16, VAR_27->texwidth,
    VAR_8, VAR_27->texheight, VAR_17, 0x00000000);

 FUNC_2(VAR_21, 0x00000000,
    VAR_19, 0x00000000,
    VAR_23, 0x00000000, VAR_18, VAR_3);

 FUNC_2(VAR_22, VAR_3,
    VAR_20, VAR_27->texwidth | VAR_3,
    VAR_24, VAR_27->texheight | VAR_3,
    VAR_1, 0x00000000);

 FUNC_2(VAR_1, 0x00000000,
    VAR_1, 0x00000000,
    VAR_14, 0x0000ffff, VAR_15, 0x0000ffff);

 FUNC_0();
}
