
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_v2_cmq_ring {int desc_num; int desc; scalar_t__ desc_dma_addr; } ;
struct hns_roce_dev {int dev; } ;
struct hns_roce_cmq_desc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct hns_roce_dev *VAR_1,
       struct hns_roce_v2_cmq_ring *VAR_2)
{
 FUNC_0(VAR_1->dev, VAR_2->desc_dma_addr,
    VAR_2->desc_num * sizeof(struct hns_roce_cmq_desc),
    VAR_0);

 VAR_2->desc_dma_addr = 0;
 FUNC_1(VAR_2->desc);
}
