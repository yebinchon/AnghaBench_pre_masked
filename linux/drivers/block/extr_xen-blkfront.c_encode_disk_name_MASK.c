
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *FUNC_0(char *VAR_0, unsigned int VAR_1)
{
 if (VAR_1 >= 26)
  VAR_0 = FUNC_0(VAR_0, VAR_1 / 26 - 1);
 *VAR_0 = 'a' + VAR_1 % 26;
 return VAR_0 + 1;
}
