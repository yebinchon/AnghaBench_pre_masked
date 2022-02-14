
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ibspHeader_t ;
struct TYPE_8__ {int * color; int normal; int * lightmap; int * st; int xyz; } ;
typedef TYPE_1__ ibspDrawVert_t ;
typedef int bspHeader_t ;
struct TYPE_9__ {int ** color; int normal; int ** lightmap; int * st; int xyz; } ;
typedef TYPE_2__ bspDrawVert_t ;
typedef int FILE ;


 int FUNC_0 (int *,int *,int ,TYPE_1__*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int VAR_2 ;
 TYPE_1__* FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5( FILE *VAR_3, ibspHeader_t *VAR_4 ){
 int VAR_5, VAR_6;
 bspDrawVert_t *VAR_7;
 ibspDrawVert_t *VAR_8, *VAR_9;



 VAR_6 = VAR_2 * sizeof( *VAR_8 );
 VAR_8 = FUNC_4( VAR_6 );
 FUNC_3( VAR_8, 0, VAR_6 );


 VAR_7 = VAR_1;
 VAR_9 = VAR_8;
 for ( VAR_5 = 0; VAR_5 < VAR_2; VAR_5++ )
 {
  FUNC_1( VAR_7->xyz, VAR_9->xyz );
  VAR_9->st[ 0 ] = VAR_7->st[ 0 ];
  VAR_9->st[ 1 ] = VAR_7->st[ 1 ];

  VAR_9->lightmap[ 0 ] = VAR_7->lightmap[ 0 ][ 0 ];
  VAR_9->lightmap[ 1 ] = VAR_7->lightmap[ 0 ][ 1 ];

  FUNC_1( VAR_7->normal, VAR_9->normal );

  VAR_9->color[ 0 ] = VAR_7->color[ 0 ][ 0 ];
  VAR_9->color[ 1 ] = VAR_7->color[ 0 ][ 1 ];
  VAR_9->color[ 2 ] = VAR_7->color[ 0 ][ 2 ];
  VAR_9->color[ 3 ] = VAR_7->color[ 0 ][ 3 ];

  VAR_7++;
  VAR_9++;
 }


 FUNC_0( VAR_3, (bspHeader_t*) VAR_4, VAR_0, VAR_8, VAR_6 );


 FUNC_2( VAR_8 );
}
