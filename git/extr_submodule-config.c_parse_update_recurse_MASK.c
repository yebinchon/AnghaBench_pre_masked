
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*,char const*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_3, const char *VAR_4,
    int VAR_5)
{
 switch (FUNC_1(VAR_4)) {
 case 1:
  return VAR_2;
 case 0:
  return VAR_1;
 default:
  if (VAR_5)
   FUNC_0("bad %s argument: %s", VAR_3, VAR_4);
  return VAR_0;
 }
}
