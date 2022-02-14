
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lock_resource {int sync_locking_done; int sync_locking; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct dlm_lock_resource *VAR_1;

 VAR_1 = VAR_0;
 VAR_1->sync_locking_done = 1;
 FUNC_0(&VAR_1->sync_locking);
}
