
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; int buf; } ;


 int FUNC_0 (int ,int ,size_t) ;

int FUNC_1(const struct strbuf *VAR_0, const struct strbuf *VAR_1)
{
 size_t VAR_2 = VAR_0->len < VAR_1->len ? VAR_0->len: VAR_1->len;
 int VAR_3 = FUNC_0(VAR_0->buf, VAR_1->buf, VAR_2);
 if (VAR_3)
  return VAR_3;
 return VAR_0->len < VAR_1->len ? -1: VAR_0->len != VAR_1->len;
}
