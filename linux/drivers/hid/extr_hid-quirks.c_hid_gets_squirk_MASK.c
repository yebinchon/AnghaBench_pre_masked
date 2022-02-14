
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {unsigned long driver_data; } ;
struct hid_device {int product; int vendor; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (char*,unsigned long,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct hid_device_id* FUNC_1 (struct hid_device const*,int ) ;
 int VAR_4 ;

__attribute__((used)) static unsigned long FUNC_2(const struct hid_device *VAR_5)
{
 const struct hid_device_id *VAR_6;
 unsigned long VAR_7 = 0;

 if (FUNC_1(VAR_5, VAR_3))
  VAR_7 |= VAR_1;

 if (FUNC_1(VAR_5, VAR_2))
  VAR_7 |= VAR_0;

 VAR_6 = FUNC_1(VAR_5, VAR_4);
 if (VAR_6 != ((void*)0))
  VAR_7 |= VAR_6->driver_data;

 if (VAR_7)
  FUNC_0("Found squirk 0x%lx for HID device 0x%04x:0x%04x\n",
   VAR_7, VAR_5->vendor, VAR_5->product);
 return VAR_7;
}
