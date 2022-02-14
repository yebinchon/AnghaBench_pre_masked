
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct lg4ff_compat_mode_switch {int dummy; } ;
 struct lg4ff_compat_mode_switch const VAR_0 ;
 struct lg4ff_compat_mode_switch const VAR_1 ;
 struct lg4ff_compat_mode_switch const VAR_2 ;
 struct lg4ff_compat_mode_switch const VAR_3 ;
 struct lg4ff_compat_mode_switch const VAR_4 ;
 struct lg4ff_compat_mode_switch const VAR_5 ;
 struct lg4ff_compat_mode_switch const VAR_6 ;
 struct lg4ff_compat_mode_switch const VAR_7 ;

__attribute__((used)) static const struct lg4ff_compat_mode_switch *FUNC_0(const u16 VAR_8, const u16 VAR_9)
{
 switch (VAR_8) {
 case 132:
  switch (VAR_9) {
  case 132:
   return &VAR_0;

  default:
   return ((void*)0);
  }
  break;
 case 131:
  switch (VAR_9) {
  case 132:
   return &VAR_0;
  case 131:
   return &VAR_7;

  default:
   return ((void*)0);
  }
  break;
 case 130:
  switch (VAR_9) {
  case 128:
   return &VAR_1;
  case 132:
   return &VAR_3;
  case 131:
   return &VAR_4;
  case 130:
   return &VAR_5;

  default:
   return ((void*)0);
  }
  break;
 case 129:
  switch (VAR_9) {
  case 132:
   return &VAR_3;
  case 133:
   return &VAR_2;
  case 131:
   return &VAR_4;
  case 130:
   return &VAR_5;
  case 129:
   return &VAR_6;

  default:
   return ((void*)0);
  }
  break;
 case 133:
  switch (VAR_9) {
  case 128:
   return &VAR_1;
  case 132:
   return &VAR_3;
  case 133:
   return &VAR_2;

  default:
   return ((void*)0);
  }
  break;

 default:
  return ((void*)0);
 }
}
