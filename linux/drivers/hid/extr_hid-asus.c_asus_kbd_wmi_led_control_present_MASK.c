
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int*) ;
 int FUNC_2 (struct hid_device*,char*,int,int) ;

__attribute__((used)) static bool FUNC_3(struct hid_device *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 if (!FUNC_0(VAR_3))
  return 0;

 VAR_6 = FUNC_1(VAR_2,
           VAR_0, 0, &VAR_5);
 FUNC_2(VAR_4, "WMI backlight check: rc %d value %x", VAR_6, VAR_5);
 if (VAR_6)
  return 0;

 return !!(VAR_5 & VAR_1);
}
