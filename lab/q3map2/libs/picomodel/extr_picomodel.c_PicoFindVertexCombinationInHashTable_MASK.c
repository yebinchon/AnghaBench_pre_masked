
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* xyz; scalar_t__* normal; scalar_t__* st; scalar_t__ color; } ;
struct TYPE_6__ {TYPE_1__ vcd; struct TYPE_6__* next; } ;
typedef TYPE_2__ picoVertexCombinationHash_t ;
typedef scalar_t__* picoVec3_t ;
typedef int * picoColor_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

picoVertexCombinationHash_t *FUNC_2( picoVertexCombinationHash_t **VAR_3, picoVec3_t VAR_4, picoVec3_t VAR_5, picoVec3_t VAR_6, picoColor_t VAR_7 ){
 unsigned int VAR_8;
 picoVertexCombinationHash_t *VAR_9;


 if ( VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 == ((void*)0) ) {
  return ((void*)0);
 }

 VAR_8 = FUNC_0( VAR_4 );

 for ( VAR_9 = VAR_3[ VAR_8 ]; VAR_9; VAR_9 = VAR_9->next )
 {


  if ( ( VAR_9->vcd.xyz[ 0 ] != VAR_4[ 0 ] || VAR_9->vcd.xyz[ 1 ] != VAR_4[ 1 ] || VAR_9->vcd.xyz[ 2 ] != VAR_4[ 2 ] ) ) {
   continue;
  }


  if ( ( VAR_9->vcd.normal[ 0 ] != VAR_5[ 0 ] || VAR_9->vcd.normal[ 1 ] != VAR_5[ 1 ] || VAR_9->vcd.normal[ 2 ] != VAR_5[ 2 ] ) ) {
   continue;
  }


  if ( VAR_9->vcd.st[ 0 ] != VAR_6[ 0 ] || VAR_9->vcd.st[ 1 ] != VAR_6[ 1 ] ) {
   continue;
  }
  if ( *( (int*) VAR_9->vcd.color ) != *( (int*) VAR_7 ) ) {
   continue;
  }


  return VAR_9;
 }

 return ((void*)0);
}
