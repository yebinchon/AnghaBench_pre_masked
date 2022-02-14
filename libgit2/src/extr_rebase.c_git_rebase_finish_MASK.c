
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_signature ;
struct TYPE_7__ {int head_detached; scalar_t__ inmemory; } ;
typedef TYPE_1__ git_rebase ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int const*) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(
 git_rebase *VAR_0,
 const git_signature *VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(VAR_0);

 if (VAR_0->inmemory)
  return 0;

 if (!VAR_0->head_detached)
  VAR_2 = FUNC_3(VAR_0);

 if (VAR_2 == 0 && (VAR_2 = FUNC_2(VAR_0, VAR_1)) == 0)
  VAR_2 = FUNC_1(VAR_0);

 return VAR_2;
}
