
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char const*) ;
 char* FUNC_1 (char const*,char const*) ;

unsigned int FUNC_2(const char *VAR_0, const char *VAR_1, const char **VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = 0;

 for (VAR_0 = FUNC_0(VAR_0, VAR_1); VAR_0; VAR_0 = FUNC_1(VAR_0, VAR_1))
 {
  if (VAR_2 && VAR_3)
  {
   *VAR_2++ = VAR_0;
   VAR_3--;
  }
  VAR_4++;
 }

 return VAR_4;
}
