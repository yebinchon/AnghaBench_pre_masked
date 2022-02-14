
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_pipe_preselect {int app_mask; } ;
struct audit_pipe {int ap_preselect_mode; int ap_preselect_flags; int ap_preselect_naflags; } ;
typedef int au_id_t ;
typedef int au_event_t ;
typedef int au_class_t ;




 int FUNC_0 (struct audit_pipe*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int *,int) ;
 struct audit_pipe_preselect* FUNC_2 (struct audit_pipe*,int ) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int
FUNC_4(struct audit_pipe *VAR_1, au_id_t VAR_2,
    au_event_t VAR_3, au_class_t VAR_4, int VAR_5, int VAR_6)
{
 struct audit_pipe_preselect *VAR_7;

 FUNC_0(VAR_1);

 switch (VAR_1->ap_preselect_mode) {
 case 128:
  return (VAR_6);

 case 129:
  VAR_7 = FUNC_2(VAR_1, VAR_2);
  if (VAR_7 == ((void*)0)) {
   if (VAR_2 == VAR_0)
    return (FUNC_1(VAR_3, VAR_4,
        &VAR_1->ap_preselect_naflags, VAR_5));
   else
    return (FUNC_1(VAR_3, VAR_4,
        &VAR_1->ap_preselect_flags, VAR_5));
  } else
   return (FUNC_1(VAR_3, VAR_4, &VAR_7->app_mask,
       VAR_5));

 default:
  FUNC_3("audit_pipe_preselect_check: mode %d",
      VAR_1->ap_preselect_mode);
 }

 return (0);
}
