
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct roce_hem_item {scalar_t__ dma_addr; void* addr; } ;
struct hns_roce_dev {int dummy; } ;
typedef scalar_t__ dma_addr_t ;



__attribute__((used)) static void FUNC_0(struct hns_roce_dev *VAR_0,
          struct roce_hem_item *VAR_1, void *VAR_2,
          u64 VAR_3)
{
 VAR_1->addr = VAR_2;
 VAR_1->dma_addr = (dma_addr_t)VAR_3;
}
