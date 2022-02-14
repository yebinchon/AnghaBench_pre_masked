
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hid_device_id {void* product; void* vendor; void* bus; int member_0; } ;
typedef void* __u16 ;


 scalar_t__ FUNC_0 (struct hid_device_id*,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,unsigned short*,unsigned short*,int *) ;

int FUNC_3(char **VAR_0, __u16 VAR_1, int VAR_2)
{
 struct hid_device_id VAR_3 = { 0 };
 int VAR_4 = 0, VAR_5;
 unsigned short int VAR_6, VAR_7;
 u32 VAR_8;

 VAR_3.bus = VAR_1;

 for (; VAR_4 < VAR_2 && VAR_0[VAR_4]; VAR_4++) {

  VAR_5 = FUNC_2(VAR_0[VAR_4], "0x%hx:0x%hx:0x%x",
    &VAR_6, &VAR_7, &VAR_8);

  VAR_3.vendor = (__u16)VAR_6;
  VAR_3.product = (__u16)VAR_7;

  if (VAR_5 != 3 ||
      FUNC_0(&VAR_3, VAR_8) != 0) {
   FUNC_1("Could not parse HID quirk module param %s\n",
    VAR_0[VAR_4]);
  }
 }

 return 0;
}
