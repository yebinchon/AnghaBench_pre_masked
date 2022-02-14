
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throttle {int throttle_applied; scalar_t__ threshold; int lock; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct throttle *VAR_1)
{
 if (!VAR_1->throttle_applied && VAR_0 > VAR_1->threshold) {
  FUNC_0(&VAR_1->lock);
  VAR_1->throttle_applied = 1;
 }
}
