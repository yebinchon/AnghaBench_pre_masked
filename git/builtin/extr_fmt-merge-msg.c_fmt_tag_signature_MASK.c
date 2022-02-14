
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;


 int FUNC_0 (struct strbuf*,char const*,int) ;
 int FUNC_1 (struct strbuf*,int ,int ) ;
 int FUNC_2 (struct strbuf*,char) ;
 int FUNC_3 (struct strbuf*) ;
 char* FUNC_4 (char const*,char*) ;

__attribute__((used)) static void FUNC_5(struct strbuf *VAR_0,
         struct strbuf *VAR_1,
         const char *VAR_2,
         unsigned long VAR_3)
{
 const char *VAR_4 = FUNC_4(VAR_2, "\n\n");
 if (VAR_4) {
  VAR_4 += 2;
  FUNC_0(VAR_0, VAR_4, VAR_2 + VAR_3 - VAR_4);
 }
 FUNC_3(VAR_0);
 if (VAR_1->len) {
  FUNC_2(VAR_0, '\n');
  FUNC_1(VAR_0, VAR_1->buf, VAR_1->len);
 }
}
