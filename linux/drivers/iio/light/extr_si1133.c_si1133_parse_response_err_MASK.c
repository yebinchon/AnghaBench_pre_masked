
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct device*,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_2, u32 VAR_3, u8 VAR_4)
{
 VAR_3 &= 0xF;

 switch (VAR_3) {
 case 129:
  FUNC_0(VAR_2, "Output buffer overflow: %#02hhx\n", VAR_4);
  return -VAR_1;
 case 128:
  FUNC_0(VAR_2, "Saturation of the ADC or overflow of accumulation: %#02hhx\n",
    VAR_4);
  return -VAR_1;
 case 130:
  FUNC_0(VAR_2,
    "Parameter access to an invalid location: %#02hhx\n",
    VAR_4);
  return -VAR_0;
 case 131:
  FUNC_0(VAR_2, "Invalid command %#02hhx\n", VAR_4);
  return -VAR_0;
 default:
  FUNC_0(VAR_2, "Unknown error %#02hhx\n", VAR_4);
  return -VAR_0;
 }
}
