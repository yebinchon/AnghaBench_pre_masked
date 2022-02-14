
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int* VAR_0 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_1)
{
 u8 VAR_2 = *VAR_0;

 switch (VAR_2 & 0x03) {
 default:
  FUNC_0("error: cpuctl register has unexpected value %02x\n",
         VAR_2);
 case 0x01:
  return 100000;
 case 0x02:
  return 133000;
 }
}
