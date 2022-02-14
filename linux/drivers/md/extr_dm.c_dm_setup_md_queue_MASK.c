
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_limits {int dummy; } ;
struct mapped_device {int disk; int queue; } ;
struct dm_table {int dummy; } ;
typedef enum dm_queue_mode { ____Placeholder_dm_queue_mode } dm_queue_mode ;


 int FUNC_0 (char*) ;





 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct dm_table*,struct queue_limits*) ;
 int FUNC_5 (struct mapped_device*) ;
 int FUNC_6 (struct mapped_device*) ;
 int VAR_0 ;
 int FUNC_7 (struct mapped_device*,struct dm_table*) ;
 int FUNC_8 (struct dm_table*,int ,struct queue_limits*) ;

int FUNC_9(struct mapped_device *VAR_1, struct dm_table *VAR_2)
{
 int VAR_3;
 struct queue_limits VAR_4;
 enum dm_queue_mode VAR_5 = FUNC_5(VAR_1);

 switch (VAR_5) {
 case 128:
  VAR_3 = FUNC_7(VAR_1, VAR_2);
  if (VAR_3) {
   FUNC_0("Cannot initialize queue for request-based dm-mq mapped device");
   return VAR_3;
  }
  break;
 case 132:
 case 131:
 case 129:
  FUNC_6(VAR_1);
  FUNC_2(VAR_1->queue, VAR_0);
  break;
 case 130:
  FUNC_1(1);
  break;
 }

 VAR_3 = FUNC_4(VAR_2, &VAR_4);
 if (VAR_3) {
  FUNC_0("Cannot calculate initial queue limits");
  return VAR_3;
 }
 FUNC_8(VAR_2, VAR_1->queue, &VAR_4);
 FUNC_3(VAR_1->disk);

 return 0;
}
