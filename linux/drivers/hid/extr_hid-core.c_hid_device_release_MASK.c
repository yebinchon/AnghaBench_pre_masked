
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {struct hid_device* dev_rdesc; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*) ;
 struct hid_device* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct hid_device *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1);
 FUNC_1(VAR_1->dev_rdesc);
 FUNC_1(VAR_1);
}
