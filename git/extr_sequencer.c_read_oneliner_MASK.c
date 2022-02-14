
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; char* buf; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (struct strbuf*,char const*,int ) ;
 int FUNC_3 (int ,char const*) ;

__attribute__((used)) static int FUNC_4(struct strbuf *VAR_0,
 const char *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_0->len;

 if (!FUNC_1(VAR_1))
  return 0;

 if (FUNC_2(VAR_0, VAR_1, 0) < 0) {
  FUNC_3(FUNC_0("could not read '%s'"), VAR_1);
  return 0;
 }

 if (VAR_0->len > VAR_3 && VAR_0->buf[VAR_0->len - 1] == '\n') {
  if (--VAR_0->len > VAR_3 && VAR_0->buf[VAR_0->len - 1] == '\r')
   --VAR_0->len;
  VAR_0->buf[VAR_0->len] = '\0';
 }

 if (VAR_2 && VAR_0->len == VAR_3)
  return 0;

 return 1;
}
