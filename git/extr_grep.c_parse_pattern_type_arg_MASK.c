
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char const*,char const*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_5, const char *VAR_6)
{
 if (!FUNC_1(VAR_6, "default"))
  return VAR_4;
 else if (!FUNC_1(VAR_6, "basic"))
  return VAR_0;
 else if (!FUNC_1(VAR_6, "extended"))
  return VAR_1;
 else if (!FUNC_1(VAR_6, "fixed"))
  return VAR_2;
 else if (!FUNC_1(VAR_6, "perl"))
  return VAR_3;
 FUNC_0("bad %s argument: %s", VAR_5, VAR_6);
}
