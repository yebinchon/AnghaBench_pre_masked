
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct mapped_device {int dummy; } ;
struct dm_table {int dummy; } ;


 int FUNC_0 (struct request_queue*,int) ;
 struct request_queue* FUNC_1 (struct mapped_device*) ;
 struct mapped_device* FUNC_2 (struct dm_table*) ;
 int FUNC_3 (struct dm_table*) ;

void FUNC_4(struct dm_table *VAR_0)
{
 struct mapped_device *VAR_1;
 struct request_queue *VAR_2;

 if (!FUNC_3(VAR_0))
  return;

 VAR_1 = FUNC_2(VAR_0);
 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  FUNC_0(VAR_2, 1);
}
