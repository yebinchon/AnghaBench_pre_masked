
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roce_hem_item {int count; int dma_addr; int addr; } ;
struct hns_roce_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (struct roce_hem_item*) ;

__attribute__((used)) static void FUNC_2(struct hns_roce_dev *VAR_1,
          struct roce_hem_item *VAR_2, bool VAR_3)
{
 if (VAR_3)
  FUNC_0(VAR_1->dev, VAR_2->count * VAR_0,
      VAR_2->addr, VAR_2->dma_addr);
 FUNC_1(VAR_2);
}
