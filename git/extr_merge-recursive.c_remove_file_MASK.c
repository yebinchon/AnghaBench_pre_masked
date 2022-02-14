
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct merge_options {TYPE_1__* repo; TYPE_2__* priv; } ;
struct cache_entry {int name; } ;
struct TYPE_4__ {scalar_t__ call_depth; } ;
struct TYPE_3__ {int index; } ;


 scalar_t__ ce_stage (struct cache_entry*) ;
 scalar_t__ ignore_case ;
 struct cache_entry* index_file_exists (int ,char const*,int ,scalar_t__) ;
 scalar_t__ remove_file_from_index (int ,char const*) ;
 scalar_t__ remove_path (char const*) ;
 scalar_t__ strcmp (char const*,int ) ;
 int strlen (char const*) ;

__attribute__((used)) static int remove_file(struct merge_options *opt, int clean,
         const char *path, int no_wd)
{
 int update_cache = opt->priv->call_depth || clean;
 int update_working_directory = !opt->priv->call_depth && !no_wd;

 if (update_cache) {
  if (remove_file_from_index(opt->repo->index, path))
   return -1;
 }
 if (update_working_directory) {
  if (ignore_case) {
   struct cache_entry *ce;
   ce = index_file_exists(opt->repo->index, path, strlen(path),
            ignore_case);
   if (ce && ce_stage(ce) == 0 && strcmp(path, ce->name))
    return 0;
  }
  if (remove_path(path))
   return -1;
 }
 return 0;
}
