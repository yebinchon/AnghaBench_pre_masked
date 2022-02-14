
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smscore_device_t {int device; } ;
struct smscore_device_notifyee_t {int (* hotplug ) (struct smscore_device_t*,int ,int) ;int entry; } ;
struct list_head {struct list_head* next; } ;
typedef int (* hotplug_t ) (struct smscore_device_t*,int ,int) ;


 int VAR_0 ;
 int VAR_1 ;
 struct list_head VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct smscore_device_notifyee_t*) ;
 struct smscore_device_notifyee_t* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

int FUNC_5(hotplug_t VAR_5)
{
 struct smscore_device_notifyee_t *VAR_6;
 struct list_head *VAR_7, *VAR_8;
 int VAR_9 = 0;

 FUNC_2(&VAR_3);
 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 if (VAR_6) {

  VAR_8 = &VAR_2;
  for (VAR_7 = VAR_8->next;
       VAR_7 != VAR_8 && !VAR_9;
       VAR_7 = VAR_7->next) {
   struct smscore_device_t *VAR_10 =
    (struct smscore_device_t *) VAR_7;
   VAR_9 = VAR_5(VAR_10, VAR_10->device, 1);
  }

  if (VAR_9 >= 0) {
   VAR_6->hotplug = VAR_5;
   FUNC_4(&VAR_6->entry, &VAR_4);
  } else
   FUNC_0(VAR_6);
 } else
  VAR_9 = -VAR_0;

 FUNC_3(&VAR_3);

 return VAR_9;
}
