
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nct6775_data {int kind; } ;
__attribute__((used)) static bool FUNC_0(struct nct6775_data *VAR_0, u16 VAR_1)
{
 switch (VAR_0->kind) {
 case 139:
  return VAR_1 == 0x20 || VAR_1 == 0x22 || VAR_1 == 0x24 ||
    VAR_1 == 0xe0 || VAR_1 == 0xe2 || VAR_1 == 0xe4 ||
    VAR_1 == 0x111 || VAR_1 == 0x121 || VAR_1 == 0x131;
 case 138:
  return VAR_1 == 0x20 || VAR_1 == 0x22 || VAR_1 == 0x24 ||
    VAR_1 == 0x26 || VAR_1 == 0x28 || VAR_1 == 0xe0 || VAR_1 == 0xe2 ||
    VAR_1 == 0xe4 || VAR_1 == 0xe6 || VAR_1 == 0xe8 || VAR_1 == 0x111 ||
    VAR_1 == 0x121 || VAR_1 == 0x131 || VAR_1 == 0x191 || VAR_1 == 0x1a1;
 case 137:
  return (((VAR_1 & 0xff00) == 0x100 ||
      (VAR_1 & 0xff00) == 0x200) &&
     ((VAR_1 & 0x00ff) == 0x50 ||
      (VAR_1 & 0x00ff) == 0x53 ||
      (VAR_1 & 0x00ff) == 0x55)) ||
    (VAR_1 & 0xfff0) == 0x630 ||
    VAR_1 == 0x640 || VAR_1 == 0x642 ||
    VAR_1 == 0x662 ||
    ((VAR_1 & 0xfff0) == 0x650 && (VAR_1 & 0x000f) >= 0x06) ||
    VAR_1 == 0x73 || VAR_1 == 0x75 || VAR_1 == 0x77;
 case 136:
  return (((VAR_1 & 0xff00) == 0x100 ||
      (VAR_1 & 0xff00) == 0x200) &&
     ((VAR_1 & 0x00ff) == 0x50 ||
      (VAR_1 & 0x00ff) == 0x53 ||
      (VAR_1 & 0x00ff) == 0x55)) ||
    (VAR_1 & 0xfff0) == 0x630 ||
    VAR_1 == 0x402 ||
    VAR_1 == 0x640 || VAR_1 == 0x642 ||
    ((VAR_1 & 0xfff0) == 0x650 && (VAR_1 & 0x000f) >= 0x06) ||
    VAR_1 == 0x73 || VAR_1 == 0x75 || VAR_1 == 0x77;
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  return VAR_1 == 0x150 || VAR_1 == 0x153 || VAR_1 == 0x155 ||
    (VAR_1 & 0xfff0) == 0x4c0 ||
    VAR_1 == 0x402 ||
    VAR_1 == 0x63a || VAR_1 == 0x63c || VAR_1 == 0x63e ||
    VAR_1 == 0x640 || VAR_1 == 0x642 || VAR_1 == 0x64a ||
    VAR_1 == 0x64c ||
    VAR_1 == 0x73 || VAR_1 == 0x75 || VAR_1 == 0x77 || VAR_1 == 0x79 ||
    VAR_1 == 0x7b || VAR_1 == 0x7d;
 }
 return 0;
}
