
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int symbolic; } ;
struct TYPE_10__ {int ref_type; TYPE_1__ target; } ;
typedef TYPE_2__ transaction_node ;
struct TYPE_11__ {int pool; } ;
typedef TYPE_3__ git_transaction ;
typedef int git_signature ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,int const*,char const*) ;
 int FUNC_3 (TYPE_2__**,TYPE_3__*,char const*) ;
 int FUNC_4 (int *,char const*) ;

int FUNC_5(git_transaction *VAR_1, const char *VAR_2, const char *VAR_3, const git_signature *VAR_4, const char *VAR_5)
{
 int VAR_6;
 transaction_node *VAR_7;

 FUNC_1(VAR_1 && VAR_2 && VAR_3);

 if ((VAR_6 = FUNC_3(&VAR_7, VAR_1, VAR_2)) < 0)
  return VAR_6;

 if ((VAR_6 = FUNC_2(VAR_7, VAR_1, VAR_4, VAR_5)) < 0)
  return VAR_6;

 VAR_7->target.symbolic = FUNC_4(&VAR_1->pool, VAR_3);
 FUNC_0(VAR_7->target.symbolic);
 VAR_7->ref_type = VAR_0;

 return 0;
}
