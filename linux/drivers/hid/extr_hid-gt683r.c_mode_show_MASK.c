
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hid_device {int dummy; } ;
struct gt683r_led {scalar_t__ mode; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct gt683r_led* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (char*,int ,char*,int) ;
 struct hid_device* FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
    struct device_attribute *VAR_4,
    char *VAR_5)
{
 u8 VAR_6;
 struct hid_device *VAR_7 = FUNC_2(VAR_3->parent);
 struct gt683r_led *VAR_8 = FUNC_0(VAR_7);

 if (VAR_8->mode == VAR_1)
  VAR_6 = 0;
 else if (VAR_8->mode == VAR_0)
  VAR_6 = 1;
 else
  VAR_6 = 2;

 return FUNC_1(VAR_5, VAR_2, "%u\n", VAR_6);
}
