
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rename_conflict_info {struct rename* ren1; } ;
struct rename {scalar_t__ branch; scalar_t__ dir_rename_original_dest; } ;
struct merge_options {scalar_t__ branch1; scalar_t__ detect_directory_renames; } ;
struct merge_file_info {int blob; } ;
struct diff_filespec {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct merge_file_info*,struct merge_options*,char const*,int ,struct diff_filespec const*,struct diff_filespec const*,struct diff_filespec const*,struct rename_conflict_info*) ;
 scalar_t__ FUNC_1 (struct merge_options*,char const*,int *,int *,int *) ;
 int FUNC_2 (struct merge_options*,char const*) ;

__attribute__((used)) static int FUNC_3(struct merge_options *VAR_1,
    const char *VAR_2,
    const struct diff_filespec *VAR_3,
    const struct diff_filespec *VAR_4,
    const struct diff_filespec *VAR_5,
    struct rename_conflict_info *VAR_6)
{
 struct rename *VAR_7 = VAR_6->ren1;
 struct merge_file_info VAR_8;
 int VAR_9;
 int VAR_10 = (VAR_7->branch == VAR_1->branch1 ? 2 : 3);


 VAR_9 = FUNC_0(&VAR_8, VAR_1, VAR_2, FUNC_2(VAR_1, VAR_2),
         VAR_3, VAR_4, VAR_5, VAR_6);

 if (VAR_9 &&
     VAR_1->detect_directory_renames == VAR_0 &&
     VAR_7->dir_rename_original_dest) {
  if (FUNC_1(VAR_1, VAR_2,
      ((void*)0),
      VAR_10 == 2 ? &VAR_8.blob : ((void*)0),
      VAR_10 == 2 ? ((void*)0) : &VAR_8.blob))
   return -1;
  VAR_9 = 0;
 }
 return VAR_9;
}
