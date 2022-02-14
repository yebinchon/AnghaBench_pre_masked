
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hid_device {int dummy; } ;
typedef int report ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hid_device*,int,int*,int,int ,int ) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int const*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_4)
{
 static const u8 VAR_5[] = { 0xf4, 0x42, 0x03, 0x00, 0x00 };
 u8 *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_5, sizeof(VAR_5), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_4, VAR_6[0], VAR_6, sizeof(VAR_5),
      VAR_2, VAR_3);

 FUNC_1(VAR_6);

 return VAR_7;
}
