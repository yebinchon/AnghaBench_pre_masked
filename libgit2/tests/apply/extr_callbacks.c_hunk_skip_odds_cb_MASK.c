
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_diff_hunk ;


 int FUNC_0 (int const*) ;

__attribute__((used)) static int FUNC_1(const git_diff_hunk *VAR_0, void *VAR_1)
{
 int *VAR_2 = (int *)VAR_1;
 FUNC_0(VAR_0);

 return ((*VAR_2)++ % 2 == 1);
}
