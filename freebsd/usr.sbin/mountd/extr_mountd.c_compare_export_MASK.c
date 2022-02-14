
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grouplist {int gr_flag; scalar_t__ gr_numsecflavors; scalar_t__ gr_exflags; struct grouplist* gr_next; int gr_secflavors; int gr_anon; } ;
struct exportlist {int ex_flag; scalar_t__ ex_defnumsecflavors; scalar_t__ ex_defexflags; struct grouplist* ex_grphead; int ex_defsecflavors; int ex_defanon; TYPE_1__* ex_defdir; int ex_fsdir; } ;
struct TYPE_2__ {int dp_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct exportlist *VAR_3, struct exportlist *VAR_4)
{
 struct grouplist *VAR_5, *VAR_6;

 if (FUNC_2(VAR_3->ex_fsdir, VAR_4->ex_fsdir) != 0)
  return (1);
 if ((VAR_3->ex_flag & VAR_1) != (VAR_4->ex_flag & VAR_1))
  return (1);
 if ((VAR_3->ex_defdir != ((void*)0) && VAR_4->ex_defdir == ((void*)0)) ||
     (VAR_3->ex_defdir == ((void*)0) && VAR_4->ex_defdir != ((void*)0)))
  return (1);
 if (VAR_3->ex_defdir != ((void*)0) && (VAR_3->ex_defdir->dp_flag & VAR_0) !=
     (VAR_4->ex_defdir->dp_flag & VAR_0))
  return (1);
 if ((VAR_3->ex_flag & VAR_1) != 0 && (VAR_3->ex_defnumsecflavors !=
     VAR_4->ex_defnumsecflavors || VAR_3->ex_defexflags !=
     VAR_4->ex_defexflags || FUNC_0(&VAR_3->ex_defanon,
     &VAR_4->ex_defanon) != 0 || FUNC_1(VAR_3->ex_defsecflavors,
     VAR_4->ex_defsecflavors, VAR_3->ex_defnumsecflavors) != 0))
  return (1);


 for (VAR_6 = VAR_4->ex_grphead; VAR_6 != ((void*)0); VAR_6 = VAR_6->gr_next)
  VAR_6->gr_flag = 0;
 for (VAR_5 = VAR_3->ex_grphead; VAR_5 != ((void*)0); VAR_5 = VAR_5->gr_next) {
  for (VAR_6 = VAR_4->ex_grphead; VAR_6 != ((void*)0); VAR_6 =
      VAR_6->gr_next)
   if ((VAR_6->gr_flag & VAR_2) == 0 &&
       VAR_5->gr_numsecflavors == VAR_6->gr_numsecflavors &&
       VAR_5->gr_exflags == VAR_6->gr_exflags &&
       FUNC_0(&VAR_5->gr_anon, &VAR_6->gr_anon) == 0 &&
       FUNC_1(VAR_5->gr_secflavors,
       VAR_6->gr_secflavors, VAR_5->gr_numsecflavors) == 0)
    break;
  if (VAR_6 != ((void*)0))
   VAR_6->gr_flag |= VAR_2;
  else
   return (1);
 }
 for (VAR_6 = VAR_4->ex_grphead; VAR_6 != ((void*)0); VAR_6 = VAR_6->gr_next)
  if ((VAR_6->gr_flag & VAR_2) == 0)
   return (1);
 return (0);
}
