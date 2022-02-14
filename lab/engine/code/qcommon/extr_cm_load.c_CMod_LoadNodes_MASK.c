
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int filelen; scalar_t__ fileofs; } ;
typedef TYPE_1__ lump_t ;
struct TYPE_8__ {int * children; int planeNum; } ;
typedef TYPE_2__ dnode_t ;
struct TYPE_9__ {int* children; scalar_t__ plane; } ;
typedef TYPE_3__ cNode_t ;
struct TYPE_10__ {int numNodes; scalar_t__ planes; TYPE_3__* nodes; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 TYPE_4__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

void FUNC_3( lump_t *VAR_4 ) {
 dnode_t *VAR_5;
 int VAR_6;
 cNode_t *VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_5 = (void *)(VAR_2 + VAR_4->fileofs);
 if (VAR_4->filelen % sizeof(*VAR_5))
  FUNC_0 (VAR_0, "MOD_LoadBmodel: funny lump size");
 VAR_10 = VAR_4->filelen / sizeof(*VAR_5);

 if (VAR_10 < 1)
  FUNC_0 (VAR_0, "Map has no nodes");
 VAR_1.nodes = FUNC_1( VAR_10 * sizeof( *VAR_1.nodes ), VAR_3 );
 VAR_1.numNodes = VAR_10;

 VAR_7 = VAR_1.nodes;

 for (VAR_8=0 ; VAR_8<VAR_10 ; VAR_8++, VAR_7++, VAR_5++)
 {
  VAR_7->plane = VAR_1.planes + FUNC_2( VAR_5->planeNum );
  for (VAR_9=0 ; VAR_9<2 ; VAR_9++)
  {
   VAR_6 = FUNC_2 (VAR_5->children[VAR_9]);
   VAR_7->children[VAR_9] = VAR_6;
  }
 }

}
