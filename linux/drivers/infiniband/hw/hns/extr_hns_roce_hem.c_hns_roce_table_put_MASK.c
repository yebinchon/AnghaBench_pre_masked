
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns_roce_hem_table {int num_obj; unsigned long table_chunk_size; unsigned long obj_size; int mutex; TYPE_2__** hem; int type; } ;
struct hns_roce_dev {TYPE_1__* hw; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {scalar_t__ refcount; } ;
struct TYPE_3__ {scalar_t__ (* clear_hem ) (struct hns_roce_dev*,struct hns_roce_hem_table*,unsigned long,int ) ;} ;


 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct hns_roce_dev*,int ) ;
 int FUNC_2 (struct hns_roce_dev*,TYPE_2__*) ;
 int FUNC_3 (struct hns_roce_dev*,struct hns_roce_hem_table*,unsigned long,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct hns_roce_dev*,struct hns_roce_hem_table*,unsigned long,int ) ;

void FUNC_7(struct hns_roce_dev *VAR_0,
   struct hns_roce_hem_table *VAR_1, unsigned long VAR_2)
{
 struct device *VAR_3 = VAR_0->dev;
 unsigned long VAR_4;

 if (FUNC_1(VAR_0, VAR_1->type)) {
  FUNC_3(VAR_0, VAR_1, VAR_2, 1);
  return;
 }

 VAR_4 = (VAR_2 & (VAR_1->num_obj - 1)) /
     (VAR_1->table_chunk_size / VAR_1->obj_size);

 FUNC_4(&VAR_1->mutex);

 if (--VAR_1->hem[VAR_4]->refcount == 0) {

  if (VAR_0->hw->clear_hem(VAR_0, VAR_1, VAR_2, 0))
   FUNC_0(VAR_3, "Clear HEM base address failed.\n");

  FUNC_2(VAR_0, VAR_1->hem[VAR_4]);
  VAR_1->hem[VAR_4] = ((void*)0);
 }

 FUNC_5(&VAR_1->mutex);
}
