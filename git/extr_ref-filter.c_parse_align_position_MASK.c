
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int align_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static align_type FUNC_1(const char *VAR_3)
{
 if (!FUNC_0(VAR_3, "right"))
  return VAR_2;
 else if (!FUNC_0(VAR_3, "middle"))
  return VAR_1;
 else if (!FUNC_0(VAR_3, "left"))
  return VAR_0;
 return -1;
}
