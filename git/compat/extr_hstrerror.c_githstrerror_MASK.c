
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;






 int FUNC_0 (char*,int,char*,int) ;

const char *FUNC_1(int VAR_0)
{
 static char VAR_1[48];
 switch (VAR_0)
 {
 case 131:
  return "Authoritative answer: host not found";
 case 130:
  return "Valid name, no data record of requested type";
 case 129:
  return "Non recoverable errors, FORMERR, REFUSED, NOTIMP";
 case 128:
  return "Non-authoritative \"host not found\", or SERVERFAIL";
 }
 FUNC_0(VAR_1, sizeof(VAR_1), "Name resolution error %d", VAR_0);
 return VAR_1;
}
