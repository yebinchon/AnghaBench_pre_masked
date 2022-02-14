
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char const*,char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_4, const char *VAR_5,
          int VAR_6)
{
 switch (FUNC_1(VAR_5)) {
 case 1:
  return VAR_2;
 case 0:
  return VAR_1;
 default:
  if (!FUNC_2(VAR_5, "on-demand"))
   return VAR_3;




  if (VAR_6)
   FUNC_0("bad %s argument: %s", VAR_4, VAR_5);
  else
   return VAR_0;
 }
}
