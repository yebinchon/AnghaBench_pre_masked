
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *
FUNC_0(int VAR_0)
{
 const char *VAR_1;

 switch (VAR_0) {
 case 0:
  VAR_1 = "update operation succeeded";
  break;
 case 131:
  VAR_1 = "no such key in file";
  break;
 case 129:
  VAR_1 = "cannot read the database";
  break;
 case 128:
  VAR_1 = "cannot write to the database";
  break;
 case 132:
  VAR_1 = "cannot update database";
  break;
 case 133:
  VAR_1 = "permission denied";
  break;
 case 130:
  VAR_1 = "malloc failed";
  break;
 default:
  VAR_1 = "unknown error";
  break;
 }
 return (VAR_1);
}
