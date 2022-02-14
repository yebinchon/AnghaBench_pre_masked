
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int fogIndex; int hShader; } ;
typedef TYPE_2__ srfPoly_t ;
typedef int shader_t ;
struct TYPE_4__ {int rdflags; int numPolys; TYPE_2__* polys; } ;
struct TYPE_6__ {int currentEntityNum; int shiftedEntityNum; TYPE_1__ refdef; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int *,int,int ,int ,int ) ;
 int * FUNC_1 (int ) ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;

void FUNC_2( void ) {
 int VAR_5;
 shader_t *VAR_6;
 srfPoly_t *VAR_7;
 int VAR_8;

 VAR_4.currentEntityNum = VAR_2;
 VAR_4.shiftedEntityNum = VAR_4.currentEntityNum << VAR_0;
 VAR_8 = -((VAR_4.refdef.rdflags & VAR_1) == 0);

 for ( VAR_5 = 0, VAR_7 = VAR_4.refdef.polys; VAR_5 < VAR_4.refdef.numPolys ; VAR_5++, VAR_7++ ) {
  VAR_6 = FUNC_1( VAR_7->hShader );
  FUNC_0( ( void * )VAR_7, VAR_6, VAR_7->fogIndex & VAR_8, VAR_3, VAR_3, 0 );
 }
}
