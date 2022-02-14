
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_lock {scalar_t__ rw; scalar_t__ flags; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct ttm_lock *VAR_0)
{
 bool VAR_1 = 0;

 FUNC_0(&VAR_0->lock);
 if (VAR_0->rw >= 0 && VAR_0->flags == 0) {
  ++VAR_0->rw;
  VAR_1 = 1;
 }
 FUNC_1(&VAR_0->lock);
 return VAR_1;
}
