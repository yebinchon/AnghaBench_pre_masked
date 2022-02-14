
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ibspHeader_t ;
struct TYPE_8__ {int shaderNum; int planeNum; } ;
typedef TYPE_1__ ibspBrushSide_t ;
typedef int bspHeader_t ;
struct TYPE_9__ {int shaderNum; int planeNum; } ;
typedef TYPE_2__ bspBrushSide_t ;
typedef int FILE ;


 int FUNC_0 (int *,int *,int ,TYPE_1__*,int) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_2 ;
 TYPE_1__* FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4( FILE *VAR_3, ibspHeader_t *VAR_4 ){
 int VAR_5, VAR_6;
 bspBrushSide_t *VAR_7;
 ibspBrushSide_t *VAR_8, *VAR_9;



 VAR_6 = VAR_2 * sizeof( *VAR_8 );
 VAR_8 = FUNC_3( VAR_6 );
 FUNC_2( VAR_8, 0, VAR_6 );


 VAR_7 = VAR_1;
 VAR_9 = VAR_8;
 for ( VAR_5 = 0; VAR_5 < VAR_2; VAR_5++ )
 {
  VAR_9->planeNum = VAR_7->planeNum;
  VAR_9->shaderNum = VAR_7->shaderNum;
  VAR_7++;
  VAR_9++;
 }


 FUNC_0( VAR_3, (bspHeader_t*) VAR_4, VAR_0, VAR_8, VAR_6 );


 FUNC_1( VAR_8 );
}
