
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2)
{
 switch (FUNC_1(VAR_2)) {
 case 1:
  return VAR_1;
 case 0:
  return 0;
 default:
  break;
 }
 if (!FUNC_2(VAR_2, "full"))
  return VAR_0;
 else if (!FUNC_2(VAR_2, "short"))
  return VAR_1;
 else if (!FUNC_2(VAR_2, "auto"))
  return FUNC_0();




 return -1;
}
