
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ address; int dir; } ;
struct ccp_dm_workarea {scalar_t__ length; TYPE_1__ dma; int * address; int dev; int dma_pool; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ccp_dm_workarea *VAR_1)
{
 if (VAR_1->length <= VAR_0) {
  if (VAR_1->address)
   FUNC_0(VAR_1->dma_pool, VAR_1->address,
          VAR_1->dma.address);
 } else {
  if (VAR_1->dma.address)
   FUNC_1(VAR_1->dev, VAR_1->dma.address, VAR_1->length,
      VAR_1->dma.dir);
  FUNC_2(VAR_1->address);
 }

 VAR_1->address = ((void*)0);
 VAR_1->dma.address = 0;
}
