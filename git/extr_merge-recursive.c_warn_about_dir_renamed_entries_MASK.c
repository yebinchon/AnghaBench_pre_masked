
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rename {char dir_rename_original_type; int dir_rename_original_dest; } ;
struct merge_options {scalar_t__ detect_directory_renames; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,int,int,struct merge_options*,struct rename*) ;

__attribute__((used)) static int FUNC_4(struct merge_options *VAR_2,
       struct rename *VAR_3)
{
 const char *VAR_4;
 int VAR_5 = 1, VAR_6;

 if (!VAR_3)
  return VAR_5;


 if (!VAR_3->dir_rename_original_dest)
  return VAR_5;


 FUNC_2(VAR_2->detect_directory_renames > VAR_0);
 FUNC_2(VAR_3->dir_rename_original_type == 'A' ||
        VAR_3->dir_rename_original_type == 'R');


 VAR_5 = (VAR_2->detect_directory_renames == VAR_1);

 VAR_6 = (VAR_3->dir_rename_original_type == 'A');
 if (VAR_3->dir_rename_original_type == 'A' && VAR_5) {
  VAR_4 = FUNC_1("Path updated: %s added in %s inside a "
   "directory that was renamed in %s; moving it to %s.");
 } else if (VAR_3->dir_rename_original_type == 'A' && !VAR_5) {
  VAR_4 = FUNC_1("CONFLICT (file location): %s added in %s "
   "inside a directory that was renamed in %s, "
   "suggesting it should perhaps be moved to %s.");
 } else if (VAR_3->dir_rename_original_type == 'R' && VAR_5) {
  VAR_4 = FUNC_1("Path updated: %s renamed to %s in %s, inside a "
   "directory that was renamed in %s; moving it to %s.");
 } else if (VAR_3->dir_rename_original_type == 'R' && !VAR_5) {
  VAR_4 = FUNC_1("CONFLICT (file location): %s renamed to %s in %s, "
   "inside a directory that was renamed in %s, "
   "suggesting it should perhaps be moved to %s.");
 } else {
  FUNC_0("Impossible dir_rename_original_type/clean combination");
 }
 FUNC_3(VAR_4, VAR_6, VAR_5, VAR_2, VAR_3);

 return VAR_5;
}
