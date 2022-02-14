
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct ref_formatting_state {TYPE_1__* stack; } ;
struct TYPE_2__ {struct strbuf output; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (struct strbuf*,char const) ;

__attribute__((used)) static void FUNC_2(const char *VAR_0, const char *VAR_1, struct ref_formatting_state *VAR_2)
{
 struct strbuf *VAR_3 = &VAR_2->stack->output;

 while (*VAR_0 && (!VAR_1 || VAR_0 < VAR_1)) {
  if (*VAR_0 == '%') {
   if (VAR_0[1] == '%')
    VAR_0++;
   else {
    int VAR_4 = FUNC_0(VAR_0 + 1);
    if (0 <= VAR_4) {
     FUNC_1(VAR_3, VAR_4);
     VAR_0 += 3;
     continue;
    }
   }
  }
  FUNC_1(VAR_3, *VAR_0);
  VAR_0++;
 }
}
