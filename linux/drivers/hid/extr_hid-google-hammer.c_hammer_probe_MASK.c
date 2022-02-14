
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {int dummy; } ;
struct hid_device {scalar_t__ product; int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct hid_device*) ;
 scalar_t__ FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*,int ) ;
 int FUNC_4 (struct hid_device*) ;
 int FUNC_5 (struct hid_device*,char*,int) ;

__attribute__((used)) static int FUNC_6(struct hid_device *VAR_3,
   const struct hid_device_id *VAR_4)
{
 int VAR_5;







 if (VAR_3->product == VAR_2 &&
   FUNC_1(VAR_3))
  VAR_3->quirks |= VAR_1;

 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_3, VAR_0);
 if (VAR_5)
  return VAR_5;

 if (FUNC_0(VAR_3)) {
  VAR_5 = FUNC_2(VAR_3);
  if (VAR_5)
   FUNC_5(VAR_3,
    "Failed to register keyboard backlight: %d\n",
    VAR_5);
 }

 return 0;
}
