
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; } ;
struct format_commit_context {size_t width; size_t indent1; size_t indent2; scalar_t__ wrap_start; } ;


 int FUNC_0 (struct strbuf*,scalar_t__,size_t,size_t,size_t) ;

__attribute__((used)) static void FUNC_1(struct strbuf *VAR_0,
    struct format_commit_context *VAR_1,
    size_t VAR_2, size_t VAR_3,
    size_t VAR_4)
{
 if (VAR_1->width == VAR_2 && VAR_1->indent1 == VAR_3 &&
     VAR_1->indent2 == VAR_4)
  return;
 if (VAR_1->wrap_start < VAR_0->len)
  FUNC_0(VAR_0, VAR_1->wrap_start, VAR_1->width, VAR_1->indent1, VAR_1->indent2);
 VAR_1->wrap_start = VAR_0->len;
 VAR_1->width = VAR_2;
 VAR_1->indent1 = VAR_3;
 VAR_1->indent2 = VAR_4;
}
