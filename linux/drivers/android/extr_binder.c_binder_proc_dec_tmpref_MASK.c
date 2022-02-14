
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_proc {int tmp_ref; int threads; scalar_t__ is_dead; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct binder_proc*) ;
 int FUNC_2 (struct binder_proc*) ;
 int FUNC_3 (struct binder_proc*) ;

__attribute__((used)) static void FUNC_4(struct binder_proc *VAR_0)
{
 FUNC_2(VAR_0);
 VAR_0->tmp_ref--;
 if (VAR_0->is_dead && FUNC_0(&VAR_0->threads) &&
   !VAR_0->tmp_ref) {
  FUNC_3(VAR_0);
  FUNC_1(VAR_0);
  return;
 }
 FUNC_3(VAR_0);
}
