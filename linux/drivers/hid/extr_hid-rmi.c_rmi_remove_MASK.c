
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_data {int device_flags; int xport; int reset_work; int flags; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 struct rmi_data* FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct hid_device *VAR_2)
{
 struct rmi_data *VAR_3 = FUNC_2(VAR_2);

 if (VAR_3->device_flags & VAR_0) {
  FUNC_1(VAR_1, &VAR_3->flags);
  FUNC_0(&VAR_3->reset_work);
  FUNC_4(&VAR_3->xport);
 }

 FUNC_3(VAR_2);
}
