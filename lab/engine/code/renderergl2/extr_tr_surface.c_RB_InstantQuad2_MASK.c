
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vec4_t ;
typedef int vec2_t ;
struct TYPE_2__ {size_t numVertexes; int* indexes; scalar_t__ firstIndex; scalar_t__ numIndexes; int * texCoords; int * xyz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 TYPE_1__ VAR_2 ;

void FUNC_5(vec4_t VAR_3[4], vec2_t VAR_4[4])
{
 FUNC_0("--- RB_InstantQuad2 ---\n");

 VAR_2.numVertexes = 0;
 VAR_2.numIndexes = 0;
 VAR_2.firstIndex = 0;

 FUNC_4(VAR_3[0], VAR_2.xyz[VAR_2.numVertexes]);
 FUNC_3(VAR_4[0], VAR_2.texCoords[VAR_2.numVertexes]);
 VAR_2.numVertexes++;

 FUNC_4(VAR_3[1], VAR_2.xyz[VAR_2.numVertexes]);
 FUNC_3(VAR_4[1], VAR_2.texCoords[VAR_2.numVertexes]);
 VAR_2.numVertexes++;

 FUNC_4(VAR_3[2], VAR_2.xyz[VAR_2.numVertexes]);
 FUNC_3(VAR_4[2], VAR_2.texCoords[VAR_2.numVertexes]);
 VAR_2.numVertexes++;

 FUNC_4(VAR_3[3], VAR_2.xyz[VAR_2.numVertexes]);
 FUNC_3(VAR_4[3], VAR_2.texCoords[VAR_2.numVertexes]);
 VAR_2.numVertexes++;

 VAR_2.indexes[VAR_2.numIndexes++] = 0;
 VAR_2.indexes[VAR_2.numIndexes++] = 1;
 VAR_2.indexes[VAR_2.numIndexes++] = 2;
 VAR_2.indexes[VAR_2.numIndexes++] = 0;
 VAR_2.indexes[VAR_2.numIndexes++] = 2;
 VAR_2.indexes[VAR_2.numIndexes++] = 3;

 FUNC_1(VAR_0 | VAR_1);

 FUNC_2(VAR_2.numIndexes, VAR_2.firstIndex);

 VAR_2.numIndexes = 0;
 VAR_2.numVertexes = 0;
 VAR_2.firstIndex = 0;
}
