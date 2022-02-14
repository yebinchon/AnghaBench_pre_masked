
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct untracked_cache_dir {size_t dirs_nr; scalar_t__ untracked_nr; int * untracked; int recurse; struct untracked_cache_dir** dirs; } ;
struct cached_dir {size_t nr_dirs; scalar_t__ nr_files; int file; struct untracked_cache_dir* untracked; struct untracked_cache_dir* ucd; int de; scalar_t__ fdir; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct cached_dir *VAR_0)
{
 if (VAR_0->fdir) {
  VAR_0->de = FUNC_0(VAR_0->fdir);
  if (!VAR_0->de)
   return -1;
  return 0;
 }
 while (VAR_0->nr_dirs < VAR_0->untracked->dirs_nr) {
  struct untracked_cache_dir *VAR_1 = VAR_0->untracked->dirs[VAR_0->nr_dirs];
  if (!VAR_1->recurse) {
   VAR_0->nr_dirs++;
   continue;
  }
  VAR_0->ucd = VAR_1;
  VAR_0->nr_dirs++;
  return 0;
 }
 VAR_0->ucd = ((void*)0);
 if (VAR_0->nr_files < VAR_0->untracked->untracked_nr) {
  struct untracked_cache_dir *VAR_2 = VAR_0->untracked;
  VAR_0->file = VAR_2->untracked[VAR_0->nr_files++];
  return 0;
 }
 return -1;
}
