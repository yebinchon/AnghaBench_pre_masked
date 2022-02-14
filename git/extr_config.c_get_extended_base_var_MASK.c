
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct TYPE_2__ {int linenr; scalar_t__ subsection_case_sensitive; } ;


 TYPE_1__* VAR_0 ;
 char FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct strbuf*,int) ;

__attribute__((used)) static int FUNC_3(struct strbuf *VAR_1, int VAR_2)
{
 VAR_0->subsection_case_sensitive = 0;
 do {
  if (VAR_2 == '\n')
   goto error_incomplete_line;
  VAR_2 = FUNC_0();
 } while (FUNC_1(VAR_2));


 if (VAR_2 != '"')
  return -1;
 FUNC_2(VAR_1, '.');

 for (;;) {
  int VAR_3 = FUNC_0();
  if (VAR_3 == '\n')
   goto error_incomplete_line;
  if (VAR_3 == '"')
   break;
  if (VAR_3 == '\\') {
   VAR_3 = FUNC_0();
   if (VAR_3 == '\n')
    goto error_incomplete_line;
  }
  FUNC_2(VAR_1, VAR_3);
 }


 if (FUNC_0() != ']')
  return -1;
 return 0;
error_incomplete_line:
 VAR_0->linenr--;
 return -1;
}
