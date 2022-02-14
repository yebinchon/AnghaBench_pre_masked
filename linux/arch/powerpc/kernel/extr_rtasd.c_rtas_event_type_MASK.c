
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;

__attribute__((used)) static char *FUNC_0(int VAR_1)
{
 if ((VAR_1 > 0) && (VAR_1 < 11))
  return VAR_0[VAR_1];

 switch (VAR_1) {
  case 133:
   return "EPOW";
  case 129:
   return "Platform Error";
  case 130:
   return "I/O Event";
  case 131:
   return "Platform Information Event";
  case 135:
   return "Resource Deallocation Event";
  case 134:
   return "Dump Notification Event";
  case 128:
   return "Platform Resource Reassignment Event";
  case 132:
   return "Hotplug Event";
 }

 return VAR_0[0];
}
