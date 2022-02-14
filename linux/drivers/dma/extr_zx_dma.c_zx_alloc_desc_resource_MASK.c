
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zx_dma_dev {int pool; } ;
struct zx_dma_desc_sw {int desc_num; int desc_hw; int desc_hw_lli; } ;
struct zx_dma_chan {int vc; } ;
struct zx_desc_hw {int dummy; } ;
struct dma_chan {TYPE_1__* device; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int *,...) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct zx_dma_desc_sw*) ;
 struct zx_dma_desc_sw* FUNC_3 (int,int ) ;
 struct zx_dma_chan* FUNC_4 (struct dma_chan*) ;
 struct zx_dma_dev* FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static struct zx_dma_desc_sw *FUNC_6(int VAR_3,
           struct dma_chan *VAR_4)
{
 struct zx_dma_chan *VAR_5 = FUNC_4(VAR_4);
 struct zx_dma_desc_sw *VAR_6;
 struct zx_dma_dev *VAR_7 = FUNC_5(VAR_4->device);
 int VAR_8 = VAR_2 / sizeof(struct zx_desc_hw);

 if (VAR_3 > VAR_8) {
  FUNC_0(VAR_4->device->dev, "vch %p: sg num %d exceed max %d\n",
   &VAR_5->vc, VAR_3, VAR_8);
  return ((void*)0);
 }

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->desc_hw = FUNC_1(VAR_7->pool, VAR_1, &VAR_6->desc_hw_lli);
 if (!VAR_6->desc_hw) {
  FUNC_0(VAR_4->device->dev, "vch %p: dma alloc fail\n", &VAR_5->vc);
  FUNC_2(VAR_6);
  return ((void*)0);
 }
 VAR_6->desc_num = VAR_3;
 return VAR_6;
}
