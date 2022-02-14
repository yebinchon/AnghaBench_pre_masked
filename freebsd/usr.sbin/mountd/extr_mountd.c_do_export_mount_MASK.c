
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int dummy; } ;
struct grouplist {struct grouplist* gr_next; int gr_secflavors; int gr_numsecflavors; int gr_anon; int gr_exflags; int gr_type; } ;
struct exportlist {int ex_flag; int ex_fsdir; struct grouplist* ex_grphead; int ex_defsecflavors; int ex_defnumsecflavors; int ex_defanon; int ex_defexflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (struct exportlist*,struct grouplist*,int ,int *,int ,size_t,struct statfs*,int ,int ) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct exportlist *VAR_2, struct statfs *VAR_3)
{
 struct grouplist *VAR_4, VAR_5;
 int VAR_6;
 size_t VAR_7;

 FUNC_0("do_export_mount=%s", VAR_2->ex_fsdir);
 VAR_7 = FUNC_2(VAR_2->ex_fsdir);
 if ((VAR_2->ex_flag & VAR_0) != 0) {
  VAR_5.gr_type = VAR_1;
  VAR_5.gr_next = ((void*)0);

  FUNC_0("ex_defexflags=0x%x", VAR_2->ex_defexflags);
  VAR_6 = FUNC_1(VAR_2, &VAR_5, VAR_2->ex_defexflags, &VAR_2->ex_defanon,
      VAR_2->ex_fsdir, VAR_7, VAR_3, VAR_2->ex_defnumsecflavors,
      VAR_2->ex_defsecflavors);
  if (VAR_6 != 0)
   return (VAR_6);
 }


 VAR_4 = VAR_2->ex_grphead;
 while (VAR_4 != ((void*)0)) {
  FUNC_0("do mount gr_type=0x%x gr_exflags=0x%x",
      VAR_4->gr_type, VAR_4->gr_exflags);
  VAR_6 = FUNC_1(VAR_2, VAR_4, VAR_4->gr_exflags, &VAR_4->gr_anon,
      VAR_2->ex_fsdir, VAR_7, VAR_3, VAR_4->gr_numsecflavors,
      VAR_4->gr_secflavors);
  if (VAR_6 != 0)
   return (VAR_6);
  VAR_4 = VAR_4->gr_next;
 }
 return (0);
}
