
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 size_t FUNC_2 (char const*) ;

void FUNC_3(const char **VAR_4,
      int *VAR_5,
      unsigned *VAR_6,
      int *VAR_7)
{
 const char *VAR_8 = *VAR_4;
 size_t VAR_9, VAR_10;

 *VAR_6 = 0;
 if (*VAR_8 == '!') {
  *VAR_6 |= VAR_2;
  VAR_8++;
 }
 VAR_10 = FUNC_2(VAR_8);
 if (VAR_10 && VAR_8[VAR_10 - 1] == '/') {
  VAR_10--;
  *VAR_6 |= VAR_1;
 }
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  if (VAR_8[VAR_9] == '/')
   break;
 }
 if (VAR_9 == VAR_10)
  *VAR_6 |= VAR_3;
 *VAR_7 = FUNC_1(VAR_8);





 if (*VAR_7 > VAR_10)
  *VAR_7 = VAR_10;
 if (*VAR_8 == '*' && FUNC_0(VAR_8 + 1))
  *VAR_6 |= VAR_0;
 *VAR_4 = VAR_8;
 *VAR_5 = VAR_10;
}
