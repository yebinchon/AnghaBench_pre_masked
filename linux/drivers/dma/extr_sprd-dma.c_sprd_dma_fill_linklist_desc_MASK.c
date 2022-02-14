
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sprd_dma_chn_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ virt_addr; } ;
struct sprd_dma_chn {TYPE_1__ linklist; } ;
struct dma_slave_config {int dummy; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct dma_chan*,struct sprd_dma_chn_hw*,unsigned int,int,int ,int ,int ,int,unsigned long,struct dma_slave_config*) ;
 struct sprd_dma_chn* FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_2(struct dma_chan *VAR_1,
           unsigned int VAR_2, int VAR_3,
           dma_addr_t VAR_4, dma_addr_t VAR_5, u32 VAR_6,
           enum dma_transfer_direction VAR_7,
           unsigned long VAR_8,
           struct dma_slave_config *VAR_9)
{
 struct sprd_dma_chn *VAR_10 = FUNC_1(VAR_1);
 struct sprd_dma_chn_hw *VAR_11;

 if (!VAR_10->linklist.virt_addr)
  return -VAR_0;

 VAR_11 = (struct sprd_dma_chn_hw *)(VAR_10->linklist.virt_addr +
     VAR_3 * sizeof(*VAR_11));

 return FUNC_0(VAR_1, VAR_11, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7, VAR_8, VAR_9);
}
