
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const*) ;

__attribute__((used)) static bool FUNC_1(const unsigned char *VAR_0)
{
 static const unsigned char VAR_1[] = { 200, 100, 80, 60, 40, 20, 10 };
 int VAR_2;

 if (VAR_0[0] == 0)
  return 0;

 if (VAR_0[1] == 0)
  return 1;





 if ((VAR_0[0] & 0x0f) >= 0x06 && (VAR_0[1] & 0xaf) == 0x0f &&
     VAR_0[2] < 40)
  return 1;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
  if (VAR_0[2] == VAR_1[VAR_2])
   return 0;

 return 1;
}
