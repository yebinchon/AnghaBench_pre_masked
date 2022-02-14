
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gma_limit_t {int dummy; } ;
struct gma_crtc {TYPE_1__* clock_funcs; } ;
struct gma_clock_t {int p1; int p2; int n; int m2; int m1; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_2__ {int (* clock ) (int,struct gma_clock_t*) ;} ;


 int FUNC_0 (struct gma_clock_t*,struct gma_clock_t*,int) ;
 int FUNC_1 (int,struct gma_clock_t*) ;
 struct gma_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static bool FUNC_3(const struct gma_limit_t *VAR_0,
      struct drm_crtc *VAR_1, int VAR_2,
      int VAR_3,
      struct gma_clock_t *VAR_4)
{
 struct gma_crtc *VAR_5 = FUNC_2(VAR_1);
 struct gma_clock_t VAR_6;

 switch (VAR_3) {
 case 27000:
  if (VAR_2 < 200000) {
   VAR_6.p1 = 2;
   VAR_6.p2 = 10;
   VAR_6.n = 1;
   VAR_6.m1 = 0;
   VAR_6.m2 = 118;
  } else {
   VAR_6.p1 = 1;
   VAR_6.p2 = 10;
   VAR_6.n = 1;
   VAR_6.m1 = 0;
   VAR_6.m2 = 98;
  }
  break;

 case 100000:
  if (VAR_2 < 200000) {
   VAR_6.p1 = 2;
   VAR_6.p2 = 10;
   VAR_6.n = 5;
   VAR_6.m1 = 0;
   VAR_6.m2 = 160;
  } else {
   VAR_6.p1 = 1;
   VAR_6.p2 = 10;
   VAR_6.n = 5;
   VAR_6.m1 = 0;
   VAR_6.m2 = 133;
  }
  break;

 default:
  return 0;
 }

 VAR_5->clock_funcs->clock(VAR_3, &VAR_6);
 FUNC_0(VAR_4, &VAR_6, sizeof(struct gma_clock_t));
 return 1;
}
