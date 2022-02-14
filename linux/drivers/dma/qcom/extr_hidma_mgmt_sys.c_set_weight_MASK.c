
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct hidma_mgmt_dev {unsigned int dma_channels; void** weight; } ;


 int VAR_0 ;
 int FUNC_0 (struct hidma_mgmt_dev*) ;

__attribute__((used)) static int FUNC_1(struct hidma_mgmt_dev *VAR_1, unsigned int VAR_2, u64 VAR_3)
{
 u64 VAR_4;
 int VAR_5;

 if (VAR_2 >= VAR_1->dma_channels)
  return -VAR_0;

 VAR_4 = VAR_1->weight[VAR_2];
 VAR_1->weight[VAR_2] = VAR_3;
 VAR_5 = FUNC_0(VAR_1);
 if (VAR_5)
  VAR_1->weight[VAR_2] = VAR_4;
 return VAR_5;
}
