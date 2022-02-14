
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct cache_set {int btree_cache_wait; int btree_cache_alloc_lock; } ;
struct btree_op {int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct task_struct* FUNC_0 (int *,int *,struct task_struct*) ;
 struct task_struct* VAR_2 ;
 int FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct cache_set *VAR_3, struct btree_op *VAR_4)
{
 struct task_struct *VAR_5;

 VAR_5 = FUNC_0(&VAR_3->btree_cache_alloc_lock, ((void*)0), VAR_2);
 if (VAR_5 && VAR_5 != VAR_2) {
  if (VAR_4)
   FUNC_1(&VAR_3->btree_cache_wait, &VAR_4->wait,
     VAR_1);
  return -VAR_0;
 }

 return 0;
}
