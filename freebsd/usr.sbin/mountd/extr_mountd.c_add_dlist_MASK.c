
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xucred {int dummy; } ;
struct hostlist {struct hostlist* ht_next; struct grouplist* ht_grp; } ;
struct grouplist {scalar_t__ gr_numsecflavors; struct grouplist* gr_next; int gr_secflavors; } ;
struct exportlist {scalar_t__ ex_numsecflavors; scalar_t__ ex_defnumsecflavors; int ex_defexflags; struct xucred ex_defanon; int ex_secflavors; int ex_defsecflavors; int ex_flag; } ;
struct dirlist {int dp_flag; struct hostlist* dp_hosts; struct dirlist* dp_left; struct dirlist* dp_right; int dp_dirp; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct hostlist* FUNC_1 () ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct dirlist **VAR_2, struct dirlist *VAR_3, struct grouplist *VAR_4,
 int VAR_5, struct exportlist *VAR_6, struct xucred *VAR_7, int VAR_8)
{
 struct dirlist *VAR_9;
 struct hostlist *VAR_10;
 int VAR_11;

 VAR_9 = *VAR_2;
 if (VAR_9) {
  VAR_11 = FUNC_3(VAR_9->dp_dirp, VAR_3->dp_dirp);
  if (VAR_11 > 0) {
   FUNC_4(&VAR_9->dp_left, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
       VAR_8);
   return;
  } else if (VAR_11 < 0) {
   FUNC_4(&VAR_9->dp_right, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
       VAR_8);
   return;
  } else
   FUNC_0((caddr_t)VAR_3);
 } else {
  VAR_9 = VAR_3;
  VAR_9->dp_left = (struct dirlist *)((void*)0);
  *VAR_2 = VAR_9;
 }
 if (VAR_4) {




  do {
   VAR_10 = FUNC_1();
   VAR_10->ht_grp = VAR_4;
   VAR_10->ht_next = VAR_9->dp_hosts;
   VAR_9->dp_hosts = VAR_10;

   VAR_4->gr_numsecflavors = VAR_6->ex_numsecflavors;
   if (VAR_6->ex_numsecflavors > 0)
    FUNC_2(VAR_4->gr_secflavors, VAR_6->ex_secflavors,
        sizeof(VAR_6->ex_secflavors));
   VAR_4 = VAR_4->gr_next;
  } while (VAR_4);
 } else {
  VAR_6->ex_flag |= VAR_1;
  VAR_9->dp_flag |= VAR_0;

  VAR_6->ex_defnumsecflavors = VAR_6->ex_numsecflavors;
  if (VAR_6->ex_numsecflavors > 0)
   FUNC_2(VAR_6->ex_defsecflavors, VAR_6->ex_secflavors,
       sizeof(VAR_6->ex_secflavors));
  VAR_6->ex_defanon = *VAR_7;
  VAR_6->ex_defexflags = VAR_8;
 }
}
