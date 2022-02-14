
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * funcs; int num_types; } ;
struct TYPE_8__ {scalar_t__ num_crtc; int num_hpd; } ;
struct TYPE_6__ {scalar_t__ num_types; int * funcs; } ;
struct TYPE_5__ {scalar_t__ num_types; int * funcs; } ;
struct amdgpu_device {TYPE_3__ hpd_irq; TYPE_4__ mode_info; TYPE_2__ pageflip_irq; TYPE_1__ crtc_irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_4)
{
 if (VAR_4->mode_info.num_crtc > 0)
  VAR_4->crtc_irq.num_types = VAR_0 + VAR_4->mode_info.num_crtc;
 else
  VAR_4->crtc_irq.num_types = 0;
 VAR_4->crtc_irq.funcs = &VAR_1;

 VAR_4->pageflip_irq.num_types = VAR_4->mode_info.num_crtc;
 VAR_4->pageflip_irq.funcs = &VAR_3;

 VAR_4->hpd_irq.num_types = VAR_4->mode_info.num_hpd;
 VAR_4->hpd_irq.funcs = &VAR_2;
}
