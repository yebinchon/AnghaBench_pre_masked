
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (struct hid_device*,char*) ;

__attribute__((used)) static void FUNC_2(struct hid_device *VAR_1,
          __u8 *VAR_2, unsigned int VAR_3,
          int VAR_4)
{
 if (VAR_3 < 32 || VAR_2[12] != 0x95 ||
     VAR_2[14] != 0x75 || VAR_2[15] != 0x01 ||
     VAR_2[20] != 0x29 || VAR_2[30] != 0x75)
  return;
 FUNC_1(VAR_1, "Fixing up Elecom mouse button count\n");
 VAR_4 = FUNC_0(VAR_4, 0, VAR_0);
 VAR_2[13] = VAR_4;
 VAR_2[21] = VAR_4;
 VAR_2[31] = VAR_0 - VAR_4;
}
