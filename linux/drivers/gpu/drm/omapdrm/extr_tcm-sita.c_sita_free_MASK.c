
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int x; int y; } ;
struct TYPE_3__ {unsigned long x; unsigned long y; } ;
struct tcm_area {TYPE_2__ p1; TYPE_1__ p0; scalar_t__ is2d; } ;
struct tcm {unsigned long width; int lock; int bitmap; } ;
typedef int s32 ;


 int FUNC_0 (unsigned long,int,int,int ,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static s32 FUNC_3(struct tcm *VAR_0, struct tcm_area *VAR_1)
{
 unsigned long VAR_2;
 u16 VAR_3, VAR_4;

 VAR_2 = VAR_1->p0.x + VAR_1->p0.y * VAR_0->width;
 if (VAR_1->is2d) {
  VAR_3 = VAR_1->p1.x - VAR_1->p0.x + 1;
  VAR_4 = VAR_1->p1.y - VAR_1->p0.y + 1;
 } else {
  VAR_3 = VAR_1->p1.x + VAR_1->p1.y * VAR_0->width - VAR_2 + 1;
  VAR_4 = 1;
 }

 FUNC_1(&(VAR_0->lock));
 FUNC_0(VAR_2, VAR_3, VAR_4, VAR_0->bitmap, VAR_0->width);
 FUNC_2(&(VAR_0->lock));
 return 0;
}
