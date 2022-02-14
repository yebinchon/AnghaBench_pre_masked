
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_pipe_preselect {int app_mask; } ;
struct audit_pipe {int dummy; } ;
typedef int au_mask_t ;
typedef int au_id_t ;


 int FUNC_0 (struct audit_pipe*) ;
 int FUNC_1 (struct audit_pipe*) ;
 int VAR_0 ;
 struct audit_pipe_preselect* FUNC_2 (struct audit_pipe*,int ) ;

__attribute__((used)) static int
FUNC_3(struct audit_pipe *VAR_1, au_id_t VAR_2,
    au_mask_t *VAR_3)
{
 struct audit_pipe_preselect *VAR_4;
 int VAR_5;

 FUNC_0(VAR_1);
 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (VAR_4 != ((void*)0)) {
  *VAR_3 = VAR_4->app_mask;
  VAR_5 = 0;
 } else
  VAR_5 = VAR_0;
 FUNC_1(VAR_1);
 return (VAR_5);
}
