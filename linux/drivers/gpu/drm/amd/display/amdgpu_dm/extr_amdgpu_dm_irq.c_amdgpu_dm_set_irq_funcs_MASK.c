
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int * funcs; int num_types; } ;
struct TYPE_9__ {int num_hpd; int num_crtc; } ;
struct TYPE_8__ {int * funcs; int num_types; } ;
struct TYPE_7__ {int * funcs; int num_types; } ;
struct TYPE_6__ {int * funcs; int num_types; } ;
struct amdgpu_device {TYPE_5__ hpd_irq; TYPE_4__ mode_info; TYPE_3__ pageflip_irq; TYPE_2__ vupdate_irq; TYPE_1__ crtc_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(struct amdgpu_device *VAR_4)
{

 VAR_4->crtc_irq.num_types = VAR_4->mode_info.num_crtc;
 VAR_4->crtc_irq.funcs = &VAR_0;

 VAR_4->vupdate_irq.num_types = VAR_4->mode_info.num_crtc;
 VAR_4->vupdate_irq.funcs = &VAR_3;

 VAR_4->pageflip_irq.num_types = VAR_4->mode_info.num_crtc;
 VAR_4->pageflip_irq.funcs = &VAR_2;

 VAR_4->hpd_irq.num_types = VAR_4->mode_info.num_hpd;
 VAR_4->hpd_irq.funcs = &VAR_1;
}
