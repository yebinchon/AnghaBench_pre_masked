
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (struct strbuf*,int) ;
 int FUNC_2 (struct strbuf*,int ) ;
 struct strbuf* FUNC_3 (int) ;

__attribute__((used)) static struct strbuf *FUNC_4(const struct strbuf *VAR_0, int VAR_1)
{
 const char *VAR_2 = VAR_0->buf;
 int VAR_3;
 struct strbuf *VAR_4 = FUNC_3(sizeof(struct strbuf));
 FUNC_2(VAR_4, VAR_0->len);

 while ((VAR_3 = *VAR_2++) != 0) {
  if (VAR_3 == '=') {
   int VAR_5, VAR_6 = *VAR_2;
   if (VAR_6 == '\n' || !VAR_6)
    break;
   VAR_5 = FUNC_0(VAR_2);
   if (VAR_5 >= 0) {
    FUNC_1(VAR_4, VAR_5);
    VAR_2 += 2;
    continue;
   }

  }
  if (VAR_1 && VAR_3 == '_')
   VAR_3 = 0x20;
  FUNC_1(VAR_4, VAR_3);
 }
 return VAR_4;
}
