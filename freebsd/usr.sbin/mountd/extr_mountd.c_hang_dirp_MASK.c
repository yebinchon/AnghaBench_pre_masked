
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xucred {int dummy; } ;
struct hostlist {struct hostlist* ht_next; struct grouplist* ht_grp; } ;
struct grouplist {scalar_t__ gr_numsecflavors; struct grouplist* gr_next; int gr_secflavors; } ;
struct exportlist {scalar_t__ ex_defnumsecflavors; scalar_t__ ex_numsecflavors; int ex_defexflags; int ex_dirl; int ex_secflavors; struct dirlist* ex_defdir; struct xucred ex_defanon; int ex_defsecflavors; int ex_flag; } ;
struct dirlist {struct dirlist* dp_left; struct hostlist* dp_hosts; int dp_flag; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct dirlist*,struct grouplist*,int,struct exportlist*,struct xucred*,int) ;
 int FUNC_1 (int ) ;
 struct hostlist* FUNC_2 () ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct dirlist *VAR_3, struct grouplist *VAR_4, struct exportlist *VAR_5,
 int VAR_6, struct xucred *VAR_7, int VAR_8)
{
 struct hostlist *VAR_9;
 struct dirlist *VAR_10;

 if (VAR_6 & VAR_2) {
  if (VAR_5->ex_defdir)
   FUNC_1((caddr_t)VAR_3);
  else
   VAR_5->ex_defdir = VAR_3;
  if (VAR_4 == (struct grouplist *)((void*)0)) {
   VAR_5->ex_flag |= VAR_1;
   VAR_5->ex_defdir->dp_flag |= VAR_0;

   VAR_5->ex_defnumsecflavors = VAR_5->ex_numsecflavors;
   if (VAR_5->ex_numsecflavors > 0)
    FUNC_3(VAR_5->ex_defsecflavors, VAR_5->ex_secflavors,
        sizeof(VAR_5->ex_secflavors));
   VAR_5->ex_defanon = *VAR_7;
   VAR_5->ex_defexflags = VAR_8;
  } else while (VAR_4) {
   VAR_9 = FUNC_2();
   VAR_9->ht_grp = VAR_4;
   VAR_9->ht_next = VAR_5->ex_defdir->dp_hosts;
   VAR_5->ex_defdir->dp_hosts = VAR_9;

   VAR_4->gr_numsecflavors = VAR_5->ex_numsecflavors;
   if (VAR_5->ex_numsecflavors > 0)
    FUNC_3(VAR_4->gr_secflavors, VAR_5->ex_secflavors,
        sizeof(VAR_5->ex_secflavors));
   VAR_4 = VAR_4->gr_next;
  }
 } else {




  while (VAR_3) {
   VAR_10 = VAR_3->dp_left;
   FUNC_0(&VAR_5->ex_dirl, VAR_3, VAR_4, VAR_6, VAR_5, VAR_7,
       VAR_8);
   VAR_3 = VAR_10;
  }
 }
}
