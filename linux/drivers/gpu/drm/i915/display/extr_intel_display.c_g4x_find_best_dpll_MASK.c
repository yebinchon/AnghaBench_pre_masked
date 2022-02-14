
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


struct TYPE_12__ {scalar_t__ max; scalar_t__ min; } ;
struct TYPE_11__ {scalar_t__ max; scalar_t__ min; } ;
struct TYPE_10__ {scalar_t__ max; scalar_t__ min; } ;
struct TYPE_9__ {int max; int min; } ;
struct intel_limit {TYPE_6__ p1; TYPE_5__ m2; TYPE_4__ m1; TYPE_3__ n; } ;
struct TYPE_8__ {TYPE_1__* crtc; } ;
struct intel_crtc_state {TYPE_2__ base; } ;
struct drm_device {int dummy; } ;
struct dpll {int n; scalar_t__ m1; scalar_t__ m2; scalar_t__ p1; scalar_t__ dot; int p2; } ;
struct TYPE_7__ {struct drm_device* dev; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,struct dpll*) ;
 int FUNC_2 (struct intel_limit const*,struct intel_crtc_state*,int) ;
 int FUNC_3 (int ,struct intel_limit const*,struct dpll*) ;
 int FUNC_4 (struct dpll*,int ,int) ;
 int FUNC_5 (struct drm_device*) ;

__attribute__((used)) static bool
FUNC_6(const struct intel_limit *VAR_0,
     struct intel_crtc_state *VAR_1,
     int VAR_2, int VAR_3, struct dpll *VAR_4,
     struct dpll *VAR_5)
{
 struct drm_device *VAR_6 = VAR_1->base.crtc->dev;
 struct dpll VAR_7;
 int VAR_8;
 bool VAR_9 = 0;

 int VAR_10 = (VAR_2 >> 8) + (VAR_2 >> 9);

 FUNC_4(VAR_5, 0, sizeof(*VAR_5));

 VAR_7.p2 = FUNC_2(VAR_0, VAR_1, VAR_2);

 VAR_8 = VAR_0->n.max;

 for (VAR_7.n = VAR_0->n.min; VAR_7.n <= VAR_8; VAR_7.n++) {

  for (VAR_7.m1 = VAR_0->m1.max;
       VAR_7.m1 >= VAR_0->m1.min; VAR_7.m1--) {
   for (VAR_7.m2 = VAR_0->m2.max;
        VAR_7.m2 >= VAR_0->m2.min; VAR_7.m2--) {
    for (VAR_7.p1 = VAR_0->p1.max;
         VAR_7.p1 >= VAR_0->p1.min; VAR_7.p1--) {
     int VAR_11;

     FUNC_1(VAR_3, &VAR_7);
     if (!FUNC_3(FUNC_5(VAR_6),
        VAR_0,
        &VAR_7))
      continue;

     VAR_11 = FUNC_0(VAR_7.dot - VAR_2);
     if (VAR_11 < VAR_10) {
      *VAR_5 = VAR_7;
      VAR_10 = VAR_11;
      VAR_8 = VAR_7.n;
      VAR_9 = 1;
     }
    }
   }
  }
 }
 return VAR_9;
}
