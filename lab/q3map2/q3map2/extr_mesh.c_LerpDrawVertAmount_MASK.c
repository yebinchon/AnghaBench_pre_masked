
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float* xyz; float* st; float** lightmap; float** color; float* normal; } ;
typedef TYPE_1__ bspDrawVert_t ;


 int VAR_0 ;
 int FUNC_0 (float*,float*) ;
 scalar_t__ FUNC_1 (float*,float*) ;

void FUNC_2( bspDrawVert_t *VAR_1, bspDrawVert_t *VAR_2, float VAR_3, bspDrawVert_t *VAR_4 ){
 int VAR_5;


 VAR_4->xyz[ 0 ] = VAR_1->xyz[ 0 ] + VAR_3 * ( VAR_2->xyz[ 0 ] - VAR_1->xyz[ 0 ] );
 VAR_4->xyz[ 1 ] = VAR_1->xyz[ 1 ] + VAR_3 * ( VAR_2->xyz[ 1 ] - VAR_1->xyz[ 1 ] );
 VAR_4->xyz[ 2 ] = VAR_1->xyz[ 2 ] + VAR_3 * ( VAR_2->xyz[ 2 ] - VAR_1->xyz[ 2 ] );

 VAR_4->st[ 0 ] = VAR_1->st[ 0 ] + VAR_3 * ( VAR_2->st[ 0 ] - VAR_1->st[ 0 ] );
 VAR_4->st[ 1 ] = VAR_1->st[ 1 ] + VAR_3 * ( VAR_2->st[ 1 ] - VAR_1->st[ 1 ] );

 for ( VAR_5 = 0; VAR_5 < VAR_0; VAR_5++ )
 {
  VAR_4->lightmap[ VAR_5 ][ 0 ] = VAR_1->lightmap[ VAR_5 ][ 0 ] + VAR_3 * ( VAR_2->lightmap[ VAR_5 ][ 0 ] - VAR_1->lightmap[ VAR_5 ][ 0 ] );
  VAR_4->lightmap[ VAR_5 ][ 1 ] = VAR_1->lightmap[ VAR_5 ][ 1 ] + VAR_3 * ( VAR_2->lightmap[ VAR_5 ][ 1 ] - VAR_1->lightmap[ VAR_5 ][ 1 ] );
  VAR_4->color[ VAR_5 ][ 0 ] = VAR_1->color[ VAR_5 ][ 0 ] + VAR_3 * ( VAR_2->color[ VAR_5 ][ 0 ] - VAR_1->color[ VAR_5 ][ 0 ] );
  VAR_4->color[ VAR_5 ][ 1 ] = VAR_1->color[ VAR_5 ][ 1 ] + VAR_3 * ( VAR_2->color[ VAR_5 ][ 1 ] - VAR_1->color[ VAR_5 ][ 1 ] );
  VAR_4->color[ VAR_5 ][ 2 ] = VAR_1->color[ VAR_5 ][ 2 ] + VAR_3 * ( VAR_2->color[ VAR_5 ][ 2 ] - VAR_1->color[ VAR_5 ][ 2 ] );
  VAR_4->color[ VAR_5 ][ 3 ] = VAR_1->color[ VAR_5 ][ 3 ] + VAR_3 * ( VAR_2->color[ VAR_5 ][ 3 ] - VAR_1->color[ VAR_5 ][ 3 ] );
 }

 VAR_4->normal[ 0 ] = VAR_1->normal[ 0 ] + VAR_3 * ( VAR_2->normal[ 0 ] - VAR_1->normal[ 0 ] );
 VAR_4->normal[ 1 ] = VAR_1->normal[ 1 ] + VAR_3 * ( VAR_2->normal[ 1 ] - VAR_1->normal[ 1 ] );
 VAR_4->normal[ 2 ] = VAR_1->normal[ 2 ] + VAR_3 * ( VAR_2->normal[ 2 ] - VAR_1->normal[ 2 ] );


 if ( FUNC_1( VAR_4->normal, VAR_4->normal ) == 0 ) {
  FUNC_0( VAR_1->normal, VAR_4->normal );
 }
}
