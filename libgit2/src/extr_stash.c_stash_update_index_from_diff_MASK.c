
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stash_update_rules {int include_changed; int include_untracked; int include_ignored; } ;
typedef int git_repository ;
typedef int git_index ;
struct TYPE_6__ {int path; } ;
struct TYPE_5__ {char* path; int mode; } ;
struct TYPE_7__ {int status; TYPE_2__ old_file; TYPE_1__ new_file; } ;
typedef TYPE_3__ git_diff_delta ;
typedef int git_diff ;







 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int const*,size_t) ;
 size_t FUNC_1 (int const*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int *,char const*) ;

__attribute__((used)) static int FUNC_6(
 git_repository *VAR_2,
 git_index *VAR_3,
 const git_diff *VAR_4,
 struct stash_update_rules *VAR_5)
{
 int VAR_6 = 0;
 size_t VAR_7, VAR_8 = FUNC_1(VAR_4);

 for (VAR_7 = 0; !VAR_6 && VAR_7 < VAR_8; ++VAR_7) {
  const char *VAR_9 = ((void*)0);
  const git_diff_delta *VAR_10 = FUNC_0(VAR_4, VAR_7);

  switch (VAR_10->status) {
  case 130:
   if (VAR_5->include_ignored)
    VAR_9 = VAR_10->new_file.path;
   break;

  case 128:
   if (VAR_5->include_untracked &&
    VAR_10->new_file.mode != VAR_1)
    VAR_9 = VAR_10->new_file.path;
   break;

  case 132:
  case 129:
   if (VAR_5->include_changed)
    VAR_9 = VAR_10->new_file.path;
   break;

  case 131:
   if (VAR_5->include_changed &&
    !FUNC_3(((void*)0), VAR_3, VAR_10->old_file.path))
    VAR_6 = FUNC_4(VAR_3, VAR_10->old_file.path, 0);
   break;

  default:

   FUNC_2(
    VAR_0,
    "cannot update index. Unimplemented status (%d)",
    VAR_10->status);
   return -1;
  }

  if (VAR_9 != ((void*)0))
   VAR_6 = FUNC_5(VAR_2, VAR_3, VAR_9);
 }

 return VAR_6;
}
