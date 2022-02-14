
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static const char *FUNC_0(u8 VAR_0)
{
 switch (VAR_0 >> 5) {
 case 0:
  return "ACK";
 case 1:
  return "RNRNAK";
 case 3:
  return "NAK";
 }
 return "";
}
