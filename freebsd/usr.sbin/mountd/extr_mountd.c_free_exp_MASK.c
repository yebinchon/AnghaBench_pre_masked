
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grouplist {struct grouplist* gr_next; } ;
struct exportlist {struct grouplist* ex_grphead; int ex_dirl; scalar_t__ ex_indexfile; scalar_t__ ex_fsdir; TYPE_1__* ex_defdir; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int dp_hosts; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct grouplist*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct exportlist *VAR_0)
{
 struct grouplist *VAR_1, *VAR_2;

 if (VAR_0->ex_defdir) {
  FUNC_3(VAR_0->ex_defdir->dp_hosts);
  FUNC_0((caddr_t)VAR_0->ex_defdir);
 }
 if (VAR_0->ex_fsdir)
  FUNC_0(VAR_0->ex_fsdir);
 if (VAR_0->ex_indexfile)
  FUNC_0(VAR_0->ex_indexfile);
 FUNC_1(VAR_0->ex_dirl);
 VAR_1 = VAR_0->ex_grphead;
 while (VAR_1) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->gr_next;
  FUNC_2(VAR_2);
 }
 FUNC_0((caddr_t)VAR_0);
}
