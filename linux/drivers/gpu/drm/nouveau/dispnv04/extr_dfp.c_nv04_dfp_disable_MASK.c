
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nv04_crtc_reg {int * CRTC; int fp_control; } ;
struct drm_device {int dummy; } ;
struct TYPE_3__ {struct nv04_crtc_reg* crtc_reg; } ;
struct TYPE_4__ {TYPE_1__ mode_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*,int,int ) ;
 int FUNC_1 (struct drm_device*,int,int ,int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (struct drm_device*) ;

void FUNC_4(struct drm_device *VAR_5, int VAR_6)
{
 struct nv04_crtc_reg *VAR_7 = FUNC_3(VAR_5)->mode_reg.crtc_reg;

 if (FUNC_0(VAR_5, VAR_6, VAR_4) &
     VAR_1) {




  FUNC_1(VAR_5, VAR_6, VAR_4,
         VAR_0);
  FUNC_2(50);
 }

 VAR_7[VAR_6].fp_control = VAR_0;
 VAR_7[VAR_6].CRTC[VAR_3] &=
  ~VAR_2;
}
