
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int git_pool ;
struct TYPE_11__ {int * path; } ;
struct TYPE_10__ {int * path; } ;
struct TYPE_12__ {TYPE_2__ old_file; TYPE_1__ new_file; int flags; } ;
typedef TYPE_3__ git_diff_delta ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int) ;
 void* FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_3__*,TYPE_3__ const*,int) ;

git_diff_delta *FUNC_5(
 const git_diff_delta *VAR_0, git_pool *VAR_1)
{
 git_diff_delta *VAR_2 = FUNC_2(sizeof(git_diff_delta));
 if (!VAR_2)
  return ((void*)0);

 FUNC_4(VAR_2, VAR_0, sizeof(git_diff_delta));
 FUNC_0(VAR_2->flags);

 if (VAR_0->old_file.path != ((void*)0)) {
  VAR_2->old_file.path = FUNC_3(VAR_1, VAR_0->old_file.path);
  if (VAR_2->old_file.path == ((void*)0))
   goto fail;
 }

 if (VAR_0->new_file.path != VAR_0->old_file.path && VAR_0->new_file.path != ((void*)0)) {
  VAR_2->new_file.path = FUNC_3(VAR_1, VAR_0->new_file.path);
  if (VAR_2->new_file.path == ((void*)0))
   goto fail;
 } else {
  VAR_2->new_file.path = VAR_2->old_file.path;
 }

 return VAR_2;

fail:
 FUNC_1(VAR_2);
 return ((void*)0);
}
