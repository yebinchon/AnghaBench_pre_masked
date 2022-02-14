
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ibspHeader_t ;
struct TYPE_5__ {int shaderNum; int planeNum; } ;
typedef TYPE_1__ ibspBrushSide_t ;
typedef int bspHeader_t ;
struct TYPE_6__ {int surfaceNum; int shaderNum; int planeNum; } ;
typedef TYPE_2__ bspBrushSide_t ;


 TYPE_1__* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2( ibspHeader_t *VAR_3 ){
 int VAR_4;
 ibspBrushSide_t *VAR_5;
 bspBrushSide_t *VAR_6;



 VAR_2 = FUNC_1( (bspHeader_t*) VAR_3, VAR_0, sizeof( *VAR_5 ) );


 VAR_5 = FUNC_0( (bspHeader_t*) VAR_3, VAR_0 );
 VAR_6 = VAR_1;
 for ( VAR_4 = 0; VAR_4 < VAR_2; VAR_4++ )
 {
  VAR_6->planeNum = VAR_5->planeNum;
  VAR_6->shaderNum = VAR_5->shaderNum;
  VAR_6->surfaceNum = -1;
  VAR_5++;
  VAR_6++;
 }
}
