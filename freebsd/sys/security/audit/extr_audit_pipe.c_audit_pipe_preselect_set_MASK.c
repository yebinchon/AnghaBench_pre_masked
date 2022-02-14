
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_pipe_preselect {int app_mask; int app_auid; } ;
struct audit_pipe {int ap_preselect_list; } ;
typedef int au_mask_t ;
typedef int au_id_t ;


 int FUNC_0 (struct audit_pipe*) ;
 int FUNC_1 (struct audit_pipe*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,struct audit_pipe_preselect*,int ) ;
 int VAR_2 ;
 struct audit_pipe_preselect* FUNC_3 (struct audit_pipe*,int ) ;
 int FUNC_4 (struct audit_pipe_preselect*,int ) ;
 struct audit_pipe_preselect* FUNC_5 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct audit_pipe *VAR_3, au_id_t VAR_4, au_mask_t VAR_5)
{
 struct audit_pipe_preselect *VAR_6, *VAR_7;





 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_0, VAR_1);
 FUNC_0(VAR_3);
 VAR_6 = FUNC_3(VAR_3, VAR_4);
 if (VAR_6 == ((void*)0)) {
  VAR_6 = VAR_7;
  VAR_7 = ((void*)0);
  VAR_6->app_auid = VAR_4;
  FUNC_2(&VAR_3->ap_preselect_list, VAR_6, VAR_2);
 }
 VAR_6->app_mask = VAR_5;
 FUNC_1(VAR_3);
 if (VAR_7 != ((void*)0))
  FUNC_4(VAR_7, VAR_0);
}
