
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ibspHeader_t ;
struct TYPE_5__ {int * color; int normal; int * lightmap; int * st; int xyz; } ;
typedef TYPE_1__ ibspDrawVert_t ;
typedef int bspHeader_t ;
struct TYPE_6__ {int ** color; int normal; int ** lightmap; int * st; int xyz; } ;
typedef TYPE_2__ bspDrawVert_t ;


 TYPE_1__* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4( ibspHeader_t *VAR_3 ){
 int VAR_4;
 ibspDrawVert_t *VAR_5;
 bspDrawVert_t *VAR_6;



 VAR_2 = FUNC_1( (bspHeader_t*) VAR_3, VAR_0, sizeof( *VAR_5 ) );
 FUNC_2( VAR_2 );


 VAR_5 = FUNC_0( (bspHeader_t*) VAR_3, VAR_0 );
 VAR_6 = VAR_1;
 for ( VAR_4 = 0; VAR_4 < VAR_2; VAR_4++ )
 {
  FUNC_3( VAR_5->xyz, VAR_6->xyz );
  VAR_6->st[ 0 ] = VAR_5->st[ 0 ];
  VAR_6->st[ 1 ] = VAR_5->st[ 1 ];

  VAR_6->lightmap[ 0 ][ 0 ] = VAR_5->lightmap[ 0 ];
  VAR_6->lightmap[ 0 ][ 1 ] = VAR_5->lightmap[ 1 ];

  FUNC_3( VAR_5->normal, VAR_6->normal );

  VAR_6->color[ 0 ][ 0 ] = VAR_5->color[ 0 ];
  VAR_6->color[ 0 ][ 1 ] = VAR_5->color[ 1 ];
  VAR_6->color[ 0 ][ 2 ] = VAR_5->color[ 2 ];
  VAR_6->color[ 0 ][ 3 ] = VAR_5->color[ 3 ];

  VAR_5++;
  VAR_6++;
 }
}
