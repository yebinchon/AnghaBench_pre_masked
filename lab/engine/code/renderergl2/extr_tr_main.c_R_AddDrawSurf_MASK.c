
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int surfaceType_t ;
struct TYPE_8__ {int sortedIndex; } ;
typedef TYPE_3__ shader_t ;
struct TYPE_7__ {int numDrawSurfs; TYPE_1__* drawSurfs; } ;
struct TYPE_9__ {int shiftedEntityNum; TYPE_2__ refdef; } ;
struct TYPE_6__ {int sort; int cubemapIndex; int * surface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;

void FUNC_0( surfaceType_t *VAR_5, shader_t *VAR_6,
       int VAR_7, int VAR_8, int VAR_9, int VAR_10 ) {
 int VAR_11;



 VAR_11 = VAR_4.refdef.numDrawSurfs & VAR_0;


 VAR_4.refdef.drawSurfs[VAR_11].sort = (VAR_6->sortedIndex << VAR_3)
  | VAR_4.shiftedEntityNum | ( VAR_7 << VAR_1 )
  | ((int)VAR_9 << VAR_2) | (int)VAR_8;
 VAR_4.refdef.drawSurfs[VAR_11].cubemapIndex = VAR_10;
 VAR_4.refdef.drawSurfs[VAR_11].surface = VAR_5;
 VAR_4.refdef.numDrawSurfs++;
}
