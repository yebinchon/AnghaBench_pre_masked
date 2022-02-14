
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int port; } ;
struct intel_digital_port {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;



 int FUNC_3 (int,char*,int ,int,unsigned int) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*,int ,int,unsigned int,int) ;
 int FUNC_5 (int) ;

void FUNC_6(struct drm_i915_private *VAR_4,
    struct intel_digital_port *VAR_5,
    unsigned int VAR_6)
{
 u32 VAR_7;
 i915_reg_t VAR_8;

 switch (VAR_5->base.port) {
 case 130:
  VAR_7 = VAR_1;
  VAR_8 = FUNC_1(0);
  break;
 case 129:
  VAR_7 = VAR_2;
  VAR_8 = FUNC_1(0);
  VAR_6 <<= 4;
  break;
 case 128:
  VAR_7 = VAR_3;
  VAR_8 = VAR_0;
  break;
 default:
  FUNC_0();
 }

 if (FUNC_4(VAR_4, VAR_8,
           VAR_7, VAR_6, 1000))
  FUNC_3(1, "timed out waiting for port %c ready: got 0x%x, expected 0x%x\n",
       FUNC_5(VAR_5->base.port),
       FUNC_2(VAR_8) & VAR_7, VAR_6);
}
