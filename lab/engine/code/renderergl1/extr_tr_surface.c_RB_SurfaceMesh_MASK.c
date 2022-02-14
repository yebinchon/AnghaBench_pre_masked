
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int numVerts; int numTriangles; int ofsTriangles; int ofsSt; } ;
typedef TYPE_3__ md3Surface_t ;
typedef int byte ;
struct TYPE_12__ {TYPE_2__* currentEntity; } ;
struct TYPE_11__ {int numIndexes; int numVertexes; int* indexes; float*** texCoords; } ;
struct TYPE_8__ {scalar_t__ oldframe; scalar_t__ frame; float backlerp; } ;
struct TYPE_9__ {TYPE_1__ e; } ;


 int FUNC_0 (TYPE_3__*,float) ;
 int FUNC_1 (int,int) ;
 TYPE_5__ VAR_0 ;
 TYPE_4__ VAR_1 ;

__attribute__((used)) static void FUNC_2(md3Surface_t *VAR_2) {
 int VAR_3;
 float VAR_4;
 int *VAR_5;
 float *VAR_6;
 int VAR_7;
 int VAR_8, VAR_9;
 int VAR_10;

 if ( VAR_0.currentEntity->e.oldframe == VAR_0.currentEntity->e.frame ) {
  VAR_4 = 0;
 } else {
  VAR_4 = VAR_0.currentEntity->e.backlerp;
 }

 FUNC_1( VAR_2->numVerts, VAR_2->numTriangles*3 );

 FUNC_0 (VAR_2, VAR_4);

 VAR_5 = (int *) ((byte *)VAR_2 + VAR_2->ofsTriangles);
 VAR_7 = VAR_2->numTriangles * 3;
 VAR_8 = VAR_1.numIndexes;
 VAR_9 = VAR_1.numVertexes;
 for (VAR_3 = 0 ; VAR_3 < VAR_7 ; VAR_3++) {
  VAR_1.indexes[VAR_8 + VAR_3] = VAR_9 + VAR_5[VAR_3];
 }
 VAR_1.numIndexes += VAR_7;

 VAR_6 = (float *) ((byte *)VAR_2 + VAR_2->ofsSt);

 VAR_10 = VAR_2->numVerts;
 for ( VAR_3 = 0; VAR_3 < VAR_10; VAR_3++ ) {
  VAR_1.texCoords[VAR_9 + VAR_3][0][0] = VAR_6[VAR_3*2+0];
  VAR_1.texCoords[VAR_9 + VAR_3][0][1] = VAR_6[VAR_3*2+1];

 }

 VAR_1.numVertexes += VAR_2->numVerts;

}
