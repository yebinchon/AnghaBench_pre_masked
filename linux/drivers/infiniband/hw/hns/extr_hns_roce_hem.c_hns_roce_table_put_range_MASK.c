
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_hem_table {unsigned long table_chunk_size; unsigned long obj_size; int type; } ;
struct hns_roce_hem_mhop {unsigned long bt_chunk_size; } ;
struct hns_roce_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct hns_roce_dev*,struct hns_roce_hem_table*,int *,struct hns_roce_hem_mhop*) ;
 scalar_t__ FUNC_1 (struct hns_roce_dev*,int ) ;
 int FUNC_2 (struct hns_roce_dev*,struct hns_roce_hem_table*,unsigned long) ;

void FUNC_3(struct hns_roce_dev *VAR_0,
         struct hns_roce_hem_table *VAR_1,
         unsigned long VAR_2, unsigned long VAR_3)
{
 struct hns_roce_hem_mhop VAR_4;
 unsigned long VAR_5 = VAR_1->table_chunk_size / VAR_1->obj_size;
 unsigned long VAR_6;

 if (FUNC_1(VAR_0, VAR_1->type)) {
  if (FUNC_0(VAR_0, VAR_1, ((void*)0), &VAR_4))
   return;
  VAR_5 = VAR_4.bt_chunk_size / VAR_1->obj_size;
 }

 for (VAR_6 = VAR_2; VAR_6 <= VAR_3; VAR_6 += VAR_5)
  FUNC_2(VAR_0, VAR_1, VAR_6);
}
