
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int color; int st; int normal; int xyz; } ;
struct TYPE_7__ {struct TYPE_7__* next; int * data; int index; TYPE_1__ vcd; } ;
typedef TYPE_2__ picoVertexCombinationHash_t ;
typedef int * picoVec3_t ;
typedef int picoIndex_t ;
typedef int * picoColor_t ;


 unsigned int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

picoVertexCombinationHash_t *FUNC_5( picoVertexCombinationHash_t **VAR_0, picoVec3_t VAR_1, picoVec3_t VAR_2, picoVec3_t VAR_3, picoColor_t VAR_4, picoIndex_t VAR_5 ){
 unsigned int VAR_6;
 picoVertexCombinationHash_t *VAR_7;


 if ( VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0) ) {
  return ((void*)0);
 }

 VAR_7 = FUNC_1( sizeof( picoVertexCombinationHash_t ) );

 if ( !VAR_7 ) {
  return ((void*)0);
 }

 VAR_6 = FUNC_0( VAR_1 );

 FUNC_3( VAR_1, VAR_7->vcd.xyz );
 FUNC_3( VAR_2, VAR_7->vcd.normal );
 FUNC_4( VAR_3, VAR_7->vcd.st );
 FUNC_2( VAR_4, VAR_7->vcd.color );
 VAR_7->index = VAR_5;
 VAR_7->data = ((void*)0);
 VAR_7->next = VAR_0[ VAR_6 ];
 VAR_0[ VAR_6 ] = VAR_7;

 return VAR_7;
}
