
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_du_crtc {TYPE_1__* dev; } ;
struct dpll_info {unsigned int n; unsigned int m; unsigned int fdpll; unsigned long output; } ;
struct TYPE_2__ {int dev; } ;


 unsigned long FUNC_0 (long) ;
 int FUNC_1 (int ,char*,unsigned long,unsigned int,unsigned int,unsigned int,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct rcar_du_crtc *VAR_0,
     struct dpll_info *VAR_1,
     unsigned long VAR_2,
     unsigned long VAR_3)
{
 unsigned long VAR_4 = (unsigned long)-1;
 unsigned long VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
  for (VAR_8 = 119; VAR_8 > 38; VAR_8--) {
   unsigned long VAR_9 = VAR_2 * (VAR_8 + 1) / (VAR_7 + 1);

   if (VAR_9 < 1000 || VAR_9 > 2048 * 1000 * 1000U)
    continue;

   for (VAR_6 = 1; VAR_6 < 32; VAR_6++) {
    unsigned long VAR_10;

    VAR_10 = VAR_9 / (VAR_6 + 1);
    if (VAR_10 >= 400 * 1000 * 1000)
     continue;

    VAR_5 = FUNC_0((long)VAR_10 - (long)VAR_3);
    if (VAR_4 > VAR_5) {
     VAR_4 = VAR_5;
     VAR_1->n = VAR_8;
     VAR_1->m = VAR_7;
     VAR_1->fdpll = VAR_6;
     VAR_1->output = VAR_10;
    }

    if (VAR_5 == 0)
     goto done;
   }
  }
 }

done:
 FUNC_1(VAR_0->dev->dev,
  "output:%u, fdpll:%u, n:%u, m:%u, diff:%lu\n",
   VAR_1->output, VAR_1->fdpll, VAR_1->n, VAR_1->m, VAR_4);
}
