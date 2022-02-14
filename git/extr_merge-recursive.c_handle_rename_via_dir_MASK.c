
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rename_conflict_info {struct rename* ren1; } ;
struct rename {scalar_t__ branch; int dir_rename_original_dest; TYPE_1__* pair; } ;
struct merge_options {scalar_t__ detect_directory_renames; scalar_t__ branch1; TYPE_2__* priv; } ;
struct diff_filespec {char* path; } ;
struct TYPE_4__ {int call_depth; } ;
struct TYPE_3__ {struct diff_filespec* two; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct merge_options*,int,int ,char*,char*) ;
 char* FUNC_4 (struct merge_options*,char*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct merge_options*,int,struct diff_filespec const*,char*) ;
 scalar_t__ FUNC_6 (struct merge_options*,char*,int *,struct diff_filespec const*,struct diff_filespec const*) ;
 scalar_t__ FUNC_7 (struct merge_options*,char*) ;

__attribute__((used)) static int FUNC_8(struct merge_options *VAR_1,
     struct rename_conflict_info *VAR_2)
{






 const struct rename *VAR_3 = VAR_2->ren1;
 const struct diff_filespec *VAR_4 = VAR_3->pair->two;
 char *VAR_5 = VAR_4->path;
 int VAR_6 = (VAR_1->detect_directory_renames ==
          VAR_0);
 FUNC_1(VAR_3->dir_rename_original_dest);

 if (!VAR_1->priv->call_depth && FUNC_7(VAR_1, VAR_4->path)) {
  VAR_6 = 1;
  VAR_5 = FUNC_4(VAR_1, VAR_4->path, VAR_3->branch);
  FUNC_3(VAR_1, 1, FUNC_0("Error: Refusing to lose untracked file at %s; "
     "writing to %s instead."),
         VAR_4->path, VAR_5);
 }

 if (VAR_6) {





  if (FUNC_5(VAR_1, 0, VAR_4, VAR_5))
   return -1;
  if (VAR_5 != VAR_4->path)
   FUNC_2(VAR_5);
  if (FUNC_6(VAR_1, VAR_4->path, ((void*)0),
      VAR_3->branch == VAR_1->branch1 ? VAR_4 : ((void*)0),
      VAR_3->branch == VAR_1->branch1 ? ((void*)0) : VAR_4))
   return -1;
  return 0;
 } else {

  if (FUNC_5(VAR_1, 1, VAR_4, VAR_4->path))
   return -1;
  return 1;
 }
}
