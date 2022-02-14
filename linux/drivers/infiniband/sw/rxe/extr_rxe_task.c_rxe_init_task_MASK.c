
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_task {int (* func ) (void*) ;int destroyed; int state_lock; int state; int tasklet; int name; void* arg; void* obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,unsigned long) ;

int FUNC_3(void *VAR_2, struct rxe_task *VAR_3,
    void *VAR_4, int (*VAR_5)(void *), char *VAR_6)
{
 VAR_3->obj = VAR_2;
 VAR_3->arg = VAR_4;
 VAR_3->func = VAR_5;
 FUNC_0(VAR_3->name, sizeof(VAR_3->name), "%s", VAR_6);
 VAR_3->destroyed = 0;

 FUNC_2(&VAR_3->tasklet, VAR_1, (unsigned long)VAR_3);

 VAR_3->state = VAR_0;
 FUNC_1(&VAR_3->state_lock);

 return 0;
}
