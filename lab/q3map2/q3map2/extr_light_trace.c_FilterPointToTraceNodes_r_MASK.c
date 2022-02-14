
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_3__ {scalar_t__ type; float* plane; int* children; } ;
typedef TYPE_1__ traceNode_t ;


 float FUNC_0 (int ,float*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_2( vec3_t VAR_2, int VAR_3 ){
 float VAR_4;
 traceNode_t *VAR_5;


 if ( VAR_3 < 0 || VAR_3 >= VAR_0 ) {
  return -1;
 }

 VAR_5 = &VAR_1[ VAR_3 ];

 if ( VAR_5->type >= 0 ) {
  VAR_4 = FUNC_0( VAR_2, VAR_5->plane ) - VAR_5->plane[ 3 ];
  if ( VAR_4 > -0.001f ) {
   FUNC_2( VAR_2, VAR_5->children[ 0 ] );
  }
  if ( VAR_4 < 0.001f ) {
   FUNC_2( VAR_2, VAR_5->children[ 1 ] );
  }
  return -1;
 }

 FUNC_1( "%d ", VAR_3 );

 return VAR_3;
}
