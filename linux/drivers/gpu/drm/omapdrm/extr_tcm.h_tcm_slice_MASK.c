
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int y; int x; } ;
struct TYPE_4__ {int y; scalar_t__ x; } ;
struct tcm_area {TYPE_3__* tcm; TYPE_2__ p1; TYPE_1__ p0; int is2d; } ;
struct TYPE_6__ {int width; } ;



__attribute__((used)) static inline void FUNC_0(struct tcm_area *VAR_0, struct tcm_area *VAR_1)
{
 *VAR_1 = *VAR_0;


 if (VAR_1->tcm && !VAR_1->is2d &&
  VAR_1->p0.y != VAR_1->p1.y &&
  (VAR_1->p0.x || (VAR_1->p1.x != VAR_1->tcm->width - 1))) {

  VAR_1->p1.x = VAR_1->tcm->width - 1;
  VAR_1->p1.y = (VAR_1->p0.x) ? VAR_1->p0.y : VAR_1->p1.y - 1;

  VAR_0->p0.x = 0;
  VAR_0->p0.y = VAR_1->p1.y + 1;
 } else {

  VAR_0->tcm = ((void*)0);
 }
}
