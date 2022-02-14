
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_mtx; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct proc*,int *,int ,char*,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (void*) ;

__attribute__((used)) static void
FUNC_7(struct proc **VAR_3, void *VAR_4)
{
 struct proc *VAR_5;

 FUNC_5(&VAR_2, VAR_0);
 VAR_5 = *VAR_3;
 *VAR_3 = ((void*)0);
 if (VAR_5) {
  FUNC_6(VAR_4);
  FUNC_2(VAR_5);
  FUNC_1();
  FUNC_4(VAR_5, &VAR_5->p_mtx, VAR_1, "crypto_destroy", 0);
  FUNC_3(VAR_5);
  FUNC_0();
 }
}
