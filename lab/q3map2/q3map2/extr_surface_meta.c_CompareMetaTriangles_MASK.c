
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_5__ {scalar_t__ fogNum; scalar_t__ planeNum; scalar_t__* plane; int* indexes; TYPE_1__* si; } ;
typedef TYPE_2__ metaTriangle_t ;
struct TYPE_6__ {scalar_t__* xyz; } ;
struct TYPE_4__ {scalar_t__ nonplanar; } ;


 int FUNC_0 (scalar_t__*,int,int,int) ;
 TYPE_3__* VAR_0 ;
 float VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_1( const void *VAR_3, const void *VAR_4 ){
 int VAR_5, VAR_6, VAR_7, VAR_8;
 vec3_t VAR_9, VAR_10;



 if ( ( (metaTriangle_t*) VAR_3 )->si < ( (metaTriangle_t*) VAR_4 )->si ) {
  return 1;
 }
 else if ( ( (metaTriangle_t*) VAR_3 )->si > ( (metaTriangle_t*) VAR_4 )->si ) {
  return -1;
 }


 else if ( ( (metaTriangle_t*) VAR_3 )->fogNum < ( (metaTriangle_t*) VAR_4 )->fogNum ) {
  return 1;
 }
 else if ( ( (metaTriangle_t*) VAR_3 )->fogNum > ( (metaTriangle_t*) VAR_4 )->fogNum ) {
  return -1;
 }
 FUNC_0( VAR_9, 999999, 999999, 999999 );
 FUNC_0( VAR_10, 999999, 999999, 999999 );
 for ( VAR_5 = 0; VAR_5 < 3; VAR_5++ )
 {
  VAR_7 = ( (metaTriangle_t*) VAR_3 )->indexes[ VAR_5 ];
  VAR_8 = ( (metaTriangle_t*) VAR_4 )->indexes[ VAR_5 ];
  for ( VAR_6 = 0; VAR_6 < 3; VAR_6++ )
  {
   if ( VAR_0[ VAR_7 ].xyz[ VAR_6 ] < VAR_9[ VAR_6 ] ) {
    VAR_9[ VAR_6 ] = VAR_0[ VAR_7 ].xyz[ VAR_6 ];
   }
   if ( VAR_0[ VAR_8 ].xyz[ VAR_6 ] < VAR_10[ VAR_6 ] ) {
    VAR_10[ VAR_6 ] = VAR_0[ VAR_8 ].xyz[ VAR_6 ];
   }
  }
 }


 for ( VAR_5 = 0; VAR_5 < 3; VAR_5++ )
 {
  if ( VAR_9[ VAR_5 ] < VAR_10[ VAR_5 ] ) {
   return 1;
  }
  else if ( VAR_9[ VAR_5 ] > VAR_10[ VAR_5 ] ) {
   return -1;
  }
 }


 return 0;
}
