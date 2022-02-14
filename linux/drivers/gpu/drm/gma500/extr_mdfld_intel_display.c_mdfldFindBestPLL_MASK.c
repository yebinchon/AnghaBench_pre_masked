
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ min; scalar_t__ max; } ;
struct TYPE_3__ {scalar_t__ min; scalar_t__ max; } ;
struct mrst_limit_t {TYPE_2__ p1; TYPE_1__ m; } ;
struct mrst_clock_t {scalar_t__ m; scalar_t__ p1; scalar_t__ dot; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,struct mrst_clock_t*) ;
 struct mrst_limit_t* FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct mrst_clock_t*,int ,int) ;

__attribute__((used)) static bool
FUNC_4(struct drm_crtc *VAR_0, int VAR_1, int VAR_2,
  struct mrst_clock_t *VAR_3)
{
 struct mrst_clock_t VAR_4;
 const struct mrst_limit_t *VAR_5 = FUNC_2(VAR_0);
 int VAR_6 = VAR_1;

 FUNC_3(VAR_3, 0, sizeof(*VAR_3));

 for (VAR_4.m = VAR_5->m.min; VAR_4.m <= VAR_5->m.max; VAR_4.m++) {
  for (VAR_4.p1 = VAR_5->p1.min; VAR_4.p1 <= VAR_5->p1.max;
       VAR_4.p1++) {
   int VAR_7;

   FUNC_1(VAR_2, &VAR_4);

   VAR_7 = FUNC_0(VAR_4.dot - VAR_1);
   if (VAR_7 < VAR_6) {
    *VAR_3 = VAR_4;
    VAR_6 = VAR_7;
   }
  }
 }
 return VAR_6 != VAR_1;
}
