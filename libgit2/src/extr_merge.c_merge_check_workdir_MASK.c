
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ length; scalar_t__ contents; } ;
typedef TYPE_3__ git_vector ;
typedef int git_repository ;
typedef int git_index ;
struct TYPE_11__ {scalar_t__ count; char** strings; } ;
struct TYPE_14__ {int ignore_submodules; TYPE_1__ pathspec; int flags; } ;
typedef TYPE_4__ git_diff_options ;
struct TYPE_12__ {size_t length; } ;
struct TYPE_15__ {TYPE_2__ deltas; } ;
typedef TYPE_5__ git_diff ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__**,int *,int *,TYPE_4__*) ;

__attribute__((used)) static int FUNC_3(size_t *VAR_4, git_repository *VAR_5, git_index *VAR_6, git_vector *VAR_7)
{
 git_diff *VAR_8 = ((void*)0);
 git_diff_options VAR_9 = VAR_2;
 int VAR_10 = 0;

 FUNC_0(VAR_6);

 *VAR_4 = 0;
 if (VAR_7->length == 0)
  return 0;

 VAR_9.flags |= VAR_1;





 VAR_9.flags |= VAR_0;
 VAR_9.pathspec.count = VAR_7->length;
 VAR_9.pathspec.strings = (char **)VAR_7->contents;
 VAR_9.ignore_submodules = VAR_3;

 if ((VAR_10 = FUNC_2(&VAR_8, VAR_5, ((void*)0), &VAR_9)) < 0)
  goto done;

 *VAR_4 = VAR_8->deltas.length;

done:
 FUNC_1(VAR_8);

 return VAR_10;
}
