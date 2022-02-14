
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_thread {int proc; int tmp_ref; scalar_t__ is_dead; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct binder_thread*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct binder_thread *VAR_0)
{




 FUNC_3(VAR_0->proc);
 FUNC_0(&VAR_0->tmp_ref);
 if (VAR_0->is_dead && !FUNC_1(&VAR_0->tmp_ref)) {
  FUNC_4(VAR_0->proc);
  FUNC_2(VAR_0);
  return;
 }
 FUNC_4(VAR_0->proc);
}
