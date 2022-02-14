
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int x1; unsigned int x2; unsigned int y1; unsigned int y2; int lock; scalar_t__ active; } ;
struct vmw_fb_par {TYPE_1__ dirty; int local_work; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct vmw_fb_par *VAR_1,
         unsigned VAR_2, unsigned VAR_3,
         unsigned VAR_4, unsigned VAR_5)
{
 unsigned long VAR_6;
 unsigned VAR_7 = VAR_2 + VAR_4;
 unsigned VAR_8 = VAR_3 + VAR_5;

 FUNC_1(&VAR_1->dirty.lock, VAR_6);
 if (VAR_1->dirty.x1 == VAR_1->dirty.x2) {
  VAR_1->dirty.x1 = VAR_2;
  VAR_1->dirty.y1 = VAR_3;
  VAR_1->dirty.x2 = VAR_7;
  VAR_1->dirty.y2 = VAR_8;


  if (VAR_1->dirty.active)
   FUNC_0(&VAR_1->local_work,
           VAR_0);
 } else {
  if (VAR_2 < VAR_1->dirty.x1)
   VAR_1->dirty.x1 = VAR_2;
  if (VAR_3 < VAR_1->dirty.y1)
   VAR_1->dirty.y1 = VAR_3;
  if (VAR_7 > VAR_1->dirty.x2)
   VAR_1->dirty.x2 = VAR_7;
  if (VAR_8 > VAR_1->dirty.y2)
   VAR_1->dirty.y2 = VAR_8;
 }
 FUNC_2(&VAR_1->dirty.lock, VAR_6);
}
