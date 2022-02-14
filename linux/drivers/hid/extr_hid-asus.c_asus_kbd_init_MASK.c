
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hid_device {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (struct hid_device*,int*,int) ;
 int FUNC_1 (struct hid_device*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_1)
{
 u8 VAR_2[] = { VAR_0, 0x41, 0x53, 0x55, 0x53, 0x20, 0x54,
       0x65, 0x63, 0x68, 0x2e, 0x49, 0x6e, 0x63, 0x2e, 0x00 };
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2, sizeof(VAR_2));
 if (VAR_3 < 0)
  FUNC_1(VAR_1, "Asus failed to send init command: %d\n", VAR_3);

 return VAR_3;
}
