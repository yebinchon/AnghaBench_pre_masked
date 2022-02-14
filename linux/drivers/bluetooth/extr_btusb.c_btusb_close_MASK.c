
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hci_dev {int name; } ;
struct btusb_data {int deferred; TYPE_1__* intf; int flags; int waker; int work; } ;
struct TYPE_3__ {int needs_remote_wakeup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct btusb_data*) ;
 int FUNC_2 (struct btusb_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 struct btusb_data* FUNC_5 (struct hci_dev*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct hci_dev *VAR_5)
{
 struct btusb_data *VAR_6 = FUNC_5(VAR_5);
 int VAR_7;

 FUNC_0("%s", VAR_5->name);

 FUNC_3(&VAR_6->work);
 FUNC_3(&VAR_6->waker);

 FUNC_4(VAR_3, &VAR_6->flags);
 FUNC_4(VAR_0, &VAR_6->flags);
 FUNC_4(VAR_2, &VAR_6->flags);
 FUNC_4(VAR_1, &VAR_6->flags);

 FUNC_2(VAR_6);
 FUNC_1(VAR_6);

 VAR_7 = FUNC_7(VAR_6->intf);
 if (VAR_7 < 0)
  goto failed;

 VAR_6->intf->needs_remote_wakeup = 0;


 if (FUNC_6(VAR_4, &VAR_6->flags))
  VAR_6->intf->needs_remote_wakeup = 1;

 FUNC_8(VAR_6->intf);

failed:
 FUNC_9(&VAR_6->deferred);
 return 0;
}
