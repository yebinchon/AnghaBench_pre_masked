
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vec4_t ;
typedef int vec3_t ;
struct TYPE_3__ {void** edge; int kingpin; void* kingpinLength; void** plane; void* length; int origin; } ;
typedef TYPE_1__ edge_t ;


 int FUNC_0 (int ,void**,void**) ;
 void* FUNC_1 (int ,void**) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (void**,void**) ;
 int FUNC_4 (int ,int ,void**) ;
 scalar_t__ FUNC_5 (void*) ;

void FUNC_6( vec4_t VAR_0, vec3_t VAR_1, vec3_t VAR_2, edge_t *VAR_3 ){

 FUNC_2( VAR_1, VAR_3->origin );


 FUNC_4( VAR_2, VAR_1, VAR_3->edge );

 if ( FUNC_5( VAR_3->edge[ 0 ] ) > FUNC_5( VAR_3->edge[ 1 ] ) && FUNC_5( VAR_3->edge[ 0 ] ) > FUNC_5( VAR_3->edge[ 2 ] ) ) {
  VAR_3->kingpin = 0;
 }
 else if ( FUNC_5( VAR_3->edge[ 1 ] ) > FUNC_5( VAR_3->edge[ 0 ] ) && FUNC_5( VAR_3->edge[ 1 ] ) > FUNC_5( VAR_3->edge[ 2 ] ) ) {
  VAR_3->kingpin = 1;
 }
 else{
  VAR_3->kingpin = 2;
 }
 VAR_3->kingpinLength = VAR_3->edge[ VAR_3->kingpin ];

 FUNC_3( VAR_3->edge, VAR_3->edge );
 VAR_3->edge[ 3 ] = FUNC_1( VAR_1, VAR_3->edge );
 VAR_3->length = FUNC_1( VAR_2, VAR_3->edge ) - VAR_3->edge[ 3 ];


 FUNC_0( VAR_0, VAR_3->edge, VAR_3->plane );
 VAR_3->plane[ 3 ] = FUNC_1( VAR_1, VAR_3->plane );
}
