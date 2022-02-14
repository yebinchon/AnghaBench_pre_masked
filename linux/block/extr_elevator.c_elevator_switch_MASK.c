
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int sysfs_lock; } ;
struct elevator_type {int dummy; } ;


 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct request_queue*) ;
 int FUNC_4 (struct request_queue*,struct elevator_type*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct request_queue *VAR_0, struct elevator_type *VAR_1)
{
 int VAR_2;

 FUNC_5(&VAR_0->sysfs_lock);

 FUNC_0(VAR_0);
 FUNC_1(VAR_0);

 VAR_2 = FUNC_4(VAR_0, VAR_1);

 FUNC_3(VAR_0);
 FUNC_2(VAR_0);

 return VAR_2;
}
