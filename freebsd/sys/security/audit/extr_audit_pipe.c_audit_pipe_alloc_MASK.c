
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct audit_pipe {int ap_preselect_mode; int ap_preselect_list; int ap_preselect_naflags; int ap_preselect_flags; int ap_cv; TYPE_1__ ap_selinfo; int ap_queue; int ap_qlimit; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct audit_pipe*) ;
 int FUNC_3 (struct audit_pipe*) ;
 int VAR_1 ;
 int FUNC_4 (struct audit_pipe*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct audit_pipe*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int ) ;
 struct audit_pipe* FUNC_10 (int,int ,int) ;

__attribute__((used)) static struct audit_pipe *
FUNC_11(void)
{
 struct audit_pipe *VAR_9;

 VAR_9 = FUNC_10(sizeof(*VAR_9), VAR_2, VAR_3 | VAR_4);
 if (VAR_9 == ((void*)0))
  return (((void*)0));
 VAR_9->ap_qlimit = VAR_1;
 FUNC_5(&VAR_9->ap_queue);
 FUNC_9(&VAR_9->ap_selinfo.si_note, FUNC_3(VAR_9));
 FUNC_2(VAR_9);
 FUNC_4(VAR_9);
 FUNC_8(&VAR_9->ap_cv, "audit_pipe");
 FUNC_7(&VAR_9->ap_preselect_flags, sizeof(VAR_9->ap_preselect_flags));
 FUNC_7(&VAR_9->ap_preselect_naflags, sizeof(VAR_9->ap_preselect_naflags));
 FUNC_5(&VAR_9->ap_preselect_list);
 VAR_9->ap_preselect_mode = VAR_0;




 FUNC_0();
 FUNC_6(&VAR_8, VAR_9, VAR_5);
 VAR_6++;
 VAR_7++;
 FUNC_1();

 return (VAR_9);
}
