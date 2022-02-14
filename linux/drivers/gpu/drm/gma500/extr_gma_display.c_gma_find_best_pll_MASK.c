
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


struct TYPE_11__ {scalar_t__ min; scalar_t__ max; } ;
struct TYPE_10__ {scalar_t__ min; scalar_t__ max; } ;
struct TYPE_9__ {scalar_t__ min; scalar_t__ max; } ;
struct TYPE_8__ {scalar_t__ min; scalar_t__ max; } ;
struct TYPE_7__ {int dot_limit; int p2_fast; int p2_slow; } ;
struct gma_limit_t {TYPE_5__ p1; TYPE_4__ n; TYPE_3__ m2; TYPE_2__ m1; TYPE_1__ p2; } ;
struct gma_clock_t {scalar_t__ m1; scalar_t__ m2; scalar_t__ n; scalar_t__ p1; scalar_t__ dot; int p2; } ;
struct gma_clock_funcs {int (* pll_is_valid ) (struct drm_crtc*,struct gma_limit_t const*,struct gma_clock_t*) ;int (* clock ) (int,struct gma_clock_t*) ;} ;
struct drm_device {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_12__ {struct gma_clock_funcs* clock_funcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct drm_crtc*,int ) ;
 int FUNC_3 (struct gma_clock_t*,int ,int) ;
 int FUNC_4 (int,struct gma_clock_t*) ;
 int FUNC_5 (struct drm_crtc*,struct gma_limit_t const*,struct gma_clock_t*) ;
 TYPE_6__* FUNC_6 (struct drm_crtc*) ;

bool FUNC_7(const struct gma_limit_t *VAR_5,
         struct drm_crtc *VAR_6, int VAR_7, int VAR_8,
         struct gma_clock_t *VAR_9)
{
 struct drm_device *VAR_10 = VAR_6->dev;
 const struct gma_clock_funcs *VAR_11 =
      FUNC_6(VAR_6)->clock_funcs;
 struct gma_clock_t VAR_12;
 int VAR_13 = VAR_7;

 if (FUNC_2(VAR_6, VAR_0) &&
     (FUNC_0(VAR_1) & VAR_4) != 0) {






  if ((FUNC_0(VAR_1) & VAR_2) ==
      VAR_3)
   VAR_12.p2 = VAR_5->p2.p2_fast;
  else
   VAR_12.p2 = VAR_5->p2.p2_slow;
 } else {
  if (VAR_7 < VAR_5->p2.dot_limit)
   VAR_12.p2 = VAR_5->p2.p2_slow;
  else
   VAR_12.p2 = VAR_5->p2.p2_fast;
 }

 FUNC_3(VAR_9, 0, sizeof(*VAR_9));


 for (VAR_12.m1 = VAR_5->m1.min; VAR_12.m1 <= VAR_5->m1.max; VAR_12.m1++) {
  for (VAR_12.m2 = VAR_5->m2.min;
       (VAR_12.m2 < VAR_12.m1 || VAR_12.m1 == 0) &&
        VAR_12.m2 <= VAR_5->m2.max; VAR_12.m2++) {
   for (VAR_12.n = VAR_5->n.min;
        VAR_12.n <= VAR_5->n.max; VAR_12.n++) {
    for (VAR_12.p1 = VAR_5->p1.min;
         VAR_12.p1 <= VAR_5->p1.max;
         VAR_12.p1++) {
     int VAR_14;

     VAR_11->clock(VAR_8, &VAR_12);

     if (!VAR_11->pll_is_valid(VAR_6,
        VAR_5, &VAR_12))
      continue;

     VAR_14 = FUNC_1(VAR_12.dot - VAR_7);
     if (VAR_14 < VAR_13) {
      *VAR_9 = VAR_12;
      VAR_13 = VAR_14;
     }
    }
   }
  }
 }

 return VAR_13 != VAR_7;
}
