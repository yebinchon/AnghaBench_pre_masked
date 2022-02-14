
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; } ;
struct TYPE_6__ {int ref_type; TYPE_1__ target; } ;
typedef TYPE_2__ transaction_node ;
typedef int git_transaction ;
typedef int git_signature ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int *,int const*,char const*) ;
 int FUNC_2 (TYPE_2__**,int *,char const*) ;
 int FUNC_3 (int *,int const*) ;

int FUNC_4(git_transaction *VAR_1, const char *VAR_2, const git_oid *VAR_3, const git_signature *VAR_4, const char *VAR_5)
{
 int VAR_6;
 transaction_node *VAR_7;

 FUNC_0(VAR_1 && VAR_2 && VAR_3);

 if ((VAR_6 = FUNC_2(&VAR_7, VAR_1, VAR_2)) < 0)
  return VAR_6;

 if ((VAR_6 = FUNC_1(VAR_7, VAR_1, VAR_4, VAR_5)) < 0)
  return VAR_6;

 FUNC_3(&VAR_7->target.id, VAR_3);
 VAR_7->ref_type = VAR_0;

 return 0;
}
