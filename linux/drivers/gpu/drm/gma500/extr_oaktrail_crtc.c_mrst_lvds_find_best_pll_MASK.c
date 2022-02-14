
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ min; scalar_t__ max; } ;
struct TYPE_3__ {scalar_t__ min; scalar_t__ max; } ;
struct gma_limit_t {TYPE_2__ p1; TYPE_1__ m; } ;
struct gma_clock_t {scalar_t__ m; scalar_t__ p1; scalar_t__ dot; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct gma_clock_t*,int ,int) ;
 int FUNC_2 (int,struct gma_clock_t*) ;

__attribute__((used)) static bool FUNC_3(const struct gma_limit_t *VAR_0,
        struct drm_crtc *VAR_1, int VAR_2,
        int VAR_3, struct gma_clock_t *VAR_4)
{
 struct gma_clock_t VAR_5;
 int VAR_6 = VAR_2;

 FUNC_1(VAR_4, 0, sizeof(*VAR_4));

 for (VAR_5.m = VAR_0->m.min; VAR_5.m <= VAR_0->m.max; VAR_5.m++) {
  for (VAR_5.p1 = VAR_0->p1.min; VAR_5.p1 <= VAR_0->p1.max;
       VAR_5.p1++) {
   int VAR_7;

   FUNC_2(VAR_3, &VAR_5);

   VAR_7 = FUNC_0(VAR_5.dot - VAR_2);
   if (VAR_7 < VAR_6) {
    *VAR_4 = VAR_5;
    VAR_6 = VAR_7;
   }
  }
 }
 return VAR_6 != VAR_2;
}
