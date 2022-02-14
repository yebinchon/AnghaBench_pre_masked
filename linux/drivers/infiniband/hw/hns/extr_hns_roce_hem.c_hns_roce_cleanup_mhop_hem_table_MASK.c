
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hns_roce_hem_table {scalar_t__ type; int num_hem; int obj_size; scalar_t__* bt_l0_dma_addr; scalar_t__* bt_l0; scalar_t__* bt_l1_dma_addr; scalar_t__* bt_l1; scalar_t__* hem; } ;
struct hns_roce_hem_mhop {int buf_chunk_size; int bt_chunk_size; } ;
struct hns_roce_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct hns_roce_dev*,struct hns_roce_hem_table*,int *,struct hns_roce_hem_mhop*) ;
 int FUNC_1 (struct hns_roce_dev*,struct hns_roce_hem_table*,int,int ) ;
 int FUNC_2 (scalar_t__*) ;

__attribute__((used)) static void FUNC_3(struct hns_roce_dev *VAR_1,
         struct hns_roce_hem_table *VAR_2)
{
 struct hns_roce_hem_mhop VAR_3;
 u32 VAR_4;
 int VAR_5;
 u64 VAR_6;

 if (FUNC_0(VAR_1, VAR_2, ((void*)0), &VAR_3))
  return;
 VAR_4 = VAR_2->type < VAR_0 ? VAR_3.buf_chunk_size :
     VAR_3.bt_chunk_size;

 for (VAR_5 = 0; VAR_5 < VAR_2->num_hem; ++VAR_5) {
  VAR_6 = VAR_5 * VAR_4 / VAR_2->obj_size;
  if (VAR_2->hem[VAR_5])
   FUNC_1(VAR_1, VAR_2, VAR_6, 0);
 }

 FUNC_2(VAR_2->hem);
 VAR_2->hem = ((void*)0);
 FUNC_2(VAR_2->bt_l1);
 VAR_2->bt_l1 = ((void*)0);
 FUNC_2(VAR_2->bt_l1_dma_addr);
 VAR_2->bt_l1_dma_addr = ((void*)0);
 FUNC_2(VAR_2->bt_l0);
 VAR_2->bt_l0 = ((void*)0);
 FUNC_2(VAR_2->bt_l0_dma_addr);
 VAR_2->bt_l0_dma_addr = ((void*)0);
}
