
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (char const*,char*) ;

long FUNC_1(const char *VAR_3)
{
 if (!VAR_3)
  return -1;
 else if (!FUNC_0(VAR_3, "myers") || !FUNC_0(VAR_3, "default"))
  return 0;
 else if (!FUNC_0(VAR_3, "minimal"))
  return VAR_1;
 else if (!FUNC_0(VAR_3, "patience"))
  return VAR_2;
 else if (!FUNC_0(VAR_3, "histogram"))
  return VAR_0;




 return -1;
}
