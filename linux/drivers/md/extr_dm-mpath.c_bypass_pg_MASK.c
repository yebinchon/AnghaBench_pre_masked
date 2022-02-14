
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priority_group {int bypassed; } ;
struct multipath {int trigger_event; int lock; int * current_pg; int * current_pgpath; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct multipath *VAR_0, struct priority_group *VAR_1,
        bool VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0->lock, VAR_3);

 VAR_1->bypassed = VAR_2;
 VAR_0->current_pgpath = ((void*)0);
 VAR_0->current_pg = ((void*)0);

 FUNC_2(&VAR_0->lock, VAR_3);

 FUNC_0(&VAR_0->trigger_event);
}
