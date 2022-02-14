
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int last_time2; scalar_t__ last_count2; int gfx_power; } ;
struct drm_i915_private {TYPE_1__ ips; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_3)
{
 u64 VAR_4, VAR_5, VAR_6;
 u32 VAR_7;

 FUNC_4(&VAR_2);

 VAR_4 = FUNC_3();
 VAR_6 = VAR_4 - VAR_3->ips.last_time2;
 FUNC_2(VAR_6, VAR_1);


 if (!VAR_6)
  return;

 VAR_7 = FUNC_0(VAR_0);

 if (VAR_7 < VAR_3->ips.last_count2) {
  VAR_5 = ~0UL - VAR_3->ips.last_count2;
  VAR_5 += VAR_7;
 } else {
  VAR_5 = VAR_7 - VAR_3->ips.last_count2;
 }

 VAR_3->ips.last_count2 = VAR_7;
 VAR_3->ips.last_time2 = VAR_4;


 VAR_5 = VAR_5 * 1181;
 VAR_5 = FUNC_1(VAR_5, VAR_6 * 10);
 VAR_3->ips.gfx_power = VAR_5;
}
