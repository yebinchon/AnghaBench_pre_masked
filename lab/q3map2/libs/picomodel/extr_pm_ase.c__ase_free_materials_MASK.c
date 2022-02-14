
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* subMtls; } ;
typedef TYPE_1__ aseSubMaterial_t ;
typedef TYPE_1__ aseMaterial_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1( aseMaterial_t **VAR_0 ){
 aseMaterial_t* VAR_1 = *VAR_0;
 aseSubMaterial_t* VAR_2 = ((void*)0);

 aseMaterial_t* VAR_3 = ((void*)0);
 aseSubMaterial_t* VAR_4 = ((void*)0);

 while ( VAR_1 )
 {
  VAR_2 = VAR_1->subMtls;
  while ( VAR_2 )
  {
   VAR_4 = VAR_2->next;
   FUNC_0( VAR_2 );
   VAR_2 = VAR_4;
  }
  VAR_3 = VAR_1->next;
  FUNC_0( VAR_1 );
  VAR_1 = VAR_3;
 }
 ( *VAR_0 ) = ((void*)0);
}
