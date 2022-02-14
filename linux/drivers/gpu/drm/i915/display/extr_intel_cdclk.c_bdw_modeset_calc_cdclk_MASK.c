
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cdclk; void* voltage_level; } ;
struct TYPE_4__ {int force_min_cdclk; TYPE_1__ logical; TYPE_1__ actual; } ;
struct intel_atomic_state {TYPE_2__ cdclk; int active_crtcs; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct intel_atomic_state*) ;

__attribute__((used)) static int FUNC_3(struct intel_atomic_state *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;





 VAR_2 = FUNC_0(VAR_1);

 VAR_0->cdclk.logical.cdclk = VAR_2;
 VAR_0->cdclk.logical.voltage_level =
  FUNC_1(VAR_2);

 if (!VAR_0->active_crtcs) {
  VAR_2 = FUNC_0(VAR_0->cdclk.force_min_cdclk);

  VAR_0->cdclk.actual.cdclk = VAR_2;
  VAR_0->cdclk.actual.voltage_level =
   FUNC_1(VAR_2);
 } else {
  VAR_0->cdclk.actual = VAR_0->cdclk.logical;
 }

 return 0;
}
