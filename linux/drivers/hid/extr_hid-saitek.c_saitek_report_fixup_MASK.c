
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saitek_sc {int quirks; } ;
struct hid_device {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 struct saitek_sc* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*,char*) ;

__attribute__((used)) static __u8 *FUNC_2(struct hid_device *VAR_1, __u8 *VAR_2,
  unsigned int *VAR_3)
{
 struct saitek_sc *VAR_4 = FUNC_0(VAR_1);

 if ((VAR_4->quirks & VAR_0) && *VAR_3 == 137 &&
   VAR_2[20] == 0x09 && VAR_2[21] == 0x33 &&
   VAR_2[94] == 0x81 && VAR_2[95] == 0x03 &&
   VAR_2[110] == 0x81 && VAR_2[111] == 0x03) {

  FUNC_1(VAR_1, "Fixing up Saitek PS1000 report descriptor\n");


  VAR_2[20] = 0x15;
  VAR_2[21] = 0x00;


  VAR_2[95] = 0x02;
  VAR_2[111] = 0x02;

 }
 return VAR_2;
}
