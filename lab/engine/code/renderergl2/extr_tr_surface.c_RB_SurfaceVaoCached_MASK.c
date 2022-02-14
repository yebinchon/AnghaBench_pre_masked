
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int srfVert_t ;
typedef void* qboolean ;
typedef int glIndex_t ;
struct TYPE_5__ {int isPortal; int isSky; } ;
struct TYPE_4__ {int dlightBits; int pshadowBits; int numIndexes; void* useCacheVao; void* useInternalVao; scalar_t__ numVertexes; int cubemapIndex; int fogNum; TYPE_2__* shader; } ;


 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int,int *,int) ;
 int FUNC_4 () ;
 int FUNC_5 (void**,void**,void**,int,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 void* VAR_0 ;
 void* VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static qboolean FUNC_9(int VAR_3, srfVert_t *VAR_4, int VAR_5, glIndex_t *VAR_6, int VAR_7, int VAR_8)
{
 qboolean VAR_9 = VAR_0;
 qboolean VAR_10 = VAR_0;
 qboolean VAR_11 = VAR_0;

 if (!(!FUNC_2(VAR_2.shader) && !VAR_2.shader->isSky && !VAR_2.shader->isPortal))
  return VAR_0;

 if (!VAR_5 || !VAR_3)
  return VAR_0;

 FUNC_4();

 VAR_2.dlightBits |= VAR_7;
 VAR_2.pshadowBits |= VAR_8;

 FUNC_5(&VAR_11, &VAR_9, &VAR_10, VAR_3, VAR_5);

 if (VAR_11)
 {
  FUNC_1();
  FUNC_0(VAR_2.shader, VAR_2.fogNum, VAR_2.cubemapIndex);
 }

 if (VAR_9)
  FUNC_8();

 if (VAR_10)
  FUNC_7();

 if (!VAR_2.numVertexes)
  FUNC_6();

 FUNC_3(VAR_4, VAR_3, VAR_6, VAR_5);

 VAR_2.numIndexes += VAR_5;
 VAR_2.numVertexes += VAR_3;
 VAR_2.useInternalVao = VAR_0;
 VAR_2.useCacheVao = VAR_1;

 return VAR_1;
}
