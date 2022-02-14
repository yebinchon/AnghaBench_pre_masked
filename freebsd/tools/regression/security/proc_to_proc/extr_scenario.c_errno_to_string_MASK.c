
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static char *
FUNC_1(int VAR_0)
{

 switch (VAR_0) {
 case 129:
  return ("EPERM");
 case 133:
  return ("EACCES");
 case 132:
  return ("EINVAL");
 case 131:
  return ("ENOSYS");
 case 128:
  return ("ESRCH");
 case 130:
  return ("EOPNOTSUPP");
 case 0:
  return ("0");
 default:
  FUNC_0("%d\n", VAR_0);
  return ("unknown");
 }
}
