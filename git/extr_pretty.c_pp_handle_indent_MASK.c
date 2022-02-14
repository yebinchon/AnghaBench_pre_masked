
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct pretty_print_context {scalar_t__ expand_tabs_in_log; } ;


 int FUNC_0 (struct strbuf*,char const*,int) ;
 int FUNC_1 (struct strbuf*,scalar_t__,char const*,int) ;
 int FUNC_2 (struct strbuf*,char,int) ;

__attribute__((used)) static void FUNC_3(struct pretty_print_context *VAR_0,
        struct strbuf *VAR_1, int VAR_2,
        const char *VAR_3, int VAR_4)
{
 FUNC_2(VAR_1, ' ', VAR_2);
 if (VAR_0->expand_tabs_in_log)
  FUNC_1(VAR_1, VAR_0->expand_tabs_in_log, VAR_3, VAR_4);
 else
  FUNC_0(VAR_1, VAR_3, VAR_4);
}
