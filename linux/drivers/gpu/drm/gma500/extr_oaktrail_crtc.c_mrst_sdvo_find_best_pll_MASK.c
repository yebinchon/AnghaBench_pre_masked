
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int max; int min; } ;
struct TYPE_9__ {int p2_slow; } ;
struct TYPE_8__ {int min; int max; } ;
struct TYPE_7__ {int min; int max; } ;
struct TYPE_6__ {int min; int max; } ;
struct gma_limit_t {TYPE_5__ vco; TYPE_4__ p2; TYPE_3__ p1; TYPE_2__ n; TYPE_1__ m; } ;
struct gma_clock_t {int m; int n; int p1; int p; } ;
struct drm_crtc {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct gma_clock_t*,int ,int) ;

__attribute__((used)) static bool FUNC_1(const struct gma_limit_t *VAR_0,
        struct drm_crtc *VAR_1, int VAR_2,
        int VAR_3, struct gma_clock_t *VAR_4)
{
 struct gma_clock_t VAR_5;
 u32 VAR_6, VAR_7;
 s32 VAR_8, VAR_9 = 100000;

 FUNC_0(VAR_4, 0, sizeof(*VAR_4));

 for (VAR_5.m = VAR_0->m.min; VAR_5.m <= VAR_0->m.max; VAR_5.m++) {
  for (VAR_5.n = VAR_0->n.min; VAR_5.n <= VAR_0->n.max;
       VAR_5.n++) {
   for (VAR_5.p1 = VAR_0->p1.min;
        VAR_5.p1 <= VAR_0->p1.max; VAR_5.p1++) {

    VAR_5.p = VAR_5.p1 * VAR_0->p2.p2_slow;
    VAR_6 = VAR_2 * VAR_5.p;


    if (VAR_6 > VAR_0->vco.max)
     break;

    if (VAR_6 < VAR_0->vco.min)
     continue;

    VAR_7 = (VAR_3 * VAR_5.m) /
           (VAR_5.n * VAR_5.p);
    VAR_8 = 10000 -
          ((VAR_2 * 10000) / VAR_7);

    if (VAR_8 < -VAR_9) {


     break;
    }

    if (VAR_8 < 0)
     VAR_8 = -VAR_8;

    if (VAR_8 < VAR_9) {
     VAR_9 = VAR_8;
     *VAR_4 = VAR_5;
    }
   }
  }
  if (VAR_9 == 0)
   break;
 }

 return VAR_9 == 0;
}
