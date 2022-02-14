
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* elevator; int sysfs_lock; } ;
struct elevator_type {int elevator_name; } ;
struct TYPE_2__ {scalar_t__ registered; } ;


 int FUNC_0 (struct request_queue*,char*,...) ;
 int FUNC_1 (struct request_queue*,struct elevator_type*) ;
 int FUNC_2 (struct request_queue*,TYPE_1__*) ;
 int FUNC_3 (struct request_queue*,int) ;
 int FUNC_4 (struct request_queue*) ;
 int FUNC_5 (struct request_queue*) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct request_queue *VAR_0,
         struct elevator_type *VAR_1)
{
 int VAR_2;

 FUNC_6(&VAR_0->sysfs_lock);

 if (VAR_0->elevator) {
  if (VAR_0->elevator->registered)
   FUNC_4(VAR_0);

  FUNC_5(VAR_0);
  FUNC_2(VAR_0, VAR_0->elevator);
 }

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  goto out;

 if (VAR_1) {
  VAR_2 = FUNC_3(VAR_0, 1);
  if (VAR_2) {
   FUNC_2(VAR_0, VAR_0->elevator);
   goto out;
  }
 }

 if (VAR_1)
  FUNC_0(VAR_0, "elv switch: %s", VAR_1->elevator_name);
 else
  FUNC_0(VAR_0, "elv switch: none");

out:
 return VAR_2;
}
