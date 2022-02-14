
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_5__ {scalar_t__ numTestNodes; int* testNodes; scalar_t__ testAll; void* passSolid; int hit; } ;
typedef TYPE_1__ trace_t ;
struct TYPE_6__ {int type; scalar_t__ numItems; float* plane; int* children; } ;
typedef TYPE_2__ traceNode_t ;
typedef void* qboolean ;


 float FUNC_0 (float*,float*) ;
 scalar_t__ VAR_0 ;



 int VAR_1 ;
 float VAR_2 ;
 int FUNC_1 (float*,int ) ;
 void* VAR_3 ;
 void* VAR_4 ;
 TYPE_2__* VAR_5 ;

__attribute__((used)) static qboolean FUNC_2( int VAR_6, vec3_t VAR_7, vec3_t VAR_8, trace_t *VAR_9 ){
 traceNode_t *VAR_10;
 int VAR_11;
 float VAR_12, VAR_13, VAR_14;
 vec3_t VAR_15;
 qboolean VAR_16;



 if ( VAR_6 < 0 ) {
  FUNC_1( VAR_7, VAR_9->hit );
  VAR_9->passSolid = VAR_4;
  return VAR_4;
 }


 VAR_10 = &VAR_5[ VAR_6 ];


 if ( VAR_10->type == VAR_1 ) {
  FUNC_1( VAR_7, VAR_9->hit );
  VAR_9->passSolid = VAR_4;
  return VAR_4;
 }


 if ( VAR_10->type < 0 ) {

  if ( VAR_10->numItems > 0 && VAR_9->numTestNodes < VAR_0 ) {
   VAR_9->testNodes[ VAR_9->numTestNodes++ ] = VAR_6;
  }
  return VAR_3;
 }


 if ( VAR_9->testAll && VAR_10->numItems == 0 ) {
  return VAR_3;
 }


 switch ( VAR_10->type )
 {
 case 130:
  VAR_12 = VAR_7[ 0 ] - VAR_10->plane[ 3 ];
  VAR_13 = VAR_8[ 0 ] - VAR_10->plane[ 3 ];
  break;

 case 129:
  VAR_12 = VAR_7[ 1 ] - VAR_10->plane[ 3 ];
  VAR_13 = VAR_8[ 1 ] - VAR_10->plane[ 3 ];
  break;

 case 128:
  VAR_12 = VAR_7[ 2 ] - VAR_10->plane[ 3 ];
  VAR_13 = VAR_8[ 2 ] - VAR_10->plane[ 3 ];
  break;

 default:
  VAR_12 = FUNC_0( VAR_7, VAR_10->plane ) - VAR_10->plane[ 3 ];
  VAR_13 = FUNC_0( VAR_8, VAR_10->plane ) - VAR_10->plane[ 3 ];
  break;
 }


 if ( VAR_12 >= -VAR_2 && VAR_13 >= -VAR_2 ) {
  return FUNC_2( VAR_10->children[ 0 ], VAR_7, VAR_8, VAR_9 );
 }


 if ( VAR_12 < VAR_2 && VAR_13 < VAR_2 ) {
  return FUNC_2( VAR_10->children[ 1 ], VAR_7, VAR_8, VAR_9 );
 }


 VAR_11 = VAR_12 < 0;


 VAR_14 = VAR_12 / ( VAR_12 - VAR_13 );
 VAR_15[ 0 ] = VAR_7[ 0 ] + ( VAR_8[ 0 ] - VAR_7[ 0 ] ) * VAR_14;
 VAR_15[ 1 ] = VAR_7[ 1 ] + ( VAR_8[ 1 ] - VAR_7[ 1 ] ) * VAR_14;
 VAR_15[ 2 ] = VAR_7[ 2 ] + ( VAR_8[ 2 ] - VAR_7[ 2 ] ) * VAR_14;







 VAR_16 = FUNC_2( VAR_10->children[ VAR_11 ], VAR_7, VAR_15, VAR_9 );
 if ( VAR_16 ) {
  return VAR_16;
 }


 return FUNC_2( VAR_10->children[ !VAR_11 ], VAR_15, VAR_8, VAR_9 );
}
