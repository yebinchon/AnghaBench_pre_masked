
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline char *FUNC_0(int VAR_0)
{
 switch (VAR_0) {
 case 130:
  return "ctrl";
 case 131:
  return "bulk";
 case 129:
  return "intr";
 case 128:
  return "isoc";
 }
 return "(bad ed_type)";
}
