
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int sysfs_lock; } ;
struct elevator_queue {int dummy; } ;


 int FUNC_0 (struct request_queue*,struct elevator_queue*) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct request_queue *VAR_0,
  struct elevator_queue *VAR_1)
{
 FUNC_2(&VAR_0->sysfs_lock);

 FUNC_1(VAR_0);
 FUNC_0(VAR_0, VAR_1);
}
