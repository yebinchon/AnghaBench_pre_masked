
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_v2_cmq_ring {int desc_num; int * desc; scalar_t__ desc_dma_addr; } ;
struct hns_roce_dev {int dev; } ;
struct hns_roce_cmq_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *,int,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct hns_roce_dev *VAR_3,
       struct hns_roce_v2_cmq_ring *VAR_4)
{
 int VAR_5 = VAR_4->desc_num * sizeof(struct hns_roce_cmq_desc);

 VAR_4->desc = FUNC_3(VAR_5, VAR_2);
 if (!VAR_4->desc)
  return -VAR_1;

 VAR_4->desc_dma_addr = FUNC_0(VAR_3->dev, VAR_4->desc, VAR_5,
          VAR_0);
 if (FUNC_1(VAR_3->dev, VAR_4->desc_dma_addr)) {
  VAR_4->desc_dma_addr = 0;
  FUNC_2(VAR_4->desc);
  VAR_4->desc = ((void*)0);
  return -VAR_1;
 }

 return 0;
}
