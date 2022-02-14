
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hid_device {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hid_device*,int*,int) ;
 int FUNC_1 (struct hid_device*,char*,int) ;
 int FUNC_2 (struct hid_device*,int,int*,int ,int ,int ) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct hid_device *VAR_6,
      unsigned char *VAR_7)
{
 u8 VAR_8[] = { VAR_1, 0x05, 0x20, 0x31, 0x00, 0x08 };
 u8 *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_6, VAR_8, sizeof(VAR_8));
 if (VAR_10 < 0) {
  FUNC_1(VAR_6, "Asus failed to send configuration command: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_9 = FUNC_4(VAR_2, VAR_3);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_6, VAR_1, VAR_9,
     VAR_2, VAR_4,
     VAR_5);
 if (VAR_10 < 0) {
  FUNC_1(VAR_6, "Asus failed to request functions: %d\n", VAR_10);
  FUNC_3(VAR_9);
  return VAR_10;
 }

 *VAR_7 = VAR_9[6];

 FUNC_3(VAR_9);
 return VAR_10;
}
