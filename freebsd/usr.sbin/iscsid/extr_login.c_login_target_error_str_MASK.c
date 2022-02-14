
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int msg ;


 int FUNC_0 (char*,int,char*,int,int) ;

__attribute__((used)) static const char *
FUNC_1(int VAR_0, int VAR_1)
{
 static char VAR_2[128];




 switch (VAR_0) {
 case 0x01:
  switch (VAR_1) {
  case 0x01:
   return ("Target moved temporarily");
  case 0x02:
   return ("Target moved permanently");
  default:
   FUNC_0(VAR_2, sizeof(VAR_2), "unknown redirection; "
       "Status-Class 0x%x, Status-Detail 0x%x",
       VAR_0, VAR_1);
   return (VAR_2);
  }
 case 0x02:
  switch (VAR_1) {
  case 0x00:
   return ("Initiator error");
  case 0x01:
   return ("Authentication failure");
  case 0x02:
   return ("Authorization failure");
  case 0x03:
   return ("Not found");
  case 0x04:
   return ("Target removed");
  case 0x05:
   return ("Unsupported version");
  case 0x06:
   return ("Too many connections");
  case 0x07:
   return ("Missing parameter");
  case 0x08:
   return ("Can't include in session");
  case 0x09:
   return ("Session type not supported");
  case 0x0a:
   return ("Session does not exist");
  case 0x0b:
   return ("Invalid during login");
  default:
   FUNC_0(VAR_2, sizeof(VAR_2), "unknown initiator error; "
       "Status-Class 0x%x, Status-Detail 0x%x",
       VAR_0, VAR_1);
   return (VAR_2);
  }
 case 0x03:
  switch (VAR_1) {
  case 0x00:
   return ("Target error");
  case 0x01:
   return ("Service unavailable");
  case 0x02:
   return ("Out of resources");
  default:
   FUNC_0(VAR_2, sizeof(VAR_2), "unknown target error; "
       "Status-Class 0x%x, Status-Detail 0x%x",
       VAR_0, VAR_1);
   return (VAR_2);
  }
 default:
  FUNC_0(VAR_2, sizeof(VAR_2), "unknown error; "
      "Status-Class 0x%x, Status-Detail 0x%x",
      VAR_0, VAR_1);
  return (VAR_2);
 }
}
