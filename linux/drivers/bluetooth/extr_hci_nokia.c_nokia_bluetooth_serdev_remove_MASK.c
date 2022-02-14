
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serdev_device {int dummy; } ;
struct nokia_bt_dev {int hu; } ;


 int FUNC_0 (int *) ;
 struct nokia_bt_dev* FUNC_1 (struct serdev_device*) ;

__attribute__((used)) static void FUNC_2(struct serdev_device *VAR_0)
{
 struct nokia_bt_dev *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->hu);
}
