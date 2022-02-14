
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int numVerts; int numIndexes; TYPE_4__* st; scalar_t__* indexes; } ;
typedef TYPE_3__ mdvSurface_t ;
struct TYPE_12__ {int * st; } ;
typedef TYPE_4__ mdvSt_t ;
struct TYPE_14__ {TYPE_2__* currentEntity; } ;
struct TYPE_13__ {int numIndexes; int numVertexes; int ** texCoords; scalar_t__* indexes; int vao; } ;
struct TYPE_9__ {scalar_t__ oldframe; scalar_t__ frame; float backlerp; } ;
struct TYPE_10__ {TYPE_1__ e; } ;


 int FUNC_0 (TYPE_3__*,float) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 TYPE_6__ VAR_0 ;
 TYPE_5__ VAR_1 ;

__attribute__((used)) static void FUNC_3(mdvSurface_t *VAR_2) {
 int VAR_3;
 float VAR_4;
 mdvSt_t *VAR_5;
 int VAR_6, VAR_7;
 int VAR_8;

 if ( VAR_0.currentEntity->e.oldframe == VAR_0.currentEntity->e.frame ) {
  VAR_4 = 0;
 } else {
  VAR_4 = VAR_0.currentEntity->e.backlerp;
 }

 FUNC_2(VAR_1.vao);

 FUNC_1( VAR_2->numVerts, VAR_2->numIndexes );

 FUNC_0 (VAR_2, VAR_4);

 VAR_6 = VAR_1.numIndexes;
 VAR_7 = VAR_1.numVertexes;
 for (VAR_3 = 0 ; VAR_3 < VAR_2->numIndexes ; VAR_3++) {
  VAR_1.indexes[VAR_6 + VAR_3] = VAR_7 + VAR_2->indexes[VAR_3];
 }
 VAR_1.numIndexes += VAR_2->numIndexes;

 VAR_5 = VAR_2->st;

 VAR_8 = VAR_2->numVerts;
 for ( VAR_3 = 0; VAR_3 < VAR_8; VAR_3++ ) {
  VAR_1.texCoords[VAR_7 + VAR_3][0] = VAR_5[VAR_3].st[0];
  VAR_1.texCoords[VAR_7 + VAR_3][1] = VAR_5[VAR_3].st[1];

 }

 VAR_1.numVertexes += VAR_2->numVerts;

}
