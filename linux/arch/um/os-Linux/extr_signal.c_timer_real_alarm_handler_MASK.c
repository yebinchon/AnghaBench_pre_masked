
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uml_pt_regs {int dummy; } ;
typedef int regs ;
typedef int mcontext_t ;


 int VAR_0 ;
 int FUNC_0 (struct uml_pt_regs*,int *) ;
 int FUNC_1 (struct uml_pt_regs*,int ,int) ;
 int FUNC_2 (int ,int *,struct uml_pt_regs*) ;

__attribute__((used)) static void FUNC_3(mcontext_t *VAR_1)
{
 struct uml_pt_regs VAR_2;

 if (VAR_1 != ((void*)0))
  FUNC_0(&VAR_2, VAR_1);
 else
  FUNC_1(&VAR_2, 0, sizeof(VAR_2));
 FUNC_2(VAR_0, ((void*)0), &VAR_2);
}
