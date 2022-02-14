
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;


 int FUNC_0 (struct strbuf*,struct strbuf*) ;
 int FUNC_1 (struct strbuf*) ;
 scalar_t__ FUNC_2 (int ,char) ;

__attribute__((used)) static void FUNC_3(struct strbuf *VAR_0, struct strbuf *VAR_1, struct strbuf *VAR_2)
{
 struct strbuf *VAR_3 = VAR_1;
 if (VAR_1->len < 3 || 60 < VAR_1->len || FUNC_2(VAR_1->buf, '@') ||
  FUNC_2(VAR_1->buf, '<') || FUNC_2(VAR_1->buf, '>'))
  VAR_3 = VAR_2;
 else if (VAR_1 == VAR_0)
  return;
 FUNC_1(VAR_0);
 FUNC_0(VAR_0, VAR_3);
}
