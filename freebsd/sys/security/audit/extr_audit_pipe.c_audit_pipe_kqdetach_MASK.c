
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knote {scalar_t__ kn_hook; } ;
struct TYPE_2__ {int si_note; } ;
struct audit_pipe {TYPE_1__ ap_selinfo; } ;


 int FUNC_0 (struct audit_pipe*) ;
 int FUNC_1 (struct audit_pipe*) ;
 int FUNC_2 (int *,struct knote*,int) ;

__attribute__((used)) static void
FUNC_3(struct knote *VAR_0)
{
 struct audit_pipe *VAR_1;

 VAR_1 = (struct audit_pipe *)VAR_0->kn_hook;
 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->ap_selinfo.si_note, VAR_0, 1);
 FUNC_1(VAR_1);
}
