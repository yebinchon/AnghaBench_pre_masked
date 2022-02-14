
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* FUNC_0 (char*) ;

__attribute__((used)) static const char *FUNC_1(int VAR_0)
{
 switch (VAR_0) {
 case 135:
  return FUNC_0("new file:");
 case 134:
  return FUNC_0("copied:");
 case 133:
  return FUNC_0("deleted:");
 case 132:
  return FUNC_0("modified:");
 case 131:
  return FUNC_0("renamed:");
 case 130:
  return FUNC_0("typechange:");
 case 129:
  return FUNC_0("unknown:");
 case 128:
  return FUNC_0("unmerged:");
 default:
  return ((void*)0);
 }
}
