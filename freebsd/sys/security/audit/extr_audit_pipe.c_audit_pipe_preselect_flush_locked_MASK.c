
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_pipe_preselect {int dummy; } ;
struct audit_pipe {int ap_preselect_list; } ;


 int FUNC_0 (struct audit_pipe*) ;
 int VAR_0 ;
 struct audit_pipe_preselect* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct audit_pipe_preselect*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct audit_pipe_preselect*,int ) ;

__attribute__((used)) static void
FUNC_4(struct audit_pipe *VAR_2)
{
 struct audit_pipe_preselect *VAR_3;

 FUNC_0(VAR_2);

 while ((VAR_3 = FUNC_1(&VAR_2->ap_preselect_list)) != ((void*)0)) {
  FUNC_2(&VAR_2->ap_preselect_list, VAR_3, VAR_1);
  FUNC_3(VAR_3, VAR_0);
 }
}
