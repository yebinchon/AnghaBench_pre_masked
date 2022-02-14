
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int x; int y; } ;
struct TYPE_5__ {int y; int x; } ;
struct tcm_area {TYPE_3__ p1; TYPE_2__ p0; scalar_t__ is2d; TYPE_1__* tcm; } ;
struct TYPE_4__ {int width; int height; } ;



__attribute__((used)) static inline bool FUNC_0(struct tcm_area *VAR_0)
{
 return VAR_0 && VAR_0->tcm &&

  VAR_0->p1.x < VAR_0->tcm->width &&
  VAR_0->p1.y < VAR_0->tcm->height &&
  VAR_0->p0.y <= VAR_0->p1.y &&

  ((!VAR_0->is2d &&
    VAR_0->p0.x < VAR_0->tcm->width &&
    VAR_0->p0.x + VAR_0->p0.y * VAR_0->tcm->width <=
    VAR_0->p1.x + VAR_0->p1.y * VAR_0->tcm->width) ||

   (VAR_0->is2d &&
    VAR_0->p0.x <= VAR_0->p1.x));
}
