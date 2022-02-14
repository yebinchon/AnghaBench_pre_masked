
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; char* buf; } ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (struct strbuf*,char const) ;
 int FUNC_2 (struct strbuf*,size_t,size_t) ;

__attribute__((used)) static void FUNC_3(struct strbuf *VAR_0, const char *VAR_1)
{
 size_t VAR_2;
 size_t VAR_3 = VAR_0->len;
 int VAR_4 = 2;

 for (; *VAR_1 && *VAR_1 != '\n'; VAR_1++) {
  if (FUNC_0(*VAR_1)) {
   if (VAR_4 == 1)
    FUNC_1(VAR_0, '-');
   VAR_4 = 0;
   FUNC_1(VAR_0, *VAR_1);
   if (*VAR_1 == '.')
    while (*(VAR_1+1) == '.')
     VAR_1++;
  } else
   VAR_4 |= 1;
 }


 VAR_2 = 0;
 while (VAR_0->len - VAR_2 > VAR_3 &&
  (VAR_0->buf[VAR_0->len - 1 - VAR_2] == '.'
  || VAR_0->buf[VAR_0->len - 1 - VAR_2] == '-'))
  VAR_2++;
 FUNC_2(VAR_0, VAR_0->len - VAR_2, VAR_2);
}
