
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nat64lsn_host {int states_hash; TYPE_1__* alias; int aliases; } ;
struct nat64lsn_aliaslink {int states_hash; TYPE_1__* alias; int aliases; } ;
struct TYPE_3__ {int hosts_count; int hosts; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 struct nat64lsn_host* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct nat64lsn_host*,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct nat64lsn_host*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int ,struct nat64lsn_host*) ;

__attribute__((used)) static void
FUNC_9(struct nat64lsn_host *VAR_6)
{
 struct nat64lsn_aliaslink *VAR_7;

 while (!FUNC_2(&VAR_6->aliases)) {
  VAR_7 = FUNC_3(&VAR_6->aliases);
  FUNC_5(&VAR_6->aliases, VAR_2);

  FUNC_0(VAR_7->alias);
  FUNC_4(&VAR_7->alias->hosts, VAR_7,
      VAR_3, VAR_1);
  VAR_7->alias->hosts_count--;
  FUNC_1(VAR_7->alias);

  FUNC_8(VAR_4, VAR_7);
 }
 FUNC_6(VAR_6);
 FUNC_7(VAR_6->states_hash, VAR_0);
 FUNC_8(VAR_5, VAR_6);
}
