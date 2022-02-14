
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; char const* buf; } ;


 int FUNC_0 (char const) ;
 char* FUNC_1 (char const*,char,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char const*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(const struct strbuf *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 const char *VAR_5;


 for (VAR_3 = VAR_2; VAR_3 < VAR_1->len; VAR_3++) {
  VAR_5 = FUNC_1(VAR_1->buf + VAR_3, '\n', VAR_1->len - VAR_3);
  if (VAR_5)
   VAR_4 = VAR_5 - VAR_1->buf;
  else
   VAR_4 = VAR_1->len;

  if (FUNC_3(VAR_0) <= VAR_4 - VAR_3 &&
      FUNC_2(VAR_1->buf + VAR_3, VAR_0)) {
   VAR_3 = VAR_4;
   continue;
  }
  while (VAR_3 < VAR_4)
   if (!FUNC_0(VAR_1->buf[VAR_3++]))
    return 0;
 }

 return 1;
}
