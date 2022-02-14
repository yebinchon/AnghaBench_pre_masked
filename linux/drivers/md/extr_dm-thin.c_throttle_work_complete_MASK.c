
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throttle {int throttle_applied; int lock; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct throttle *VAR_0)
{
 if (VAR_0->throttle_applied) {
  VAR_0->throttle_applied = 0;
  FUNC_0(&VAR_0->lock);
 }
}
