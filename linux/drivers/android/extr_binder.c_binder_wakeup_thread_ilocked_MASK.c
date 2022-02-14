
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_thread {int wait; } ;
struct binder_proc {int inner_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct binder_proc*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct binder_proc *VAR_0,
      struct binder_thread *VAR_1,
      bool VAR_2)
{
 FUNC_0(&VAR_0->inner_lock);

 if (VAR_1) {
  if (VAR_2)
   FUNC_3(&VAR_1->wait);
  else
   FUNC_2(&VAR_1->wait);
  return;
 }
 FUNC_1(VAR_0, VAR_2);
}
