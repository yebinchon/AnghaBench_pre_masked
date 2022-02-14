
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int payload; struct TYPE_9__* name; } ;
typedef TYPE_1__ transaction_node ;
struct TYPE_10__ {int db; int locks; int pool; } ;
typedef TYPE_2__ git_transaction ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 TYPE_1__* FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,int ,char const*) ;
 int FUNC_5 (int ,int ,int,int,int *,int *,int *) ;
 int FUNC_6 (int ,TYPE_1__*,TYPE_1__*) ;

int FUNC_7(git_transaction *VAR_0, const char *VAR_1)
{
 int VAR_2;
 transaction_node *VAR_3;

 FUNC_1(VAR_0 && VAR_1);

 VAR_3 = FUNC_2(&VAR_0->pool, sizeof(transaction_node));
 FUNC_0(VAR_3);

 VAR_3->name = FUNC_3(&VAR_0->pool, VAR_1);
 FUNC_0(VAR_3->name);

 if ((VAR_2 = FUNC_4(&VAR_3->payload, VAR_0->db, VAR_1)) < 0)
  return VAR_2;

 if ((VAR_2 = FUNC_6(VAR_0->locks, VAR_3->name, VAR_3)) < 0)
  goto cleanup;

 return 0;

cleanup:
 FUNC_5(VAR_0->db, VAR_3->payload, 0, 0, ((void*)0), ((void*)0), ((void*)0));

 return VAR_2;
}
