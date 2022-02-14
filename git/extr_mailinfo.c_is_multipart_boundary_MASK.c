
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; int buf; } ;
struct mailinfo {struct strbuf** content_top; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct mailinfo *VAR_0, const struct strbuf *VAR_1)
{
 struct strbuf *VAR_2 = *(VAR_0->content_top);

 return ((VAR_2->len <= VAR_1->len) &&
  !FUNC_0(VAR_1->buf, VAR_2->buf, VAR_2->len));
}
