
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct secasvar {int * tdb_xform; TYPE_1__* key_auth; } ;
struct TYPE_2__ {int key_data; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct secasvar *VAR_0)
{

 if (VAR_0->key_auth != ((void*)0))
  FUNC_1(VAR_0->key_auth->key_data, FUNC_0(VAR_0->key_auth));
 VAR_0->tdb_xform = ((void*)0);
 return (0);
}
