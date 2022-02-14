
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int subMtlId; struct TYPE_7__* next; } ;
typedef TYPE_1__ aseSubMaterial_t ;
struct TYPE_8__ {TYPE_1__* subMtls; } ;
typedef TYPE_2__ aseMaterial_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static aseSubMaterial_t* FUNC_2( aseMaterial_t* VAR_1, int VAR_2, int VAR_3 ){
 aseMaterial_t* VAR_4 = FUNC_0( VAR_1, VAR_2 );
 aseSubMaterial_t* VAR_5 = ((void*)0);

 if ( !VAR_4 ) {
  FUNC_1( VAR_0, "No ASE material exists with id %i\n", VAR_2 );
  return ((void*)0);
 }

 VAR_5 = VAR_4->subMtls;
 while ( VAR_5 )
 {
  if ( VAR_3 == VAR_5->subMtlId ) {
   break;
  }
  VAR_5 = VAR_5->next;
 }
 return VAR_5;
}
