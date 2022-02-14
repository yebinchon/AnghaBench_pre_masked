
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g2d_data {int cmdlist_dma_attrs; scalar_t__ cmdlist_pool; scalar_t__ cmdlist_pool_virt; int drm_dev; int cmdlist_node; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct g2d_data *VAR_1)
{
 FUNC_1(VAR_1->cmdlist_node);

 if (VAR_1->cmdlist_pool_virt && VAR_1->cmdlist_pool) {
  FUNC_0(FUNC_2(VAR_1->drm_dev),
    VAR_0,
    VAR_1->cmdlist_pool_virt,
    VAR_1->cmdlist_pool, VAR_1->cmdlist_dma_attrs);
 }
}
