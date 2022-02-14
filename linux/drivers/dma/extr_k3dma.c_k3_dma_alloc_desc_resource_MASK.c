
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct k3_dma_dev {int pool; } ;
struct k3_dma_desc_sw {int desc_num; int desc_hw; int desc_hw_lli; } ;
struct k3_dma_chan {int vc; } ;
struct k3_desc_hw {int dummy; } ;
struct dma_chan {TYPE_1__* device; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int *,...) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct k3_dma_desc_sw*) ;
 struct k3_dma_desc_sw* FUNC_3 (int,int ) ;
 struct k3_dma_chan* FUNC_4 (struct dma_chan*) ;
 struct k3_dma_dev* FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static struct k3_dma_desc_sw *FUNC_6(int VAR_2,
       struct dma_chan *VAR_3)
{
 struct k3_dma_chan *VAR_4 = FUNC_4(VAR_3);
 struct k3_dma_desc_sw *VAR_5;
 struct k3_dma_dev *VAR_6 = FUNC_5(VAR_3->device);
 int VAR_7 = VAR_1 / sizeof(struct k3_desc_hw);

 if (VAR_2 > VAR_7) {
  FUNC_0(VAR_3->device->dev, "vch %p: sg num %d exceed max %d\n",
   &VAR_4->vc, VAR_2, VAR_7);
  return ((void*)0);
 }

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->desc_hw = FUNC_1(VAR_6->pool, VAR_0, &VAR_5->desc_hw_lli);
 if (!VAR_5->desc_hw) {
  FUNC_0(VAR_3->device->dev, "vch %p: dma alloc fail\n", &VAR_4->vc);
  FUNC_2(VAR_5);
  return ((void*)0);
 }
 VAR_5->desc_num = VAR_2;
 return VAR_5;
}
