
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (unsigned char const*,unsigned char const*) ;
 int FUNC_1 (int const) ;

int FUNC_2(const unsigned char *VAR_0, const uint32_t *VAR_1,
   const unsigned char *VAR_2, size_t VAR_3, uint32_t *VAR_4)
{
 uint32_t VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_1[*VAR_0]);
 VAR_6 = ((*VAR_0 == 0x0) ? 0 : FUNC_1(VAR_1[*VAR_0 - 1]));

 while (VAR_6 < VAR_5) {
  unsigned VAR_7 = VAR_6 + (VAR_5 - VAR_6) / 2;
  int VAR_8 = FUNC_0(VAR_2 + VAR_7 * VAR_3, VAR_0);

  if (!VAR_8) {
   if (VAR_4)
    *VAR_4 = VAR_7;
   return 1;
  }
  if (VAR_8 > 0)
   VAR_5 = VAR_7;
  else
   VAR_6 = VAR_7 + 1;
 }

 if (VAR_4)
  *VAR_4 = VAR_6;
 return 0;
}
