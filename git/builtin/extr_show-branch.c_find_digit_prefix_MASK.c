
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *FUNC_0(const char *VAR_0, int *VAR_1)
{
 const char *VAR_2;
 int VAR_3;
 char VAR_4;

 for (VAR_2 = VAR_0, VAR_3 = 0;
      '0' <= (VAR_4 = *VAR_2) && VAR_4 <= '9';
      VAR_2++)
  VAR_3 = VAR_3 * 10 + VAR_4 - '0';
 *VAR_1 = VAR_3;
 return VAR_2;
}
