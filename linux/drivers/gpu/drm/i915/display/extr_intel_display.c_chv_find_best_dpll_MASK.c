
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_8__ {int p2_fast; int p2_slow; } ;
struct TYPE_7__ {int max; int min; } ;
struct intel_limit {TYPE_4__ p2; TYPE_3__ p1; } ;
struct TYPE_5__ {int crtc; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct TYPE_6__ {struct drm_device* dev; } ;
struct intel_crtc {TYPE_2__ base; } ;
struct drm_device {int dummy; } ;
struct dpll {int n; int m1; int p1; int p2; int p; int m2; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int,struct dpll*) ;
 int FUNC_2 (int ,struct intel_limit const*,struct dpll*) ;
 int FUNC_3 (struct dpll*,int ,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct drm_device*) ;
 struct intel_crtc* FUNC_6 (int ) ;
 int FUNC_7 (struct drm_device*,int,struct dpll*,struct dpll*,unsigned int,unsigned int*) ;

__attribute__((used)) static bool
FUNC_8(const struct intel_limit *VAR_1,
     struct intel_crtc_state *VAR_2,
     int VAR_3, int VAR_4, struct dpll *VAR_5,
     struct dpll *VAR_6)
{
 struct intel_crtc *VAR_7 = FUNC_6(VAR_2->base.crtc);
 struct drm_device *VAR_8 = VAR_7->base.dev;
 unsigned int VAR_9;
 struct dpll VAR_10;
 u64 VAR_11;
 int VAR_12 = 0;

 FUNC_3(VAR_6, 0, sizeof(*VAR_6));
 VAR_9 = 1000000;






 VAR_10.n = 1, VAR_10.m1 = 2;
 VAR_3 *= 5;

 for (VAR_10.p1 = VAR_1->p1.max; VAR_10.p1 >= VAR_1->p1.min; VAR_10.p1--) {
  for (VAR_10.p2 = VAR_1->p2.p2_fast;
    VAR_10.p2 >= VAR_1->p2.p2_slow;
    VAR_10.p2 -= VAR_10.p2 > 10 ? 2 : 1) {
   unsigned int VAR_13;

   VAR_10.p = VAR_10.p1 * VAR_10.p2;

   VAR_11 = FUNC_0(FUNC_4(VAR_3, VAR_10.p * VAR_10.n) << 22,
         VAR_4 * VAR_10.m1);

   if (VAR_11 > VAR_0/VAR_10.m1)
    continue;

   VAR_10.m2 = VAR_11;

   FUNC_1(VAR_4, &VAR_10);

   if (!FUNC_2(FUNC_5(VAR_8), VAR_1, &VAR_10))
    continue;

   if (!FUNC_7(VAR_8, VAR_3, &VAR_10, VAR_6,
      VAR_9, &VAR_13))
    continue;

   *VAR_6 = VAR_10;
   VAR_9 = VAR_13;
   VAR_12 = 1;
  }
 }

 return VAR_12;
}
