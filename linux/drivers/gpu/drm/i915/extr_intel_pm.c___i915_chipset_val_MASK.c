
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {unsigned long last_time1; unsigned long chipset_power; scalar_t__ last_count1; scalar_t__ c_m; scalar_t__ r_t; } ;
struct drm_i915_private {TYPE_1__ ips; } ;
struct TYPE_5__ {scalar_t__ i; scalar_t__ t; scalar_t__ m; scalar_t__ c; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int VAR_4 ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;

__attribute__((used)) static unsigned long FUNC_5(struct drm_i915_private *VAR_6)
{
 u64 VAR_7, VAR_8, VAR_9;
 u32 VAR_10, VAR_11, VAR_12, VAR_13 = 0, VAR_14 = 0;
 unsigned long VAR_15 = FUNC_3(VAR_4), VAR_16;
 int VAR_17;

 FUNC_4(&VAR_5);

 VAR_16 = VAR_15 - VAR_6->ips.last_time1;






 if (VAR_16 <= 10)
  return VAR_6->ips.chipset_power;

 VAR_10 = FUNC_1(VAR_2);
 VAR_11 = FUNC_1(VAR_1);
 VAR_12 = FUNC_1(VAR_0);

 VAR_7 = VAR_10 + VAR_11 + VAR_12;


 if (VAR_7 < VAR_6->ips.last_count1) {
  VAR_8 = ~0UL - VAR_6->ips.last_count1;
  VAR_8 += VAR_7;
 } else {
  VAR_8 = VAR_7 - VAR_6->ips.last_count1;
 }

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_3); VAR_17++) {
  if (VAR_3[VAR_17].i == VAR_6->ips.c_m &&
      VAR_3[VAR_17].t == VAR_6->ips.r_t) {
   VAR_13 = VAR_3[VAR_17].m;
   VAR_14 = VAR_3[VAR_17].c;
   break;
  }
 }

 VAR_8 = FUNC_2(VAR_8, VAR_16);
 VAR_9 = ((VAR_13 * VAR_8) + VAR_14);
 VAR_9 = FUNC_2(VAR_9, 10);

 VAR_6->ips.last_count1 = VAR_7;
 VAR_6->ips.last_time1 = VAR_15;

 VAR_6->ips.chipset_power = VAR_9;

 return VAR_9;
}
