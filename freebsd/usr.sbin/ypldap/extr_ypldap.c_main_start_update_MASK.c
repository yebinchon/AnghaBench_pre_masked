
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct env {int * sc_group_names_t; int * sc_user_names_t; scalar_t__ sc_group_line_len; scalar_t__ sc_user_line_len; scalar_t__ update_trashed; } ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

void
FUNC_4(struct env *VAR_0)
{
 VAR_0->update_trashed = 0;

 FUNC_3("starting directory update");
 VAR_0->sc_user_line_len = 0;
 VAR_0->sc_group_line_len = 0;
 if ((VAR_0->sc_user_names_t = FUNC_1(1,
     sizeof(*VAR_0->sc_user_names_t))) == ((void*)0) ||
     (VAR_0->sc_group_names_t = FUNC_1(1,
     sizeof(*VAR_0->sc_group_names_t))) == ((void*)0))
  FUNC_2(((void*)0));
 FUNC_0(VAR_0->sc_user_names_t);
 FUNC_0(VAR_0->sc_group_names_t);
}
