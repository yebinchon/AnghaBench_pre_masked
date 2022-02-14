
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int dummy; } ;
struct appleir {int key_up_timer; } ;


 int FUNC_0 (int *) ;
 struct appleir* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct appleir*) ;

__attribute__((used)) static void FUNC_4(struct hid_device *VAR_0)
{
 struct appleir *VAR_1 = FUNC_1(VAR_0);
 FUNC_2(VAR_0);
 FUNC_0(&VAR_1->key_up_timer);
 FUNC_3(VAR_1);
}
