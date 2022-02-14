
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ibspHeader_t ;
struct TYPE_7__ {int * latLong; int directed; int ambient; } ;
typedef TYPE_1__ ibspGridPoint_t ;
typedef int bspHeader_t ;
struct TYPE_8__ {int * latLong; int * directed; int * ambient; } ;
typedef TYPE_2__ bspGridPoint_t ;
typedef int FILE ;


 int FUNC_0 (int *,int *,int ,TYPE_1__*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4( FILE *VAR_3, ibspHeader_t *VAR_4 ){
 int VAR_5;
 bspGridPoint_t *VAR_6;
 ibspGridPoint_t *VAR_7, *VAR_8;



 if ( VAR_1 == ((void*)0) ) {
  return;
 }


 VAR_7 = FUNC_3( VAR_2 * sizeof( *VAR_8 ) );


 VAR_6 = VAR_1;
 VAR_8 = VAR_7;
 for ( VAR_5 = 0; VAR_5 < VAR_2; VAR_5++ )
 {
  FUNC_1( VAR_6->ambient[ 0 ], VAR_8->ambient );
  FUNC_1( VAR_6->directed[ 0 ], VAR_8->directed );

  VAR_8->latLong[ 0 ] = VAR_6->latLong[ 0 ];
  VAR_8->latLong[ 1 ] = VAR_6->latLong[ 1 ];

  VAR_6++;
  VAR_8++;
 }


 FUNC_0( VAR_3, (bspHeader_t*) VAR_4, VAR_0, VAR_7, ( VAR_2 * sizeof( *VAR_8 ) ) );


 FUNC_2( VAR_7 );
}
