
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int dummy; } ;
struct strbuf {char* buf; size_t len; scalar_t__ alloc; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,char const*,int) ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*,char*,int) ;
 int FUNC_3 (struct strbuf*,char*) ;
 int FUNC_4 (struct strbuf*,size_t) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (struct strbuf*,size_t) ;
 char* FUNC_7 (char const*,char) ;
 size_t FUNC_8 (char*,scalar_t__,char const*,struct tm const*) ;

void FUNC_9(struct strbuf *VAR_1, const char *VAR_2, const struct tm *VAR_3,
       int VAR_4, int VAR_5)
{
 struct strbuf VAR_6 = VAR_0;
 size_t VAR_7 = 128;
 size_t VAR_8;

 if (!*VAR_2)
  return;





 for (;;) {
  const char *VAR_9 = FUNC_7(VAR_2, '%');
  FUNC_0(&VAR_6, VAR_2, VAR_9 - VAR_2);
  if (!*VAR_9)
   break;
  VAR_2 = VAR_9 + 1;
  switch (*VAR_2) {
  case '%':
   FUNC_3(&VAR_6, "%%");
   VAR_2++;
   break;
  case 'z':
   FUNC_2(&VAR_6, "%+05d", VAR_4);
   VAR_2++;
   break;
  case 'Z':
   if (VAR_5) {
    VAR_2++;
    break;
   }

  default:
   FUNC_1(&VAR_6, '%');
  }
 }
 VAR_2 = VAR_6.buf;

 FUNC_4(VAR_1, VAR_7);
 VAR_8 = FUNC_8(VAR_1->buf + VAR_1->len, VAR_1->alloc - VAR_1->len, VAR_2, VAR_3);

 if (!VAR_8) {







  FUNC_1(&VAR_6, ' ');
  while (!VAR_8) {
   VAR_7 *= 2;
   FUNC_4(VAR_1, VAR_7);
   VAR_8 = FUNC_8(VAR_1->buf + VAR_1->len, VAR_1->alloc - VAR_1->len,
           VAR_6.buf, VAR_3);
  }
  VAR_8--;
 }
 FUNC_5(&VAR_6);
 FUNC_6(VAR_1, VAR_1->len + VAR_8);
}
