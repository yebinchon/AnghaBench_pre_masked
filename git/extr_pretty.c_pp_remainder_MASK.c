
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct pretty_print_context {scalar_t__ fmt; scalar_t__ expand_tabs_in_log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,int*) ;
 scalar_t__ FUNC_2 (char const*,int) ;
 int FUNC_3 (struct pretty_print_context*,struct strbuf*,int,char const*,int) ;
 int FUNC_4 (struct strbuf*,char const*,int) ;
 int FUNC_5 (struct strbuf*,scalar_t__,char const*,int) ;
 int FUNC_6 (struct strbuf*,char) ;
 int FUNC_7 (struct strbuf*,int) ;

void FUNC_8(struct pretty_print_context *VAR_2,
    const char **VAR_3,
    struct strbuf *VAR_4,
    int VAR_5)
{
 int VAR_6 = 1;
 for (;;) {
  const char *VAR_7 = *VAR_3;
  int VAR_8 = FUNC_0(VAR_7);
  *VAR_3 += VAR_8;

  if (!VAR_8)
   break;

  if (FUNC_1(VAR_7, &VAR_8)) {
   if (VAR_6)
    continue;
   if (VAR_2->fmt == VAR_1)
    break;
  }
  VAR_6 = 0;

  FUNC_7(VAR_4, VAR_8 + VAR_5 + 20);
  if (VAR_5)
   FUNC_3(VAR_2, VAR_4, VAR_5, VAR_7, VAR_8);
  else if (VAR_2->expand_tabs_in_log)
   FUNC_5(VAR_4, VAR_2->expand_tabs_in_log,
          VAR_7, VAR_8);
  else {
   if (VAR_2->fmt == VAR_0 &&
     FUNC_2(VAR_7, VAR_8))
    FUNC_6(VAR_4, '>');

   FUNC_4(VAR_4, VAR_7, VAR_8);
  }
  FUNC_6(VAR_4, '\n');
 }
}
