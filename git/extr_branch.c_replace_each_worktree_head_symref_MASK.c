
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int path; int head_ref; scalar_t__ is_detached; } ;
struct ref_store {int dummy; } ;


 int _ (char*) ;
 int error (int ,int ) ;
 int free_worktrees (struct worktree**) ;
 struct ref_store* get_worktree_ref_store (struct worktree*) ;
 struct worktree** get_worktrees (int ) ;
 scalar_t__ refs_create_symref (struct ref_store*,char*,char const*,char const*) ;
 scalar_t__ strcmp (char const*,int ) ;

int replace_each_worktree_head_symref(const char *oldref, const char *newref,
          const char *logmsg)
{
 int ret = 0;
 struct worktree **worktrees = get_worktrees(0);
 int i;

 for (i = 0; worktrees[i]; i++) {
  struct ref_store *refs;

  if (worktrees[i]->is_detached)
   continue;
  if (!worktrees[i]->head_ref)
   continue;
  if (strcmp(oldref, worktrees[i]->head_ref))
   continue;

  refs = get_worktree_ref_store(worktrees[i]);
  if (refs_create_symref(refs, "HEAD", newref, logmsg))
   ret = error(_("HEAD of working tree %s is not updated"),
        worktrees[i]->path);
 }

 free_worktrees(worktrees);
 return ret;
}
