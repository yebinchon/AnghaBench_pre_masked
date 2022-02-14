
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(const char **VAR_3, size_t *VAR_4, const char *VAR_5)
{
 size_t VAR_6 = 0;
 const char *VAR_7;
 for (VAR_7 = *VAR_3; VAR_7 != VAR_5; VAR_7++) {
  unsigned char VAR_8 = *VAR_7;

  VAR_6 <<= VAR_0;
  VAR_6 += (VAR_8 & VAR_2);
  if (VAR_8 & VAR_1)
   continue;

  *VAR_4 = VAR_6;
  *VAR_3 = VAR_7 + 1;
  return 0;
 }
 return FUNC_0("invalid delta: unexpected end of instructions section");
}
