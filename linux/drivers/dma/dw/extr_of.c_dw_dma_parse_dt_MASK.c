
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct dw_dma_platform_data {int nr_masters; int nr_channels; unsigned char chan_allocation_order; int chan_priority; int block_size; int* data_width; int* multi_block; int protctl; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 struct dw_dma_platform_data* FUNC_2 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_3 (struct device_node*,char*,int*) ;
 int FUNC_4 (struct device_node*,char*,int*,int) ;

struct dw_dma_platform_data *FUNC_5(struct platform_device *VAR_4)
{
 struct device_node *VAR_5 = VAR_4->dev.of_node;
 struct dw_dma_platform_data *VAR_6;
 u32 VAR_7, VAR_8[VAR_2], VAR_9[VAR_1];
 u32 VAR_10;
 u32 VAR_11;

 if (!VAR_5) {
  FUNC_1(&VAR_4->dev, "Missing DT data\n");
  return ((void*)0);
 }

 if (FUNC_3(VAR_5, "dma-masters", &VAR_10))
  return ((void*)0);
 if (VAR_10 < 1 || VAR_10 > VAR_2)
  return ((void*)0);

 if (FUNC_3(VAR_5, "dma-channels", &VAR_11))
  return ((void*)0);
 if (VAR_11 > VAR_1)
  return ((void*)0);

 VAR_6 = FUNC_2(&VAR_4->dev, sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->nr_masters = VAR_10;
 VAR_6->nr_channels = VAR_11;

 if (!FUNC_3(VAR_5, "chan_allocation_order", &VAR_7))
  VAR_6->chan_allocation_order = (unsigned char)VAR_7;

 if (!FUNC_3(VAR_5, "chan_priority", &VAR_7))
  VAR_6->chan_priority = VAR_7;

 if (!FUNC_3(VAR_5, "block_size", &VAR_7))
  VAR_6->block_size = VAR_7;

 if (!FUNC_4(VAR_5, "data-width", VAR_8, VAR_10)) {
  for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++)
   VAR_6->data_width[VAR_7] = VAR_8[VAR_7];
 } else if (!FUNC_4(VAR_5, "data_width", VAR_8, VAR_10)) {
  for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++)
   VAR_6->data_width[VAR_7] = FUNC_0(VAR_8[VAR_7] & 0x07);
 }

 if (!FUNC_4(VAR_5, "multi-block", VAR_9, VAR_11)) {
  for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7++)
   VAR_6->multi_block[VAR_7] = VAR_9[VAR_7];
 } else {
  for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7++)
   VAR_6->multi_block[VAR_7] = 1;
 }

 if (!FUNC_3(VAR_5, "snps,dma-protection-control", &VAR_7)) {
  if (VAR_7 > VAR_0)
   return ((void*)0);
  VAR_6->protctl = VAR_7;
 }

 return VAR_6;
}
