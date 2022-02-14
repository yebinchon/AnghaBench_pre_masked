
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct secasvar {int * tdb_xform; int * tdb_encalgxform; TYPE_1__* key_enc; } ;
struct TYPE_2__ {int key_data; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct secasvar*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct secasvar *VAR_0)
{

 int VAR_1 = FUNC_1(VAR_0);

 if (VAR_0->key_enc)
  FUNC_2(VAR_0->key_enc->key_data, FUNC_0(VAR_0->key_enc));
 VAR_0->tdb_encalgxform = ((void*)0);
 VAR_0->tdb_xform = ((void*)0);
 return VAR_1;
}
