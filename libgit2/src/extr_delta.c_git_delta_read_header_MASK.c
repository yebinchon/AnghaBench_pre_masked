
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t*,unsigned char const**,unsigned char const*) ;

int FUNC_1(
 size_t *VAR_0,
 size_t *VAR_1,
 const unsigned char *VAR_2,
 size_t VAR_3)
{
 const unsigned char *VAR_4 = VAR_2 + VAR_3;
 if ((FUNC_0(VAR_0, &VAR_2, VAR_4) < 0) ||
  (FUNC_0(VAR_1, &VAR_2, VAR_4) < 0))
  return -1;
 return 0;
}
