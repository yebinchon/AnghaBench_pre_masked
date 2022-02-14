
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static const char *
FUNC_0(int VAR_4)
{
 static const char *VAR_5[] = {
  "BAR0", "BAR1", "BAR2", "BAR3", "BAR4", "BAR5"
 };
 static const char *VAR_6[] = {
  "VFBAR0", "VFBAR1", "VFBAR2", "VFBAR3", "VFBAR4", "VFBAR5"
 };

 if ((VAR_4 >= VAR_0) && (VAR_4 <= VAR_1))
  return (VAR_5[VAR_4 - VAR_0]);
 if ((VAR_4 >= VAR_2) && (VAR_4 <= VAR_3))
  return (VAR_6[VAR_4 - VAR_2]);

 switch (VAR_4) {
 case 131:
  return "BRIDGE";
 case 130:
  return "ENI";
 case 128:
  return "ROM";
 case 129:
 default:
  return "RSVD";
 }
}
