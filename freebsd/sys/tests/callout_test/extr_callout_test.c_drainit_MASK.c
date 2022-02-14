
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callout_run {int lock; int drain_calls; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 struct callout_run *VAR_1;

 VAR_1 = (struct callout_run *)VAR_0;
 FUNC_0(&VAR_1->lock);
 VAR_1->drain_calls++;
 FUNC_1(&VAR_1->lock);
}
