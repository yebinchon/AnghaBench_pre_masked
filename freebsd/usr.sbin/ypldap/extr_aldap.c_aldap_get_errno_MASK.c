
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aldap {int err; } ;







int
FUNC_0(struct aldap *VAR_0, const char **VAR_1)
{
 switch (VAR_0->err) {
 case 128:
  *VAR_1 = "success";
  break;
 case 129:
  *VAR_1 = "parser failed";
  break;
 case 131:
  *VAR_1 = "invalid filter";
  break;
 case 130:
  *VAR_1 = "operation failed";
  break;
 default:
  *VAR_1 = "unknown";
  break;
 }
 return (VAR_0->err);
}
