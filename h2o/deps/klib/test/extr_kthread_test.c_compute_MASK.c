
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xmin; int xmax; int w; int ymin; int ymax; int h; int* k; int max_iter; } ;
typedef TYPE_1__ global_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, int VAR_1, int VAR_2)
{
 global_t *VAR_3 = (global_t*)VAR_0;
 double VAR_4, VAR_5 = VAR_3->xmin + (VAR_3->xmax - VAR_3->xmin) * (VAR_1%VAR_3->w) / VAR_3->w;
 double VAR_6, VAR_7 = VAR_3->ymin + (VAR_3->ymax - VAR_3->ymin) * (VAR_1/VAR_3->w) / VAR_3->h;
 int VAR_8;

 FUNC_0(VAR_3->k[VAR_1] < 0);
 VAR_4 = VAR_5, VAR_6 = VAR_7;
 for (VAR_8 = 0; VAR_8 < VAR_3->max_iter; ++VAR_8) {
  double VAR_9 = VAR_4 * VAR_6;
  VAR_4 *= VAR_4; VAR_6 *= VAR_6;
  if (VAR_4 + VAR_6 >= 4) break;
  VAR_4 = VAR_4 - VAR_6 + VAR_5;
  VAR_6 = VAR_9 + VAR_9 + VAR_7;
 }
 VAR_3->k[VAR_1] = VAR_8;
}
