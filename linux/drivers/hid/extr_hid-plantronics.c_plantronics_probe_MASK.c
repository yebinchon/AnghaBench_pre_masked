
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {int dummy; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hid_device*,char*) ;
 int FUNC_1 (struct hid_device*,int) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*,void*) ;
 scalar_t__ FUNC_4 (struct hid_device*) ;

__attribute__((used)) static int FUNC_5(struct hid_device *VAR_3,
        const struct hid_device_id *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5) {
  FUNC_0(VAR_3, "parse failed\n");
  goto err;
 }

 FUNC_3(VAR_3, (void *)FUNC_4(VAR_3));

 VAR_5 = FUNC_1(VAR_3, VAR_0 |
  VAR_2 | VAR_1);
 if (VAR_5)
  FUNC_0(VAR_3, "hw start failed\n");

err:
 return VAR_5;
}
