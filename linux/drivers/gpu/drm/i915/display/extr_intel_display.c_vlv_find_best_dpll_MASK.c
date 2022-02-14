
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int min; int max; } ;
struct TYPE_11__ {int p2_fast; int p2_slow; } ;
struct TYPE_10__ {int max; int min; } ;
struct TYPE_9__ {int min; int max; } ;
struct intel_limit {TYPE_6__ m1; TYPE_5__ p2; TYPE_4__ p1; TYPE_3__ n; } ;
struct TYPE_7__ {int crtc; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct TYPE_8__ {struct drm_device* dev; } ;
struct intel_crtc {TYPE_2__ base; } ;
struct drm_device {int dummy; } ;
struct dpll {int n; int p1; int p2; int p; int m1; int m2; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,struct intel_limit const*,struct dpll*) ;
 int FUNC_2 (struct dpll*,int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct drm_device*) ;
 struct intel_crtc* FUNC_5 (int ) ;
 int FUNC_6 (struct drm_device*,int,struct dpll*,struct dpll*,unsigned int,unsigned int*) ;
 int FUNC_7 (int,struct dpll*) ;

__attribute__((used)) static bool
FUNC_8(const struct intel_limit *VAR_0,
     struct intel_crtc_state *VAR_1,
     int VAR_2, int VAR_3, struct dpll *VAR_4,
     struct dpll *VAR_5)
{
 struct intel_crtc *VAR_6 = FUNC_5(VAR_1->base.crtc);
 struct drm_device *VAR_7 = VAR_6->base.dev;
 struct dpll VAR_8;
 unsigned int VAR_9 = 1000000;

 int VAR_10 = FUNC_3(VAR_0->n.max, VAR_3 / 19200);
 bool VAR_11 = 0;

 VAR_2 *= 5;

 FUNC_2(VAR_5, 0, sizeof(*VAR_5));


 for (VAR_8.n = VAR_0->n.min; VAR_8.n <= VAR_10; VAR_8.n++) {
  for (VAR_8.p1 = VAR_0->p1.max; VAR_8.p1 >= VAR_0->p1.min; VAR_8.p1--) {
   for (VAR_8.p2 = VAR_0->p2.p2_fast; VAR_8.p2 >= VAR_0->p2.p2_slow;
        VAR_8.p2 -= VAR_8.p2 > 10 ? 2 : 1) {
    VAR_8.p = VAR_8.p1 * VAR_8.p2;

    for (VAR_8.m1 = VAR_0->m1.min; VAR_8.m1 <= VAR_0->m1.max; VAR_8.m1++) {
     unsigned int VAR_12;

     VAR_8.m2 = FUNC_0(VAR_2 * VAR_8.p * VAR_8.n,
             VAR_3 * VAR_8.m1);

     FUNC_7(VAR_3, &VAR_8);

     if (!FUNC_1(FUNC_4(VAR_7),
        VAR_0,
        &VAR_8))
      continue;

     if (!FUNC_6(VAR_7, VAR_2,
        &VAR_8,
        VAR_5,
        VAR_9, &VAR_12))
      continue;

     *VAR_5 = VAR_8;
     VAR_9 = VAR_12;
     VAR_11 = 1;
    }
   }
  }
 }

 return VAR_11;
}
