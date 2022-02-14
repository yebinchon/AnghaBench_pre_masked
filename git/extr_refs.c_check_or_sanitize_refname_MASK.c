
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int*,struct strbuf*) ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*,char) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, int VAR_2,
         struct strbuf *VAR_3)
{
 int VAR_4, VAR_5 = 0;

 if (!FUNC_3(VAR_1, "@")) {

  if (VAR_3)
   FUNC_1(VAR_3, '-');
  else
   return -1;
 }

 while (1) {
  if (VAR_3 && VAR_3->len)
   FUNC_2(VAR_3, '/');


  VAR_4 = FUNC_0(VAR_1, &VAR_2,
       VAR_3);
  if (VAR_3 && VAR_4 == 0)
   ;
  else if (VAR_4 <= 0)
   return -1;

  VAR_5++;
  if (VAR_1[VAR_4] == '\0')
   break;

  VAR_1 += VAR_4 + 1;
 }

 if (VAR_1[VAR_4 - 1] == '.') {

  if (VAR_3)
   ;
  else
   return -1;
 }
 if (!(VAR_2 & VAR_0) && VAR_5 < 2)
  return -1;
 return 0;
}
