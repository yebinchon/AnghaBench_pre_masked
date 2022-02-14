
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *FUNC_0(char *VAR_0, unsigned long *VAR_1)
{
 unsigned long VAR_2 = *VAR_1;
 while (VAR_2 && *VAR_0 != '\n') {
  VAR_2--;
  VAR_0++;
 }
 *VAR_1 = VAR_2;
 return VAR_0;
}
