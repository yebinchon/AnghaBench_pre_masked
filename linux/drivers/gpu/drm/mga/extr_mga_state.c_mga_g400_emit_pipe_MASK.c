
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int warp_pipe; } ;
typedef TYPE_1__ drm_mga_sarea_t ;
struct TYPE_5__ {unsigned int warp_pipe; int* warp_pipe_phys; int wagp_enable; TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_mga_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int,scalar_t__,int,scalar_t__,int,scalar_t__,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 unsigned int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;

__attribute__((used)) static __inline__ void FUNC_3(drm_mga_private_t *VAR_32)
{
 drm_mga_sarea_t *VAR_33 = VAR_32->sarea_priv;
 unsigned int VAR_34 = VAR_33->warp_pipe;
 VAR_0;



 FUNC_1(10);

 FUNC_2(VAR_18, VAR_20,
    VAR_1, 0x00000000,
    VAR_1, 0x00000000, VAR_1, 0x00000000);

 if (VAR_34 & VAR_13) {
  FUNC_2(VAR_30, 0x00001e09,
     VAR_1, 0x00000000,
     VAR_1, 0x00000000, VAR_1, 0x00000000);

  FUNC_2(VAR_15, 0x00000000,
     VAR_15, 0x00000000,
     VAR_15, 0x00000000,
     VAR_15, 0x1e000000);
 } else {
  if (VAR_32->warp_pipe & VAR_13) {

   FUNC_2(VAR_31, 0x00000000,
      VAR_7, 0x00000000,
      VAR_8, 0x00000001,
      VAR_3, VAR_4);

   FUNC_2(VAR_12 + VAR_6, 0x00000001,
      VAR_5, 0x00007000,
      VAR_14, VAR_9,
      VAR_12 + VAR_6, 0x00000000);

   FUNC_2(VAR_14, (VAR_2 |
      VAR_9),
      VAR_12 + VAR_6, 0x00000000,
      VAR_14, VAR_9,
      VAR_1, 0x00000000);
  }

  FUNC_2(VAR_30, 0x00001807,
     VAR_1, 0x00000000,
     VAR_1, 0x00000000, VAR_1, 0x00000000);

  FUNC_2(VAR_15, 0x00000000,
     VAR_15, 0x00000000,
     VAR_15, 0x00000000,
     VAR_15, 0x18000000);
 }

 FUNC_2(VAR_16, 0x00000000,
    VAR_17, 0x00000000,
    VAR_25, VAR_10, VAR_1, 0x00000000);

 FUNC_2(VAR_21, 0x00000000,
    VAR_26, 0x00000000,
    VAR_23, 0x00000000,
    VAR_28, 0x00000000);

 FUNC_2(VAR_24, VAR_11,
    VAR_29, VAR_11,
    VAR_22, VAR_11,
    VAR_27, VAR_11);


 FUNC_2(VAR_1, 0xffffffff,
    VAR_1, 0xffffffff,
    VAR_1, 0xffffffff,
    VAR_18, (VAR_32->warp_pipe_phys[VAR_34] |
    VAR_19 | VAR_32->wagp_enable));

 FUNC_0();
}
