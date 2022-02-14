
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct secasvar {int * tdb_xform; int * tdb_authalgxform; int * tdb_cryptoid; TYPE_1__* key_auth; } ;
struct TYPE_2__ {int key_data; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct secasvar *VAR_0)
{

 if (VAR_0->key_auth)
  FUNC_1(VAR_0->key_auth->key_data, FUNC_0(VAR_0->key_auth));

 FUNC_2(VAR_0->tdb_cryptoid);
 VAR_0->tdb_cryptoid = ((void*)0);
 VAR_0->tdb_authalgxform = ((void*)0);
 VAR_0->tdb_xform = ((void*)0);
 return 0;
}
