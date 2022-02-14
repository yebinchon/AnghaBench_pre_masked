
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ size; int import_attach; } ;
struct armada_gem_object {int mapped; TYPE_2__* sgt; int dev_addr; TYPE_1__ obj; } ;
struct TYPE_6__ {int nents; int sgl; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

int FUNC_6(struct armada_gem_object *VAR_2)
{
 int VAR_3;

 VAR_2->sgt = FUNC_3(VAR_2->obj.import_attach,
        VAR_0);
 if (FUNC_1(VAR_2->sgt)) {
  VAR_3 = FUNC_2(VAR_2->sgt);
  VAR_2->sgt = ((void*)0);
  FUNC_0("dma_buf_map_attachment() error: %d\n", VAR_3);
  return VAR_3;
 }
 if (VAR_2->sgt->nents > 1) {
  FUNC_0("dma_buf_map_attachment() returned an (unsupported) scattered list\n");
  return -VAR_1;
 }
 if (FUNC_5(VAR_2->sgt->sgl) < VAR_2->obj.size) {
  FUNC_0("dma_buf_map_attachment() returned a small buffer\n");
  return -VAR_1;
 }
 VAR_2->dev_addr = FUNC_4(VAR_2->sgt->sgl);
 VAR_2->mapped = 1;
 return 0;
}
