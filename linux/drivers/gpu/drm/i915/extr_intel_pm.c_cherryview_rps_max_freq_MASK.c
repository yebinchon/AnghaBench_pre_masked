
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct TYPE_3__ {int eu_total; } ;
struct TYPE_4__ {TYPE_1__ sseu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*,int ) ;

__attribute__((used)) static int FUNC_2(struct drm_i915_private *VAR_5)
{
 u32 VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_5, VAR_3);

 switch (FUNC_0(VAR_5)->sseu.eu_total) {
 case 8:

  VAR_7 = (VAR_6 >> VAR_0);
  break;
 case 12:

  VAR_7 = (VAR_6 >> VAR_1);
  break;
 case 16:

 default:

  VAR_7 = (VAR_6 >> VAR_2);
  break;
 }

 VAR_7 = (VAR_7 & VAR_4);

 return VAR_7;
}
