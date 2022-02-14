
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_patch ;
struct TYPE_4__ {int (* patch_fn ) (int **,TYPE_1__*,size_t) ;} ;
typedef TYPE_1__ git_diff ;


 int FUNC_0 (int) ;
 int FUNC_1 (int **,TYPE_1__*,size_t) ;

int FUNC_2(git_patch **VAR_0, git_diff *VAR_1, size_t VAR_2)
{
 FUNC_0(VAR_0 && VAR_1 && VAR_1->patch_fn);
 return VAR_1->patch_fn(VAR_0, VAR_1, VAR_2);
}
