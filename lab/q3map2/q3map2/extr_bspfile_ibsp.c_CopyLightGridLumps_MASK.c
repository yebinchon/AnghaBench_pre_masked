
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
struct TYPE_8__ {int * latLong; int * styles; int * directed; int * ambient; } ;
typedef TYPE_2__ bspGridPoint_t ;


 TYPE_1__* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 TYPE_2__* VAR_4 ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int VAR_5 ;
 TYPE_2__* FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5( ibspHeader_t *VAR_6 ){
 int VAR_7, VAR_8;
 ibspGridPoint_t *VAR_9;
 bspGridPoint_t *VAR_10;



 VAR_5 = FUNC_1( (bspHeader_t*) VAR_6, VAR_2, sizeof( *VAR_9 ) );


 VAR_4 = FUNC_4( VAR_5 * sizeof( *VAR_4 ) );
 FUNC_3( VAR_4, 0, VAR_5 * sizeof( *VAR_4 ) );


 VAR_9 = FUNC_0( (bspHeader_t*) VAR_6, VAR_2 );
 VAR_10 = VAR_4;
 for ( VAR_7 = 0; VAR_7 < VAR_5; VAR_7++ )
 {
  for ( VAR_8 = 0; VAR_8 < VAR_3; VAR_8++ )
  {
   FUNC_2( VAR_9->ambient, VAR_10->ambient[ VAR_8 ] );
   FUNC_2( VAR_9->directed, VAR_10->directed[ VAR_8 ] );
   VAR_10->styles[ VAR_8 ] = VAR_0;
  }

  VAR_10->styles[ 0 ] = VAR_1;

  VAR_10->latLong[ 0 ] = VAR_9->latLong[ 0 ];
  VAR_10->latLong[ 1 ] = VAR_9->latLong[ 1 ];

  VAR_9++;
  VAR_10++;
 }
}
