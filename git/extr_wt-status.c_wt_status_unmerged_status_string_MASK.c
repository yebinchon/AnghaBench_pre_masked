
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 char const* FUNC_1 (char*) ;

__attribute__((used)) static const char *FUNC_2(int VAR_0)
{
 switch (VAR_0) {
 case 1:
  return FUNC_1("both deleted:");
 case 2:
  return FUNC_1("added by us:");
 case 3:
  return FUNC_1("deleted by them:");
 case 4:
  return FUNC_1("added by them:");
 case 5:
  return FUNC_1("deleted by us:");
 case 6:
  return FUNC_1("both added:");
 case 7:
  return FUNC_1("both modified:");
 default:
  FUNC_0("unhandled unmerged status %x", VAR_0);
 }
}
