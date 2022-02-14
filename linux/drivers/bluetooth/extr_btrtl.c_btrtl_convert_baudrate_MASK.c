
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static unsigned int FUNC_0(u32 VAR_0)
{
 switch (VAR_0) {
 case 0x0252a00a:
  return 230400;

 case 0x05f75004:
  return 921600;

 case 0x00005004:
  return 1000000;

 case 0x04928002:
 case 0x01128002:
  return 1500000;

 case 0x00005002:
  return 2000000;

 case 0x0000b001:
  return 2500000;

 case 0x04928001:
  return 3000000;

 case 0x052a6001:
  return 3500000;

 case 0x00005001:
  return 4000000;

 case 0x0252c014:
 default:
  return 115200;
 }
}
