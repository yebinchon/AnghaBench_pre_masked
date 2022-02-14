
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {int port; TYPE_1__ base; } ;
struct intel_digital_port {int tc_mode; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;


 int VAR_2 ;
 int FUNC_4 (struct intel_digital_port*) ;
 struct drm_i915_private* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct intel_digital_port *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_5(VAR_3->base.base.dev);
 enum port VAR_5 = VAR_3->base.port;
 u32 VAR_6, VAR_7, VAR_8;

 if (VAR_3->tc_mode == VAR_2)
  return;

 VAR_6 = FUNC_0(FUNC_2(0, VAR_5));
 VAR_7 = FUNC_0(FUNC_2(1, VAR_5));

 switch (VAR_3->tc_mode) {
 case 129:
  VAR_6 &= ~(VAR_0 | VAR_1);
  VAR_7 &= ~(VAR_0 | VAR_1);

  VAR_8 = FUNC_4(VAR_3);

  switch (VAR_8) {
  case 0x1:
  case 0x4:
   break;
  case 0x2:
   VAR_6 |= VAR_0;
   break;
  case 0x3:
   VAR_6 |= VAR_0 |
          VAR_1;
   break;
  case 0x8:
   VAR_7 |= VAR_0;
   break;
  case 0xC:
   VAR_7 |= VAR_0 |
          VAR_1;
   break;
  case 0xF:
   VAR_6 |= VAR_0 |
          VAR_1;
   VAR_7 |= VAR_0 |
          VAR_1;
   break;
  default:
   FUNC_3(VAR_8);
  }
  break;

 case 128:
  VAR_6 |= VAR_0 | VAR_1;
  VAR_7 |= VAR_0 | VAR_1;
  break;

 default:
  FUNC_3(VAR_3->tc_mode);
  return;
 }

 FUNC_1(FUNC_2(0, VAR_5), VAR_6);
 FUNC_1(FUNC_2(1, VAR_5), VAR_7);
}
