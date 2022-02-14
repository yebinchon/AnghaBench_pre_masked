
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct TYPE_2__ {int subsection_case_sensitive; scalar_t__ eof; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct strbuf*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct strbuf*,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct strbuf *VAR_1)
{
 VAR_0->subsection_case_sensitive = 1;
 for (;;) {
  int VAR_2 = FUNC_1();
  if (VAR_0->eof)
   return -1;
  if (VAR_2 == ']')
   return 0;
  if (FUNC_3(VAR_2))
   return FUNC_0(VAR_1, VAR_2);
  if (!FUNC_2(VAR_2) && VAR_2 != '.')
   return -1;
  FUNC_4(VAR_1, FUNC_5(VAR_2));
 }
}
