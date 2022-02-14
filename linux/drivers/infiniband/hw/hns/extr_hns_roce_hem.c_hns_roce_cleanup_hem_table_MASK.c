
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_roce_hem_table {unsigned long num_hem; unsigned long table_chunk_size; unsigned long obj_size; scalar_t__* hem; int type; } ;
struct hns_roce_dev {TYPE_1__* hw; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* clear_hem ) (struct hns_roce_dev*,struct hns_roce_hem_table*,unsigned long,int ) ;} ;


 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct hns_roce_dev*,int ) ;
 int FUNC_2 (struct hns_roce_dev*,struct hns_roce_hem_table*) ;
 int FUNC_3 (struct hns_roce_dev*,scalar_t__) ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__ FUNC_5 (struct hns_roce_dev*,struct hns_roce_hem_table*,unsigned long,int ) ;

void FUNC_6(struct hns_roce_dev *VAR_0,
    struct hns_roce_hem_table *VAR_1)
{
 struct device *VAR_2 = VAR_0->dev;
 unsigned long VAR_3;

 if (FUNC_1(VAR_0, VAR_1->type)) {
  FUNC_2(VAR_0, VAR_1);
  return;
 }

 for (VAR_3 = 0; VAR_3 < VAR_1->num_hem; ++VAR_3)
  if (VAR_1->hem[VAR_3]) {
   if (VAR_0->hw->clear_hem(VAR_0, VAR_1,
       VAR_3 * VAR_1->table_chunk_size / VAR_1->obj_size, 0))
    FUNC_0(VAR_2, "Clear HEM base address failed.\n");

   FUNC_3(VAR_0, VAR_1->hem[VAR_3]);
  }

 FUNC_4(VAR_1->hem);
}
