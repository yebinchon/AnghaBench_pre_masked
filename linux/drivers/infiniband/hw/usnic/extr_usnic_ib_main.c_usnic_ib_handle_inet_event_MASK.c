
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dev; } ;
struct usnic_ib_dev {int usdev_lock; TYPE_2__ ib_dev; TYPE_3__* ufdev; } ;
struct in_ifaddr {int ifa_address; } ;
struct TYPE_5__ {int port_num; } ;
struct ib_event {TYPE_1__ element; TYPE_2__* device; void* event; } ;
struct TYPE_7__ {int inaddr; } ;


 void* VAR_0 ;


 int VAR_1 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (struct ib_event*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct usnic_ib_dev*) ;
 int FUNC_8 (char*,int ,...) ;

__attribute__((used)) static int FUNC_9(struct usnic_ib_dev *VAR_2,
     unsigned long VAR_3, void *VAR_4)
{
 struct in_ifaddr *VAR_5 = VAR_4;
 struct ib_event VAR_6;

 FUNC_2(&VAR_2->usdev_lock);

 switch (VAR_3) {
 case 129:
  FUNC_8("%s via ip notifiers",
    FUNC_4(VAR_3));
  FUNC_6(VAR_2->ufdev);
  FUNC_7(VAR_2);
  VAR_6.event = VAR_0;
  VAR_6.device = &VAR_2->ib_dev;
  VAR_6.element.port_num = 1;
  FUNC_1(&VAR_6);
  break;
 case 128:
  FUNC_5(VAR_2->ufdev, VAR_5->ifa_address);
  FUNC_8("%s via ip notifiers: ip %pI4",
    FUNC_4(VAR_3),
    &VAR_2->ufdev->inaddr);
  VAR_6.event = VAR_0;
  VAR_6.device = &VAR_2->ib_dev;
  VAR_6.element.port_num = 1;
  FUNC_1(&VAR_6);
  break;
 default:
  FUNC_8("Ignoring event %s on %s",
    FUNC_4(VAR_3),
    FUNC_0(&VAR_2->ib_dev.dev));
 }
 FUNC_3(&VAR_2->usdev_lock);

 return VAR_1;
}
