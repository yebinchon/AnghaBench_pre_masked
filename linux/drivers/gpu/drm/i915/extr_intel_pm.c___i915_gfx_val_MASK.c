
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {unsigned long corr; unsigned long gfx_power; } ;
struct TYPE_4__ {int cur_freq; } ;
struct TYPE_5__ {TYPE_1__ rps; } ;
struct drm_i915_private {TYPE_3__ ips; TYPE_2__ gt_pm; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_i915_private*) ;
 unsigned long FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (struct drm_i915_private*,int) ;

__attribute__((used)) static unsigned long FUNC_6(struct drm_i915_private *VAR_1)
{
 unsigned long VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
 u32 VAR_7, VAR_8;

 FUNC_4(&VAR_0);

 VAR_7 = FUNC_0(FUNC_1(VAR_1->gt_pm.rps.cur_freq));
 VAR_7 = (VAR_7 >> 24) & 0x7f;
 VAR_8 = FUNC_5(VAR_1, VAR_7);

 VAR_4 = VAR_8;

 VAR_2 = FUNC_3(VAR_1);




 if (VAR_2 > 80)
  VAR_3 = ((VAR_2 * 2349) + 135940);
 else if (VAR_2 >= 50)
  VAR_3 = ((VAR_2 * 964) + 29317);
 else
  VAR_3 = ((VAR_2 * 301) + 1004);

 VAR_3 = VAR_3 * ((150142 * VAR_4) / 10000 - 78642);
 VAR_3 /= 100000;
 VAR_5 = (VAR_3 * VAR_1->ips.corr);

 VAR_6 = (VAR_5 * VAR_4) / 10000;
 VAR_6 /= 100;

 FUNC_2(VAR_1);

 return VAR_1->ips.gfx_power + VAR_6;
}
