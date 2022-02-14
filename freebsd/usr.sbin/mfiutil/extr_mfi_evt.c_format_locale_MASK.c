
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int buffer ;
 int FUNC_0 (char*,int,char*,int) ;

__attribute__((used)) static const char *
FUNC_1(uint16_t VAR_0)
{
 static char VAR_1[8];

 switch (VAR_0) {
 case 130:
  return ("VOLUME");
 case 129:
  return ("DRIVE");
 case 131:
  return ("ENCL");
 case 135:
  return ("BATTERY");
 case 128:
  return ("SAS");
 case 132:
  return ("CTRL");
 case 133:
  return ("CONFIG");
 case 134:
  return ("CLUSTER");
 case 136:
  return ("ALL");
 default:
  FUNC_0(VAR_1, sizeof(VAR_1), "0x%04x", VAR_0);
  return (VAR_1);
 }
}
