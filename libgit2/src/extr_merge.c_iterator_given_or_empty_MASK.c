
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_iterator_options ;
typedef int git_iterator ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_0 (int **,TYPE_1__*) ;

__attribute__((used)) static git_iterator *FUNC_1(git_iterator **VAR_2, git_iterator *VAR_3)
{
 git_iterator_options VAR_4 = VAR_1;

 if (VAR_3)
  return VAR_3;

 VAR_4.flags = VAR_0;

 if (FUNC_0(VAR_2, &VAR_4) < 0)
  return ((void*)0);

 return *VAR_2;
}
