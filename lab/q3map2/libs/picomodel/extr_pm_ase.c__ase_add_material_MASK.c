
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mtlId; struct TYPE_5__* next; int * subMtls; } ;
typedef TYPE_1__ aseMaterial_t ;


 TYPE_1__* FUNC_0 (int,int) ;

__attribute__((used)) static aseMaterial_t* FUNC_1( aseMaterial_t **VAR_0, int VAR_1 ){
 aseMaterial_t *VAR_2 = FUNC_0( 1, sizeof( aseMaterial_t ) );
 VAR_2->mtlId = VAR_1;
 VAR_2->subMtls = ((void*)0);
 VAR_2->next = *VAR_0;
 *VAR_0 = VAR_2;

 return VAR_2;
}
