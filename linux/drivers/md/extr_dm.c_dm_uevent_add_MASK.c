
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int uevent_lock; int uevent_list; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct list_head*,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct mapped_device *VAR_0, struct list_head *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->uevent_lock, VAR_2);
 FUNC_0(VAR_1, &VAR_0->uevent_list);
 FUNC_2(&VAR_0->uevent_lock, VAR_2);
}
