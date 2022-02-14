
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree {int dummy; } ;
struct strbuf {int buf; } ;
struct merge_options {int repo; } ;
struct hashmap {int dummy; } ;
struct dir_rename_entry {int dir; int non_unique_new_dir; } ;
struct TYPE_2__ {int nr; } ;
struct collision_entry {int reported_already; TYPE_1__ source_files; } ;


 int FUNC_0 (char*) ;
 struct strbuf VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct dir_rename_entry*,char const*) ;
 struct collision_entry* FUNC_3 (struct hashmap*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct merge_options*,int,int ,char const*,int ) ;
 int FUNC_6 (struct strbuf*,char*,TYPE_1__*) ;
 int FUNC_7 (struct strbuf*) ;
 scalar_t__ FUNC_8 (int ,struct tree*,char*) ;

__attribute__((used)) static char *FUNC_9(struct merge_options *VAR_1,
      const char *VAR_2,
      struct dir_rename_entry *VAR_3,
      struct hashmap *VAR_4,
      struct tree *VAR_5)
{
 char *VAR_6 = ((void*)0);
 struct collision_entry *VAR_7;
 int VAR_8 = 1;
 struct strbuf VAR_9 = VAR_0;





 VAR_6 = FUNC_2(VAR_3, VAR_2);

 if (!VAR_6) {

  if (!VAR_3->non_unique_new_dir)
   FUNC_0("entry->non_unqiue_dir not set and !new_path");
  FUNC_5(VAR_1, 1, FUNC_1("CONFLICT (directory rename split): "
          "Unclear where to place %s because directory "
          "%s was renamed to multiple other directories, "
          "with no destination getting a majority of the "
          "files."),
         VAR_2, VAR_3->dir);
  VAR_8 = 0;
  return ((void*)0);
 }






 VAR_7 = FUNC_3(VAR_4, VAR_6);
 if (VAR_7 == ((void*)0))
  FUNC_0("collision_ent is NULL");
 if (VAR_7->reported_already) {
  VAR_8 = 0;
 } else if (FUNC_8(VAR_1->repo, VAR_5, VAR_6)) {
  VAR_7->reported_already = 1;
  FUNC_6(&VAR_9, ", ",
       &VAR_7->source_files);
  FUNC_5(VAR_1, 1, FUNC_1("CONFLICT (implicit dir rename): Existing "
          "file/dir at %s in the way of implicit "
          "directory rename(s) putting the following "
          "path(s) there: %s."),
         VAR_6, VAR_9.buf);
  VAR_8 = 0;
 } else if (VAR_7->source_files.nr > 1) {
  VAR_7->reported_already = 1;
  FUNC_6(&VAR_9, ", ",
       &VAR_7->source_files);
  FUNC_5(VAR_1, 1, FUNC_1("CONFLICT (implicit dir rename): Cannot map "
          "more than one path to %s; implicit directory "
          "renames tried to put these paths there: %s"),
         VAR_6, VAR_9.buf);
  VAR_8 = 0;
 }


 FUNC_7(&VAR_9);
 if (!VAR_8 && VAR_6) {
  FUNC_4(VAR_6);
  return ((void*)0);
 }

 return VAR_6;
}
