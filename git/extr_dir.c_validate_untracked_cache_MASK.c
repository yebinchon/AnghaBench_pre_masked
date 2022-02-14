
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct untracked_cache_dir {int recurse; } ;
struct pathspec {scalar_t__ nr; } ;
struct TYPE_8__ {int oid; } ;
struct TYPE_7__ {int oid; } ;
struct dir_struct {int flags; scalar_t__ exclude_per_dir; TYPE_3__ ss_excludes_file; TYPE_4__* untracked; TYPE_2__ ss_info_exclude; TYPE_1__* exclude_list_group; scalar_t__ unmanaged_exclude_files; } ;
struct TYPE_9__ {int dir_flags; scalar_t__ exclude_per_dir; TYPE_3__ ss_excludes_file; TYPE_2__ ss_info_exclude; struct untracked_cache_dir* root; } ;
struct TYPE_6__ {scalar_t__ nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,struct untracked_cache_dir*) ;
 int FUNC_4 (struct untracked_cache_dir*,int ,int const) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int ) ;
 struct untracked_cache_dir* FUNC_8 (int const) ;

__attribute__((used)) static struct untracked_cache_dir *FUNC_9(struct dir_struct *VAR_5,
            int VAR_6,
            const struct pathspec *VAR_7)
{
 struct untracked_cache_dir *VAR_8;
 static int VAR_9 = -1;

 if (!VAR_5->untracked)
  return ((void*)0);
 if (VAR_9 < 0)
  VAR_9 = FUNC_1("GIT_DISABLE_UNTRACKED_CACHE", 0);
 if (VAR_9)
  return ((void*)0);
 if (VAR_5->unmanaged_exclude_files)
  return ((void*)0);







 if (VAR_6 || (VAR_7 && VAR_7->nr))
  return ((void*)0);


 if (VAR_5->flags != VAR_5->untracked->dir_flags ||





     !(VAR_5->flags & VAR_3) ||

     (VAR_5->flags & (VAR_1 | VAR_2 |
      VAR_0)))
  return ((void*)0);





 if (VAR_5->exclude_per_dir != VAR_5->untracked->exclude_per_dir &&
     FUNC_6(VAR_5->exclude_per_dir, VAR_5->untracked->exclude_per_dir))
  return ((void*)0);





 if (VAR_5->exclude_list_group[VAR_4].nr)
  return ((void*)0);

 if (!FUNC_2(VAR_5->untracked)) {
  FUNC_7(FUNC_0("untracked cache is disabled on this system or location"));
  return ((void*)0);
 }

 if (!VAR_5->untracked->root) {
  const int VAR_10 = sizeof(*VAR_5->untracked->root);
  VAR_5->untracked->root = FUNC_8(VAR_10);
  FUNC_4(VAR_5->untracked->root, 0, VAR_10);
 }


 VAR_8 = VAR_5->untracked->root;
 if (!FUNC_5(&VAR_5->ss_info_exclude.oid,
     &VAR_5->untracked->ss_info_exclude.oid)) {
  FUNC_3(VAR_5->untracked, VAR_8);
  VAR_5->untracked->ss_info_exclude = VAR_5->ss_info_exclude;
 }
 if (!FUNC_5(&VAR_5->ss_excludes_file.oid,
     &VAR_5->untracked->ss_excludes_file.oid)) {
  FUNC_3(VAR_5->untracked, VAR_8);
  VAR_5->untracked->ss_excludes_file = VAR_5->ss_excludes_file;
 }


 VAR_8->recurse = 1;
 return VAR_8;
}
