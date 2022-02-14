
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



__attribute__((used)) static const char *
FUNC_0(uint16_t VAR_0)
{

 switch ((VAR_0 & 0x000c) >> 2) {
 case 0:
  return ("I");
 case 1:
  return ("D");
 case 2:
  return ("G");
 }
 return ("?");
}
