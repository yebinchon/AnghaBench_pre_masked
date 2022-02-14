
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; int len; } ;
struct ident_split {int date_begin; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct ident_split*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ident_split *VAR_0, const struct strbuf *VAR_1)
{
 if (FUNC_1(VAR_0, VAR_1->buf, VAR_1->len) || !VAR_0->date_begin)
  FUNC_0("unable to parse our own ident: %s", VAR_1->buf);
}
