
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct steam_device {int serial_no; } ;
typedef int reply ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct steam_device*,int*,int) ;
 int FUNC_1 (struct steam_device*,int*,int) ;
 int FUNC_2 (int ,int*,int) ;

__attribute__((used)) static int FUNC_3(struct steam_device *VAR_3)
{




 int VAR_4;
 u8 VAR_5[] = {VAR_1, 0x15, 0x01};
 u8 VAR_6[3 + VAR_2 + 1];

 VAR_4 = FUNC_1(VAR_3, VAR_5, sizeof(VAR_5));
 if (VAR_4 < 0)
  return VAR_4;
 VAR_4 = FUNC_0(VAR_3, VAR_6, sizeof(VAR_6));
 if (VAR_4 < 0)
  return VAR_4;
 if (VAR_6[0] != 0xae || VAR_6[1] != 0x15 || VAR_6[2] != 0x01)
  return -VAR_0;
 VAR_6[3 + VAR_2] = 0;
 FUNC_2(VAR_3->serial_no, VAR_6 + 3, sizeof(VAR_3->serial_no));
 return 0;
}
