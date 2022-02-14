
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int x; int y; } ;
struct TYPE_4__ {int x; int y; } ;
struct tcm_area {TYPE_3__* tcm; TYPE_2__ p0; TYPE_1__ p1; scalar_t__ is2d; } ;
struct TYPE_6__ {int width; } ;


 int FUNC_0 (struct tcm_area*) ;
 int FUNC_1 (struct tcm_area*) ;

__attribute__((used)) static inline u16 FUNC_2(struct tcm_area *VAR_0)
{
 return VAR_0->is2d ?
  FUNC_1(VAR_0) * FUNC_0(VAR_0) :
  (VAR_0->p1.x - VAR_0->p0.x + 1) + (VAR_0->p1.y - VAR_0->p0.y) *
       VAR_0->tcm->width;
}
