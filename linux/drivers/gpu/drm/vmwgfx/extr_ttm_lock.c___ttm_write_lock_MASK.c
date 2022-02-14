
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_lock {int rw; int flags; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct ttm_lock *VAR_1)
{
 bool VAR_2 = 0;

 FUNC_0(&VAR_1->lock);
 if (VAR_1->rw == 0 && ((VAR_1->flags & ~VAR_0) == 0)) {
  VAR_1->rw = -1;
  VAR_1->flags &= ~VAR_0;
  VAR_2 = 1;
 } else {
  VAR_1->flags |= VAR_0;
 }
 FUNC_1(&VAR_1->lock);
 return VAR_2;
}
