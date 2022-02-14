
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_pipe_preselect {int dummy; } ;
struct audit_pipe {int ap_preselect_list; } ;
typedef int au_id_t ;


 int FUNC_0 (struct audit_pipe*) ;
 int FUNC_1 (struct audit_pipe*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,struct audit_pipe_preselect*,int ) ;
 int VAR_2 ;
 struct audit_pipe_preselect* FUNC_3 (struct audit_pipe*,int ) ;
 int FUNC_4 (struct audit_pipe_preselect*,int ) ;

__attribute__((used)) static int
FUNC_5(struct audit_pipe *VAR_3, au_id_t VAR_4)
{
 struct audit_pipe_preselect *VAR_5;
 int VAR_6;

 FUNC_0(VAR_3);
 VAR_5 = FUNC_3(VAR_3, VAR_4);
 if (VAR_5 != ((void*)0)) {
  FUNC_2(&VAR_3->ap_preselect_list, VAR_5, VAR_2);
  VAR_6 = 0;
 } else
  VAR_6 = VAR_0;
 FUNC_1(VAR_3);
 if (VAR_5 != ((void*)0))
  FUNC_4(VAR_5, VAR_1);
 return (VAR_6);
}
