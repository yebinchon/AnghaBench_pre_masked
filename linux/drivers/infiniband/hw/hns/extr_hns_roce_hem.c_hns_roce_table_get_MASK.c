
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hns_roce_hem_table {int num_obj; unsigned long table_chunk_size; unsigned long obj_size; int mutex; TYPE_1__** hem; scalar_t__ lowmem; int type; } ;
struct hns_roce_dev {struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*) ;
 TYPE_1__* FUNC_1 (struct hns_roce_dev*,int,int,int) ;
 scalar_t__ FUNC_2 (struct hns_roce_dev*,int ) ;
 int FUNC_3 (struct hns_roce_dev*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct hns_roce_dev*,struct hns_roce_hem_table*,unsigned long) ;
 int FUNC_5 (struct hns_roce_dev*,struct hns_roce_hem_table*,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct hns_roce_dev *VAR_6,
         struct hns_roce_hem_table *VAR_7, unsigned long VAR_8)
{
 struct device *VAR_9 = VAR_6->dev;
 int VAR_10 = 0;
 unsigned long VAR_11;

 if (FUNC_2(VAR_6, VAR_7->type))
  return FUNC_5(VAR_6, VAR_7, VAR_8);

 VAR_11 = (VAR_8 & (VAR_7->num_obj - 1)) / (VAR_7->table_chunk_size /
      VAR_7->obj_size);

 FUNC_6(&VAR_7->mutex);

 if (VAR_7->hem[VAR_11]) {
  ++VAR_7->hem[VAR_11]->refcount;
  goto out;
 }

 VAR_7->hem[VAR_11] = FUNC_1(VAR_6,
           VAR_7->table_chunk_size >> VAR_4,
           VAR_7->table_chunk_size,
           (VAR_7->lowmem ? VAR_3 :
     VAR_2) | VAR_5);
 if (!VAR_7->hem[VAR_11]) {
  VAR_10 = -VAR_1;
  goto out;
 }


 if (FUNC_4(VAR_6, VAR_7, VAR_8)) {
  FUNC_3(VAR_6, VAR_7->hem[VAR_11]);
  VAR_7->hem[VAR_11] = ((void*)0);
  VAR_10 = -VAR_0;
  FUNC_0(VAR_9, "set HEM base address to HW failed.\n");
  goto out;
 }

 ++VAR_7->hem[VAR_11]->refcount;
out:
 FUNC_7(&VAR_7->mutex);
 return VAR_10;
}
