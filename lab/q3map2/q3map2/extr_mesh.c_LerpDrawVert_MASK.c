
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double* xyz; double* st; float** lightmap; int** color; float* normal; } ;
typedef TYPE_1__ bspDrawVert_t ;


 int VAR_0 ;
 int FUNC_0 (float*,float*) ;
 scalar_t__ FUNC_1 (float*,float*) ;

void FUNC_2( bspDrawVert_t *VAR_1, bspDrawVert_t *VAR_2, bspDrawVert_t *VAR_3 ){
 int VAR_4;


 VAR_3->xyz[ 0 ] = 0.5 * ( VAR_1->xyz[ 0 ] + VAR_2->xyz[ 0 ] );
 VAR_3->xyz[ 1 ] = 0.5 * ( VAR_1->xyz[ 1 ] + VAR_2->xyz[ 1 ] );
 VAR_3->xyz[ 2 ] = 0.5 * ( VAR_1->xyz[ 2 ] + VAR_2->xyz[ 2 ] );

 VAR_3->st[ 0 ] = 0.5 * ( VAR_1->st[ 0 ] + VAR_2->st[ 0 ] );
 VAR_3->st[ 1 ] = 0.5 * ( VAR_1->st[ 1 ] + VAR_2->st[ 1 ] );

 for ( VAR_4 = 0; VAR_4 < VAR_0; VAR_4++ )
 {
  VAR_3->lightmap[ VAR_4 ][ 0 ] = 0.5f * ( VAR_1->lightmap[ VAR_4 ][ 0 ] + VAR_2->lightmap[ VAR_4 ][ 0 ] );
  VAR_3->lightmap[ VAR_4 ][ 1 ] = 0.5f * ( VAR_1->lightmap[ VAR_4 ][ 1 ] + VAR_2->lightmap[ VAR_4 ][ 1 ] );
  VAR_3->color[ VAR_4 ][ 0 ] = ( VAR_1->color[ VAR_4 ][ 0 ] + VAR_2->color[ VAR_4 ][ 0 ] ) >> 1;
  VAR_3->color[ VAR_4 ][ 1 ] = ( VAR_1->color[ VAR_4 ][ 1 ] + VAR_2->color[ VAR_4 ][ 1 ] ) >> 1;
  VAR_3->color[ VAR_4 ][ 2 ] = ( VAR_1->color[ VAR_4 ][ 2 ] + VAR_2->color[ VAR_4 ][ 2 ] ) >> 1;
  VAR_3->color[ VAR_4 ][ 3 ] = ( VAR_1->color[ VAR_4 ][ 3 ] + VAR_2->color[ VAR_4 ][ 3 ] ) >> 1;
 }


 VAR_3->normal[ 0 ] = 0.5f * ( VAR_1->normal[ 0 ] + VAR_2->normal[ 0 ] );
 VAR_3->normal[ 1 ] = 0.5f * ( VAR_1->normal[ 1 ] + VAR_2->normal[ 1 ] );
 VAR_3->normal[ 2 ] = 0.5f * ( VAR_1->normal[ 2 ] + VAR_2->normal[ 2 ] );


 if ( FUNC_1( VAR_3->normal, VAR_3->normal ) == 0 ) {
  FUNC_0( VAR_1->normal, VAR_3->normal );
 }
}
