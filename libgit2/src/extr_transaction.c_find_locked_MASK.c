
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int transaction_node ;
struct TYPE_3__ {int locks; } ;
typedef TYPE_1__ git_transaction ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ,char const*) ;

__attribute__((used)) static int FUNC_2(transaction_node **VAR_2, git_transaction *VAR_3, const char *VAR_4)
{
 transaction_node *VAR_5;

 if ((VAR_5 = FUNC_1(VAR_3->locks, VAR_4)) == ((void*)0)) {
  FUNC_0(VAR_1, "the specified reference is not locked");
  return VAR_0;
 }

 *VAR_2 = VAR_5;
 return 0;
}
