
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 char const* VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (struct strbuf*,int) ;
 int FUNC_2 (struct strbuf*,char*,unsigned char) ;
 scalar_t__ FUNC_3 (char const*,int) ;

__attribute__((used)) static int FUNC_4(struct strbuf *VAR_1,
         const char *VAR_2,
         size_t VAR_3,
         const char *VAR_4,
         const char *VAR_5)
{
 while (VAR_3) {
  int VAR_6 = *VAR_2++;
  int VAR_7 = 0;

  VAR_3--;
  if (VAR_6 == '%') {
   if (VAR_3 < 2)
    return 0;
   VAR_6 = FUNC_0(VAR_2);
   if (VAR_6 < 0)
    return 0;
   VAR_2 += 2;
   VAR_3 -= 2;
   VAR_7 = 1;
  }
  if ((unsigned char)VAR_6 <= 0x1F || (unsigned char)VAR_6 >= 0x7F ||
      FUNC_3(VAR_0, VAR_6) ||
      (VAR_4 && FUNC_3(VAR_4, VAR_6)) ||
      (VAR_7 && FUNC_3(VAR_5, VAR_6)))
   FUNC_2(VAR_1, "%%%02X", (unsigned char)VAR_6);
  else
   FUNC_1(VAR_1, VAR_6);
 }

 return 1;
}
