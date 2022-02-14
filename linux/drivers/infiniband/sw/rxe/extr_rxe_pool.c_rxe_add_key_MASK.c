
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rxe_pool_entry {struct rxe_pool* pool; } ;
struct rxe_pool {int key_offset; int pool_lock; int key_size; } ;


 int FUNC_0 (struct rxe_pool*,struct rxe_pool_entry*) ;
 int FUNC_1 (int *,void*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(void *VAR_0, void *VAR_1)
{
 struct rxe_pool_entry *VAR_2 = VAR_0;
 struct rxe_pool *VAR_3 = VAR_2->pool;
 unsigned long VAR_4;

 FUNC_2(&VAR_3->pool_lock, VAR_4);
 FUNC_1((u8 *)VAR_2 + VAR_3->key_offset, VAR_1, VAR_3->key_size);
 FUNC_0(VAR_3, VAR_2);
 FUNC_3(&VAR_3->pool_lock, VAR_4);
}
