
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbhid_device {TYPE_2__* intf; } ;
struct hiddev {int exist; int initialized; int minor; struct hid_device* hid; int existancelock; int list_lock; int list; int wait; } ;
struct hid_device {unsigned int maxcollection; int quirks; struct hiddev* hiddev; TYPE_1__* collection; struct usbhid_device* driver_data; } ;
struct TYPE_4__ {int minor; } ;
struct TYPE_3__ {scalar_t__ type; int usage; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hid_device*,char*) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct hiddev*) ;
 struct hiddev* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,int *) ;

int FUNC_9(struct hid_device *VAR_4, unsigned int VAR_5)
{
 struct hiddev *VAR_6;
 struct usbhid_device *VAR_7 = VAR_4->driver_data;
 int VAR_8;

 if (!VAR_5) {
  unsigned int VAR_9;
  for (VAR_9 = 0; VAR_9 < VAR_4->maxcollection; VAR_9++)
   if (VAR_4->collection[VAR_9].type ==
       VAR_1 &&
       !FUNC_1(VAR_4->collection[VAR_9].usage))
    break;

  if (VAR_9 == VAR_4->maxcollection)
   return -1;
 }

 if (!(VAR_6 = FUNC_5(sizeof(struct hiddev), VAR_0)))
  return -1;

 FUNC_3(&VAR_6->wait);
 FUNC_0(&VAR_6->list);
 FUNC_7(&VAR_6->list_lock);
 FUNC_6(&VAR_6->existancelock);
 VAR_4->hiddev = VAR_6;
 VAR_6->hid = VAR_4;
 VAR_6->exist = 1;
 VAR_8 = FUNC_8(VAR_7->intf, &VAR_3);
 if (VAR_8) {
  FUNC_2(VAR_4, "Not able to get a minor for this device\n");
  VAR_4->hiddev = ((void*)0);
  FUNC_4(VAR_6);
  return -1;
 }





 VAR_6->initialized = VAR_4->quirks & VAR_2;

 VAR_6->minor = VAR_7->intf->minor;

 return 0;
}
