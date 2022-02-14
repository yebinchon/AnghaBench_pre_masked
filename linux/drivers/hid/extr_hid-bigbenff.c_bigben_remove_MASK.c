
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int dummy; } ;
struct bigben_device {int worker; } ;


 int FUNC_0 (int *) ;
 struct bigben_device* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*) ;

__attribute__((used)) static void FUNC_4(struct hid_device *VAR_0)
{
 struct bigben_device *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->worker);
 FUNC_2(VAR_0);
 FUNC_3(VAR_0);
}
