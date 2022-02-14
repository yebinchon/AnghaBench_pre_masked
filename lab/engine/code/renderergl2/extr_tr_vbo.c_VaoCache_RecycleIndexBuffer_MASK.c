
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ numBatches; scalar_t__ numSurfaces; scalar_t__ indexOffset; TYPE_1__* vao; } ;
struct TYPE_3__ {int indexesSize; int indexesIBO; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int *,int ) ;
 TYPE_2__ VAR_2 ;

void FUNC_2(void)
{
 FUNC_0(VAR_1, VAR_2.vao->indexesIBO);
 FUNC_1(VAR_1, VAR_2.vao->indexesSize, ((void*)0), VAR_0);
 VAR_2.indexOffset = 0;
 VAR_2.numSurfaces = 0;
 VAR_2.numBatches = 0;
}
