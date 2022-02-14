
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char const*) ;

unsigned int FUNC_1(const char *VAR_0, const char *VAR_1, char *VAR_2, unsigned int VAR_3)
{
 const char *VAR_4, *VAR_5;

 if (!VAR_0)
 {
  *VAR_2 = '\0';
  return 0;
 }

 VAR_5 = VAR_0;
 VAR_4 = FUNC_0(VAR_5, VAR_1);
 if (VAR_4 >= VAR_1)
 {
  *VAR_2 = '\0';
  return 0;
 }


 if (*VAR_5 == '"')
  VAR_5++;

 if (*(VAR_4 - 1) == '"')
  VAR_4--;

 VAR_3--;
 if (VAR_3 > VAR_4 - VAR_5)
  VAR_3 = VAR_4 - VAR_5;

 VAR_0 = VAR_5;
 while (VAR_3--)
  *VAR_2++ = *VAR_0++;
 *VAR_2 = '\0';

 return VAR_4 - VAR_5;
}
