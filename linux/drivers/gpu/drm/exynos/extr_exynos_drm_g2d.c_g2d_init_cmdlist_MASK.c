
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g2d_data {int cmdlist_dma_attrs; scalar_t__ cmdlist_pool; scalar_t__ cmdlist_pool_virt; int drm_dev; int free_cmdlist; struct device* dev; } ;
struct g2d_buf_info {int * reg_types; } ;
struct g2d_cmdlist_node {int list; struct g2d_buf_info buf_info; scalar_t__ dma_addr; scalar_t__ cmdlist; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__*,int ,int ) ;
 int FUNC_2 (int ,int ,scalar_t__,scalar_t__,int ) ;
 struct g2d_cmdlist_node* FUNC_3 (int,int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct g2d_data *VAR_8)
{
 struct device *VAR_9 = VAR_8->dev;
 struct g2d_cmdlist_node *VAR_10;
 int VAR_11;
 int VAR_12;
 struct g2d_buf_info *VAR_13;

 VAR_8->cmdlist_dma_attrs = VAR_0;

 VAR_8->cmdlist_pool_virt = FUNC_1(FUNC_5(VAR_8->drm_dev),
      VAR_3,
      &VAR_8->cmdlist_pool, VAR_5,
      VAR_8->cmdlist_dma_attrs);
 if (!VAR_8->cmdlist_pool_virt) {
  FUNC_0(VAR_9, "failed to allocate dma memory\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_3(VAR_2, sizeof(*VAR_10), VAR_5);
 if (!VAR_10) {
  VAR_12 = -VAR_1;
  goto err;
 }

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  unsigned int VAR_14;

  VAR_10[VAR_11].cmdlist =
   VAR_8->cmdlist_pool_virt + VAR_11 * VAR_4;
  VAR_10[VAR_11].dma_addr =
   VAR_8->cmdlist_pool + VAR_11 * VAR_4;

  VAR_13 = &VAR_10[VAR_11].buf_info;
  for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++)
   VAR_13->reg_types[VAR_14] = VAR_7;

  FUNC_4(&VAR_10[VAR_11].list, &VAR_8->free_cmdlist);
 }

 return 0;

err:
 FUNC_2(FUNC_5(VAR_8->drm_dev), VAR_3,
   VAR_8->cmdlist_pool_virt,
   VAR_8->cmdlist_pool, VAR_8->cmdlist_dma_attrs);
 return VAR_12;
}
