
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int id_abbrev; int mode; int id; } ;
struct TYPE_6__ {int id_abbrev; int mode; int id; } ;
struct TYPE_8__ {TYPE_2__ old_file; TYPE_1__ new_file; } ;
typedef TYPE_3__ git_diff_delta ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_3__ const*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,char*,...) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (char*,int,int *) ;

__attribute__((used)) static int FUNC_5(
 git_buf *VAR_2, const git_diff_delta *VAR_3, int VAR_4)
{
 char VAR_5[VAR_1+1], VAR_6[VAR_1+1];

 if (VAR_3->old_file.mode &&
   VAR_4 > VAR_3->old_file.id_abbrev) {
  FUNC_3(VAR_0,
   "the patch input contains %d id characters (cannot print %d)",
   VAR_3->old_file.id_abbrev, VAR_4);
  return -1;
 }

 if ((VAR_3->new_file.mode &&
   VAR_4 > VAR_3->new_file.id_abbrev)) {
  FUNC_3(VAR_0,
   "the patch input contains %d id characters (cannot print %d)",
   VAR_3->new_file.id_abbrev, VAR_4);
  return -1;
 }

 FUNC_4(VAR_5, VAR_4 + 1, &VAR_3->old_file.id);
 FUNC_4(VAR_6, VAR_4 + 1, &VAR_3->new_file.id);

 if (VAR_3->old_file.mode == VAR_3->new_file.mode) {
  FUNC_2(VAR_2, "index %s..%s %o\n",
   VAR_5, VAR_6, VAR_3->old_file.mode);
 } else {
  if (VAR_3->old_file.mode == 0)
   FUNC_2(VAR_2, "new file mode %o\n", VAR_3->new_file.mode);
  else if (VAR_3->new_file.mode == 0)
   FUNC_2(VAR_2, "deleted file mode %o\n", VAR_3->old_file.mode);
  else
   FUNC_0(VAR_2, VAR_3);

  FUNC_2(VAR_2, "index %s..%s\n", VAR_5, VAR_6);
 }

 return FUNC_1(VAR_2) ? -1 : 0;
}
