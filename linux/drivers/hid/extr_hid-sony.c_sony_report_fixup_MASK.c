
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sony_sc {int quirks; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sony_sc* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*,char*) ;
 int* FUNC_2 (struct hid_device*,int*,unsigned int*) ;
 int* FUNC_3 (struct hid_device*,int*,unsigned int*) ;

__attribute__((used)) static u8 *FUNC_4(struct hid_device *VAR_5, u8 *VAR_6,
  unsigned int *VAR_7)
{
 struct sony_sc *VAR_8 = FUNC_0(VAR_5);

 if (VAR_8->quirks & (VAR_3 | VAR_0))
  return VAR_6;





 if ((VAR_8->quirks & VAR_4) && *VAR_7 >= 56 &&



     VAR_6[2] == 0x09 && VAR_6[3] == 0x02 &&

     VAR_6[54] == 0x81 && VAR_6[55] == 0x07) {
  FUNC_1(VAR_5, "Fixing up Sony RF Receiver report descriptor\n");

  VAR_6[55] = 0x06;
 }

 if (VAR_8->quirks & VAR_1)
  return FUNC_2(VAR_5, VAR_6, VAR_7);

 if (VAR_8->quirks & VAR_2)
  return FUNC_3(VAR_5, VAR_6, VAR_7);

 return VAR_6;
}
