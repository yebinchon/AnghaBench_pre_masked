
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct tcm_pt {scalar_t__ x; int y; } ;
struct TYPE_5__ {scalar_t__ x; int y; } ;
struct TYPE_4__ {scalar_t__ x; int y; } ;
struct tcm_area {TYPE_3__* tcm; TYPE_2__ p1; TYPE_1__ p0; scalar_t__ is2d; } ;
struct TYPE_6__ {int width; } ;



__attribute__((used)) static inline bool FUNC_0(struct tcm_pt *VAR_0, struct tcm_area *VAR_1)
{
 u16 VAR_2;

 if (VAR_1->is2d) {
  return VAR_0->x >= VAR_1->p0.x && VAR_0->x <= VAR_1->p1.x &&
         VAR_0->y >= VAR_1->p0.y && VAR_0->y <= VAR_1->p1.y;
 } else {
  VAR_2 = VAR_0->x + VAR_0->y * VAR_1->tcm->width;
  return VAR_2 >= VAR_1->p0.x + VAR_1->p0.y * VAR_1->tcm->width &&
         VAR_2 <= VAR_1->p1.x + VAR_1->p1.y * VAR_1->tcm->width;
 }
}
