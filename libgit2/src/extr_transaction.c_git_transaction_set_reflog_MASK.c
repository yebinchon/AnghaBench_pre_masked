
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int reflog; } ;
typedef TYPE_1__ transaction_node ;
struct TYPE_7__ {int pool; } ;
typedef TYPE_2__ git_transaction ;
typedef int git_reflog ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int const*,int *) ;
 int FUNC_2 (TYPE_1__**,TYPE_2__*,char const*) ;

int FUNC_3(git_transaction *VAR_0, const char *VAR_1, const git_reflog *VAR_2)
{
 int VAR_3;
 transaction_node *VAR_4;

 FUNC_0(VAR_0 && VAR_1 && VAR_2);

 if ((VAR_3 = FUNC_2(&VAR_4, VAR_0, VAR_1)) < 0)
  return VAR_3;

 if ((VAR_3 = FUNC_1(&VAR_4->reflog, VAR_2, &VAR_0->pool)) < 0)
  return VAR_3;

 return 0;
}
