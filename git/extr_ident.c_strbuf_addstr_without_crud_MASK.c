
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {unsigned char* buf; size_t len; } ;


 int FUNC_0 (unsigned char) ;
 int FUNC_1 (struct strbuf*,size_t) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(struct strbuf *VAR_0, const char *VAR_1)
{
 size_t VAR_2, VAR_3;
 unsigned char VAR_4;


 while ((VAR_4 = *VAR_1) != 0) {
  if (!FUNC_0(VAR_4))
   break;
  VAR_1++;
 }


 VAR_3 = FUNC_2(VAR_1);
 while (VAR_3 > 0) {
  VAR_4 = VAR_1[VAR_3-1];
  if (!FUNC_0(VAR_4))
   break;
  --VAR_3;
 }







 FUNC_1(VAR_0, VAR_3);
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  VAR_4 = *VAR_1++;
  switch (VAR_4) {
  case '\n': case '<': case '>':
   continue;
  }
  VAR_0->buf[VAR_0->len++] = VAR_4;
 }
 VAR_0->buf[VAR_0->len] = '\0';
}
