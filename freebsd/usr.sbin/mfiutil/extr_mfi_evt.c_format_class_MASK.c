
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int8_t ;
typedef int buffer ;
 int FUNC_0 (char*,int,char*,int) ;

__attribute__((used)) static const char *
FUNC_1(int8_t VAR_0)
{
 static char VAR_1[6];

 switch (VAR_0) {
 case 132:
  return ("debug");
 case 129:
  return ("progress");
 case 130:
  return ("info");
 case 128:
  return ("WARN");
 case 134:
  return ("CRIT");
 case 131:
  return ("FATAL");
 case 133:
  return ("DEAD");
 default:
  FUNC_0(VAR_1, sizeof(VAR_1), "%d", VAR_0);
  return (VAR_1);
 }
}
