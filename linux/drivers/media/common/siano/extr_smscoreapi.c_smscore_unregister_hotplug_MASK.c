
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smscore_device_notifyee_t {scalar_t__ hotplug; int entry; } ;
struct list_head {struct list_head* next; } ;
typedef scalar_t__ hotplug_t ;


 int VAR_0 ;
 struct list_head VAR_1 ;
 int FUNC_0 (struct smscore_device_notifyee_t*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(hotplug_t VAR_2)
{
 struct list_head *VAR_3, *VAR_4;

 FUNC_1(&VAR_0);

 VAR_4 = &VAR_1;

 for (VAR_3 = VAR_4->next; VAR_3 != VAR_4;) {
  struct smscore_device_notifyee_t *VAR_5 =
   (struct smscore_device_notifyee_t *) VAR_3;
  VAR_3 = VAR_3->next;

  if (VAR_5->hotplug == VAR_2) {
   FUNC_3(&VAR_5->entry);
   FUNC_0(VAR_5);
  }
 }

 FUNC_2(&VAR_0);
}
