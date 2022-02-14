
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(const char *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_0[VAR_1]; VAR_1++)
  if (VAR_0[VAR_1] & 0x80)
   return 1;
 return 0;
}
