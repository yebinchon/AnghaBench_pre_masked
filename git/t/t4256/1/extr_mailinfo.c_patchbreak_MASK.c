
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;


 int FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static inline int FUNC_2(const struct strbuf *VAR_0)
{
 size_t VAR_1;


 if (FUNC_1(VAR_0->buf, "diff -"))
  return 1;


 if (FUNC_1(VAR_0->buf, "Index: "))
  return 1;





 if (VAR_0->len < 4)
  return 0;

 if (FUNC_1(VAR_0->buf, "---")) {

  if (VAR_0->buf[3] == ' ' && !FUNC_0(VAR_0->buf[4]))
   return 1;

  for (VAR_1 = 3; VAR_1 < VAR_0->len; VAR_1++) {
   unsigned char VAR_2 = VAR_0->buf[VAR_1];
   if (VAR_2 == '\n')
    return 1;
   if (!FUNC_0(VAR_2))
    break;
  }
  return 0;
 }
 return 0;
}
