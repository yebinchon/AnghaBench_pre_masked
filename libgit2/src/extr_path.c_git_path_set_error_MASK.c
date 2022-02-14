
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char const*,...) ;

int FUNC_1(int VAR_5, const char *VAR_6, const char *VAR_7)
{
 switch (VAR_5) {
 case 129:
 case 128:
  FUNC_0(VAR_4, "could not find '%s' to %s", VAR_6, VAR_7);
  return VAR_3;

 case 131:
 case 130:
  FUNC_0(VAR_4, "invalid path for filesystem '%s'", VAR_6);
  return VAR_1;

 case 132:
  FUNC_0(VAR_4, "failed %s - '%s' already exists", VAR_7, VAR_6);
  return VAR_0;

 case 133:
  FUNC_0(VAR_4, "failed %s - '%s' is locked", VAR_7, VAR_6);
  return VAR_2;

 default:
  FUNC_0(VAR_4, "could not %s '%s'", VAR_7, VAR_6);
  return -1;
 }
}
