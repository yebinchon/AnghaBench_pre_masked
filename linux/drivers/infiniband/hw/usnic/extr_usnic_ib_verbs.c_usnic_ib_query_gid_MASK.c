
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ib_gid {int * raw; } ;
typedef int u8 ;
struct usnic_ib_dev {int usdev_lock; TYPE_1__* ufdev; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {int inaddr; int mac; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct usnic_ib_dev* FUNC_3 (struct ib_device*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int *) ;

int FUNC_6(struct ib_device *VAR_1, u8 VAR_2, int VAR_3,
    union ib_gid *VAR_4)
{

 struct usnic_ib_dev *VAR_5 = FUNC_3(VAR_1);
 FUNC_4("\n");

 if (VAR_3 > 1)
  return -VAR_0;

 FUNC_1(&VAR_5->usdev_lock);
 FUNC_0(&(VAR_4->raw[0]), 0, sizeof(VAR_4->raw));
 FUNC_5(VAR_5->ufdev->mac, VAR_5->ufdev->inaddr,
   &VAR_4->raw[0]);
 FUNC_2(&VAR_5->usdev_lock);

 return 0;
}
