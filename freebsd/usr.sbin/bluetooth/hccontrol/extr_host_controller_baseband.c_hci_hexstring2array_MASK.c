
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2(char const *VAR_0, uint8_t *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_0) / 2;
 if (VAR_4 > VAR_2)
  VAR_4 = VAR_2;

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  VAR_5 = FUNC_0(VAR_0 + VAR_3 * 2);
  if (VAR_5 < 0)
   return (-1);

  VAR_1[VAR_3] = (VAR_5 & 0xff);
 }

 return (0);
}
