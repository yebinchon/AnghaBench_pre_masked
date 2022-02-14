
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hidpp_device {int dummy; } ;


 char* FUNC_0 (char*,char const*,unsigned int) ;

__attribute__((used)) static u8 *FUNC_1(struct hidpp_device *VAR_0,
           u8 *VAR_1, unsigned int *VAR_2)
{

 static const char VAR_3[] = {
  0x05, 0x0C,
  0x09, 0x01,
  0xA1, 0x01,
  0x85, 0x03,
  0x75, 0x10,
  0x95, 0x02,
  0x15, 0x01,
  0x26, 0x00
 };
 char *VAR_4, *VAR_5 = (char *)VAR_1;
 unsigned int VAR_6;

 VAR_4 = FUNC_0(VAR_5, VAR_3, *VAR_2);
 VAR_6 = *VAR_2 - (VAR_4 - VAR_5);
 if (VAR_4 && VAR_6 >= 25) {
  VAR_4[15] = 0x7f;
  VAR_4[16] = 0x10;
  VAR_4[20] = 0x7f;
  VAR_4[21] = 0x10;
 }
 return VAR_1;
}
