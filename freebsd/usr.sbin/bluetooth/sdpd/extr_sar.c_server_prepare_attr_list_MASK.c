
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;
typedef int provider_p ;
typedef int int32_t ;


 int VAR_0 ;


 int FUNC_0 (int,int const*) ;
 int FUNC_1 (int,int const*) ;
 int FUNC_2 (int,int const*) ;
 int FUNC_3 (int ,int const*) ;
 int FUNC_4 (int const,int,int const*,int const* const) ;

int32_t
FUNC_5(provider_p const VAR_1,
  uint8_t const *VAR_2, uint8_t const * const VAR_3,
  uint8_t *VAR_4, uint8_t const * const VAR_5)
{
 uint8_t *VAR_6 = VAR_4 + 3;
 int32_t VAR_7, VAR_8, VAR_9, VAR_10;

 if (VAR_6 > VAR_5)
  return (-1);

 while (VAR_2 < VAR_3) {
  FUNC_1(VAR_7, VAR_2);

  switch (VAR_7) {
  case 129:
   if (VAR_2 + 2 > VAR_3)
    return (-1);

   FUNC_0(VAR_9, VAR_2);
   VAR_8 = VAR_9;
   break;

  case 128:
   if (VAR_2 + 4 > VAR_3)
    return (-1);

   FUNC_0(VAR_9, VAR_2);
   FUNC_0(VAR_8, VAR_2);
   break;

  default:
   return (-1);

  }

  for (; VAR_9 <= VAR_8; VAR_9 ++) {
   VAR_10 = FUNC_4(VAR_1, VAR_9, VAR_6, VAR_5);
   if (VAR_10 < 0)
    return (-1);

   VAR_6 += VAR_10;
  }
 }

 VAR_10 = VAR_6 - VAR_4;


 FUNC_3(VAR_0, VAR_4);
 FUNC_2(VAR_10 - 3, VAR_4);

 return (VAR_10);
}
