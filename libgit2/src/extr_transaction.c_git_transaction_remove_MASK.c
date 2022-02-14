
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int remove; int ref_type; } ;
typedef TYPE_1__ transaction_node ;
typedef int git_transaction ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__**,int *,char const*) ;

int FUNC_1(git_transaction *VAR_1, const char *VAR_2)
{
 int VAR_3;
 transaction_node *VAR_4;

 if ((VAR_3 = FUNC_0(&VAR_4, VAR_1, VAR_2)) < 0)
  return VAR_3;

 VAR_4->remove = 1;
 VAR_4->ref_type = VAR_0;

 return 0;
}
