
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
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_5, const char *VAR_6,
          int VAR_7)
{
 switch (FUNC_1(VAR_6)) {
 case 1:

  if (VAR_7)
   FUNC_0("bad %s argument: %s", VAR_5, VAR_6);
  else
   return VAR_1;
 case 0:
  return VAR_2;
 default:
  if (!FUNC_2(VAR_6, "on-demand"))
   return VAR_4;
  else if (!FUNC_2(VAR_6, "check"))
   return VAR_0;
  else if (!FUNC_2(VAR_6, "only"))
   return VAR_3;




  else if (VAR_7)
   FUNC_0("bad %s argument: %s", VAR_5, VAR_6);
  else
   return VAR_1;
 }
}
