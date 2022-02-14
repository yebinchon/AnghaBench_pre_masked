
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_transaction {int lock; struct binder_thread* from; } ;
struct binder_thread {int tmp_ref; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct binder_thread *FUNC_3(
  struct binder_transaction *VAR_0)
{
 struct binder_thread *VAR_1;

 FUNC_1(&VAR_0->lock);
 VAR_1 = VAR_0->from;
 if (VAR_1)
  FUNC_0(&VAR_1->tmp_ref);
 FUNC_2(&VAR_0->lock);
 return VAR_1;
}
