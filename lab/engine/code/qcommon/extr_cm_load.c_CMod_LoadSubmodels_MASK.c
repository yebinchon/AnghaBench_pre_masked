
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int filelen; scalar_t__ fileofs; } ;
typedef TYPE_2__ lump_t ;
struct TYPE_9__ {int firstSurface; int numSurfaces; int firstBrush; int numBrushes; int * maxs; int * mins; } ;
typedef TYPE_3__ dmodel_t ;
struct TYPE_7__ {int numLeafBrushes; int* firstLeafBrush; int numLeafSurfaces; int* firstLeafSurface; } ;
struct TYPE_10__ {TYPE_1__ leaf; void** maxs; void** mins; } ;
typedef TYPE_4__ cmodel_t ;
struct TYPE_11__ {int numSubModels; int leafbrushes; int leafsurfaces; TYPE_4__* cmodels; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 void* FUNC_1 (int,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

void FUNC_4( lump_t *VAR_5 ) {
 dmodel_t *VAR_6;
 cmodel_t *VAR_7;
 int VAR_8, VAR_9, VAR_10;
 int *VAR_11;

 VAR_6 = (void *)(VAR_3 + VAR_5->fileofs);
 if (VAR_5->filelen % sizeof(*VAR_6))
  FUNC_0 (VAR_0, "CMod_LoadSubmodels: funny lump size");
 VAR_10 = VAR_5->filelen / sizeof(*VAR_6);

 if (VAR_10 < 1)
  FUNC_0 (VAR_0, "Map with no models");
 VAR_2.cmodels = FUNC_1( VAR_10 * sizeof( *VAR_2.cmodels ), VAR_4 );
 VAR_2.numSubModels = VAR_10;

 if ( VAR_10 > VAR_1 ) {
  FUNC_0( VAR_0, "MAX_SUBMODELS exceeded" );
 }

 for ( VAR_8=0 ; VAR_8<VAR_10 ; VAR_8++, VAR_6++)
 {
  VAR_7 = &VAR_2.cmodels[VAR_8];

  for (VAR_9=0 ; VAR_9<3 ; VAR_9++)
  {
   VAR_7->mins[VAR_9] = FUNC_2 (VAR_6->mins[VAR_9]) - 1;
   VAR_7->maxs[VAR_9] = FUNC_2 (VAR_6->maxs[VAR_9]) + 1;
  }

  if ( VAR_8 == 0 ) {
   continue;
  }


  VAR_7->leaf.numLeafBrushes = FUNC_3( VAR_6->numBrushes );
  VAR_11 = FUNC_1( VAR_7->leaf.numLeafBrushes * 4, VAR_4 );
  VAR_7->leaf.firstLeafBrush = VAR_11 - VAR_2.leafbrushes;
  for ( VAR_9 = 0 ; VAR_9 < VAR_7->leaf.numLeafBrushes ; VAR_9++ ) {
   VAR_11[VAR_9] = FUNC_3( VAR_6->firstBrush ) + VAR_9;
  }

  VAR_7->leaf.numLeafSurfaces = FUNC_3( VAR_6->numSurfaces );
  VAR_11 = FUNC_1( VAR_7->leaf.numLeafSurfaces * 4, VAR_4 );
  VAR_7->leaf.firstLeafSurface = VAR_11 - VAR_2.leafsurfaces;
  for ( VAR_9 = 0 ; VAR_9 < VAR_7->leaf.numLeafSurfaces ; VAR_9++ ) {
   VAR_11[VAR_9] = FUNC_3( VAR_6->firstSurface ) + VAR_9;
  }
 }
}
