
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned long FUNC_0(const char *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2 = 0;
 while (VAR_1--) {
  VAR_2++;
  if (*VAR_0++ == '\n')
   break;
 }
 return VAR_2;
}
