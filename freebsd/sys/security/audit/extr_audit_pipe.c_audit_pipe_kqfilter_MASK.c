
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knote {scalar_t__ kn_filter; struct audit_pipe* kn_hook; int * kn_fop; } ;
struct cdev {int dummy; } ;
struct TYPE_2__ {int si_note; } ;
struct audit_pipe {TYPE_1__ ap_selinfo; } ;


 int FUNC_0 (struct audit_pipe*) ;
 int FUNC_1 (struct audit_pipe*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (void**) ;
 int FUNC_3 (int *,struct knote*,int) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_3, struct knote *VAR_4)
{
 struct audit_pipe *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2((void **)&VAR_5);
 if (VAR_6 != 0)
  return (VAR_6);
 if (VAR_4->kn_filter != VAR_1)
  return (VAR_0);

 VAR_4->kn_fop = &VAR_2;
 VAR_4->kn_hook = VAR_5;

 FUNC_0(VAR_5);
 FUNC_3(&VAR_5->ap_selinfo.si_note, VAR_4, 1);
 FUNC_1(VAR_5);
 return (0);
}
