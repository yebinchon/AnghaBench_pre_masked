
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (struct strbuf*,unsigned char) ;
 char* FUNC_2 (struct strbuf*,int *) ;
 scalar_t__ FUNC_3 (char const*,unsigned char) ;

__attribute__((used)) static char *FUNC_4(const char **VAR_0, int VAR_1,
     const char *VAR_2, struct strbuf *VAR_3,
     int VAR_4)
{
 const char *VAR_5 = *VAR_0;

 while (VAR_1) {
  unsigned char VAR_6 = *VAR_5;

  if (!VAR_6)
   break;
  if (VAR_2 && FUNC_3(VAR_2, VAR_6)) {
   VAR_5++;
   VAR_1--;
   break;
  }

  if (VAR_6 == '%' && (VAR_1 < 0 || VAR_1 >= 3)) {
   int VAR_7 = FUNC_0(VAR_5 + 1);
   if (0 < VAR_7) {
    FUNC_1(VAR_3, VAR_7);
    VAR_5 += 3;
    VAR_1 -= 3;
    continue;
   }
  }

  if (VAR_4 && VAR_6 == '+')
   FUNC_1(VAR_3, ' ');
  else
   FUNC_1(VAR_3, VAR_6);
  VAR_5++;
  VAR_1--;
 }
 *VAR_0 = VAR_5;
 return FUNC_2(VAR_3, ((void*)0));
}
