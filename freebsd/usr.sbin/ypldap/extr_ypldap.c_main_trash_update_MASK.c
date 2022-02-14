
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userent {struct userent* ge_line; struct userent* ue_netid_line; struct userent* ue_line; } ;
struct groupent {struct groupent* ge_line; struct groupent* ue_netid_line; struct groupent* ue_line; } ;
struct env {int update_trashed; struct userent* sc_group_names_t; struct userent* sc_user_names_t; } ;


 int FUNC_0 (int ,struct userent*,struct userent*) ;
 struct userent* FUNC_1 (struct userent*) ;
 int FUNC_2 (struct userent*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_3(struct env *VAR_2)
{
 struct userent *VAR_3;
 struct groupent *VAR_4;

 VAR_2->update_trashed = 1;

 while ((VAR_3 = FUNC_1(VAR_2->sc_user_names_t)) != ((void*)0)) {
  FUNC_0(VAR_1,
      VAR_2->sc_user_names_t, VAR_3);
  FUNC_2(VAR_3->ue_line);
  FUNC_2(VAR_3->ue_netid_line);
  FUNC_2(VAR_3);
 }
 FUNC_2(VAR_2->sc_user_names_t);
 VAR_2->sc_user_names_t = ((void*)0);
 while ((VAR_4 = FUNC_1(VAR_2->sc_group_names_t))
     != ((void*)0)) {
  FUNC_0(VAR_0,
      VAR_2->sc_group_names_t, VAR_4);
  FUNC_2(VAR_4->ge_line);
  FUNC_2(VAR_4);
 }
 FUNC_2(VAR_2->sc_group_names_t);
 VAR_2->sc_group_names_t = ((void*)0);
}
