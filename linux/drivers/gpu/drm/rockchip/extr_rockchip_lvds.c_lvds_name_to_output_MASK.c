
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static inline int FUNC_1(const char *VAR_4)
{
 if (FUNC_0(VAR_4, "rgb", 3) == 0)
  return VAR_2;
 else if (FUNC_0(VAR_4, "lvds", 4) == 0)
  return VAR_1;
 else if (FUNC_0(VAR_4, "duallvds", 8) == 0)
  return VAR_0;

 return -VAR_3;
}
