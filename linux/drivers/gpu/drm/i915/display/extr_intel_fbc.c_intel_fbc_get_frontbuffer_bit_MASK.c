
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_fbc {unsigned int possible_framebuffer_bits; TYPE_2__* crtc; scalar_t__ enabled; } ;
struct TYPE_6__ {unsigned int frontbuffer_bit; } ;
struct TYPE_4__ {int primary; } ;
struct TYPE_5__ {TYPE_1__ base; } ;


 TYPE_3__* FUNC_0 (int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct intel_fbc *VAR_0)
{
 if (VAR_0->enabled)
  return FUNC_0(VAR_0->crtc->base.primary)->frontbuffer_bit;
 else
  return VAR_0->possible_framebuffer_bits;
}
