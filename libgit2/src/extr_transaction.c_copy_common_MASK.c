
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int message; int sig; } ;
typedef TYPE_1__ transaction_node ;
struct TYPE_6__ {int pool; int repo; } ;
typedef TYPE_2__ git_transaction ;
typedef int const git_signature ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*) ;
 scalar_t__ FUNC_2 (int const**,int ) ;
 scalar_t__ FUNC_3 (int *,int const*,int *) ;
 int FUNC_4 (int const*) ;

__attribute__((used)) static int FUNC_5(transaction_node *VAR_0, git_transaction *VAR_1, const git_signature *VAR_2, const char *VAR_3)
{
 if (VAR_2 && FUNC_3(&VAR_0->sig, VAR_2, &VAR_1->pool) < 0)
  return -1;

 if (!VAR_0->sig) {
  git_signature *VAR_4;
  int VAR_5;

  if (FUNC_2(&VAR_4, VAR_1->repo) < 0)
   return -1;


  VAR_5 = FUNC_3(&VAR_0->sig, VAR_4, &VAR_1->pool);
  FUNC_4(VAR_4);
  if (VAR_5 < 0)
   return VAR_5;
 }

 if (VAR_3) {
  VAR_0->message = FUNC_1(&VAR_1->pool, VAR_3);
  FUNC_0(VAR_0->message);
 }

 return 0;
}
