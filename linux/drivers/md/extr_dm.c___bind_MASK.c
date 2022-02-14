
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct queue_limits {int dummy; } ;
struct mapped_device {scalar_t__ type; int immutable_target_type; int map; int suspend_lock; int immutable_target; int geometry; struct request_queue* queue; } ;
struct dm_table {int dummy; } ;
typedef scalar_t__ sector_t ;


 scalar_t__ VAR_0 ;
 struct dm_table* FUNC_0 (int) ;
 int FUNC_1 (struct mapped_device*,struct dm_table*) ;
 int FUNC_2 (struct mapped_device*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct mapped_device*) ;
 int FUNC_4 (struct request_queue*) ;
 int FUNC_5 (struct mapped_device*) ;
 int FUNC_6 (struct dm_table*,int ,struct mapped_device*) ;
 int FUNC_7 (struct dm_table*) ;
 int FUNC_8 (struct dm_table*) ;
 scalar_t__ FUNC_9 (struct dm_table*) ;
 int FUNC_10 (struct dm_table*) ;
 int FUNC_11 (struct dm_table*,struct request_queue*,struct queue_limits*) ;
 int VAR_1 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ,int) ;
 int FUNC_15 (int ,void*) ;
 struct dm_table* FUNC_16 (int ,int ) ;

__attribute__((used)) static struct dm_table *FUNC_17(struct mapped_device *VAR_2, struct dm_table *VAR_3,
          struct queue_limits *VAR_4)
{
 struct dm_table *VAR_5;
 struct request_queue *VAR_6 = VAR_2->queue;
 bool VAR_7 = FUNC_10(VAR_3);
 sector_t VAR_8;
 int VAR_9;

 FUNC_12(&VAR_2->suspend_lock);

 VAR_8 = FUNC_9(VAR_3);




 if (VAR_8 != FUNC_3(VAR_2))
  FUNC_14(&VAR_2->geometry, 0, sizeof(VAR_2->geometry));

 FUNC_2(VAR_2, VAR_8);

 FUNC_6(VAR_3, VAR_1, VAR_2);
 if (VAR_7)
  FUNC_4(VAR_6);

 if (VAR_7 || VAR_2->type == VAR_0) {






  VAR_2->immutable_target = FUNC_7(VAR_3);
 }

 VAR_9 = FUNC_1(VAR_2, VAR_3);
 if (VAR_9) {
  VAR_5 = FUNC_0(VAR_9);
  goto out;
 }

 VAR_5 = FUNC_16(VAR_2->map, FUNC_13(&VAR_2->suspend_lock));
 FUNC_15(VAR_2->map, (void *)VAR_3);
 VAR_2->immutable_target_type = FUNC_8(VAR_3);

 FUNC_11(VAR_3, VAR_6, VAR_4);
 if (VAR_5)
  FUNC_5(VAR_2);

out:
 return VAR_5;
}
