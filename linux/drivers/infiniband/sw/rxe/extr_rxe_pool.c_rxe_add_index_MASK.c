
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_pool_entry {int index; struct rxe_pool* pool; } ;
struct rxe_pool {int pool_lock; } ;


 int FUNC_0 (struct rxe_pool*) ;
 int FUNC_1 (struct rxe_pool*,struct rxe_pool_entry*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(void *VAR_0)
{
 struct rxe_pool_entry *VAR_1 = VAR_0;
 struct rxe_pool *VAR_2 = VAR_1->pool;
 unsigned long VAR_3;

 FUNC_2(&VAR_2->pool_lock, VAR_3);
 VAR_1->index = FUNC_0(VAR_2);
 FUNC_1(VAR_2, VAR_1);
 FUNC_3(&VAR_2->pool_lock, VAR_3);
}
