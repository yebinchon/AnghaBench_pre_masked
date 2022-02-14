
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ms_data {unsigned long quirks; } ;
struct hid_device {int dummy; } ;
typedef int __u8 ;


 unsigned long VAR_0 ;
 struct ms_data* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*,char*) ;

__attribute__((used)) static __u8 *FUNC_2(struct hid_device *VAR_1, __u8 *VAR_2,
  unsigned int *VAR_3)
{
 struct ms_data *VAR_4 = FUNC_0(VAR_1);
 unsigned long VAR_5 = VAR_4->quirks;





 if ((VAR_5 & VAR_0) && *VAR_3 == 571 && VAR_2[557] == 0x19 &&
   VAR_2[559] == 0x29) {
  FUNC_1(VAR_1, "fixing up Microsoft Wireless Receiver Model 1028 report descriptor\n");
  VAR_2[557] = 0x35;
  VAR_2[559] = 0x45;
 }
 return VAR_2;
}
