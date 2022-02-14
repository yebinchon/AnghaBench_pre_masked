
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {int hid; int type; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;
typedef int __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hid_device*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_2, struct hid_field *VAR_3,
        struct hid_usage *VAR_4, __s32 VAR_5)
{
 if ((VAR_4->hid & VAR_1) == 0xff310000 &&
     (VAR_4->hid & VAR_0) != 0x00 && !VAR_4->type) {
  FUNC_0(VAR_2, "Unmapped Asus vendor usagepage code 0x%02x\n",
    VAR_4->hid & VAR_0);
 }

 return 0;
}
