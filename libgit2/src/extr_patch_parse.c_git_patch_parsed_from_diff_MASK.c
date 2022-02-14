
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_patch ;
struct TYPE_2__ {int patches; } ;
typedef TYPE_1__ git_diff_parsed ;
typedef int git_diff ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,size_t) ;

int FUNC_2(git_patch **VAR_0, git_diff *VAR_1, size_t VAR_2)
{
 git_diff_parsed *VAR_3 = (git_diff_parsed *)VAR_1;
 git_patch *VAR_4;

 if ((VAR_4 = FUNC_1(&VAR_3->patches, VAR_2)) == ((void*)0))
  return -1;

 FUNC_0(VAR_4);
 *VAR_0 = VAR_4;

 return 0;
}
