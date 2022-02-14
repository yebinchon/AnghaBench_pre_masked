
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {int type; int port; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_i915_private*) ;







 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (struct drm_i915_private*,int ,int,int *) ;
 struct drm_i915_private* FUNC_3 (int ) ;

int FUNC_4(struct intel_encoder *VAR_6,
      bool VAR_7)
{
 struct drm_i915_private *VAR_8 = FUNC_3(VAR_6->base.dev);
 u32 VAR_9 = 0;
 u32 VAR_10 = 0;
 u32 VAR_11;


 if (!FUNC_0(VAR_8))
  return 0;

 if (VAR_6->type == 130)
  VAR_11 = 0;
 else
  VAR_11 = VAR_6->port;

 if (VAR_11 == VAR_4) {
  VAR_11 = 0;
 } else {
  VAR_9 |= 1 << VAR_11;
  VAR_11++;
 }

 if (!VAR_7)
  VAR_9 |= 4 << 8;

 switch (VAR_6->type) {
 case 134:
  VAR_10 = VAR_0;
  break;
 case 133:
 case 132:
 case 128:
 case 131:
  VAR_10 = VAR_1;
  break;
 case 129:
 case 130:
  VAR_10 = VAR_2;
  break;
 default:
  FUNC_1(1, "unsupported intel_encoder type %d\n",
     VAR_6->type);
  return -VAR_3;
 }

 VAR_9 |= VAR_10 << (16 + VAR_11 * 3);

 return FUNC_2(VAR_8, VAR_5, VAR_9, ((void*)0));
}
