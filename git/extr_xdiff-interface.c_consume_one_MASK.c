
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdiff_emit_state {int consume_callback_data; int (* line_fn ) (int ,char*,unsigned long) ;} ;


 char* FUNC_0 (char*,char,unsigned long) ;
 int FUNC_1 (int ,char*,unsigned long) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, char *VAR_1, unsigned long VAR_2)
{
 struct xdiff_emit_state *VAR_3 = VAR_0;
 char *VAR_4;
 while (VAR_2) {
  unsigned long VAR_5;
  VAR_4 = FUNC_0(VAR_1, '\n', VAR_2);
  VAR_5 = (VAR_4 == ((void*)0)) ? VAR_2 : (VAR_4 - VAR_1 + 1);
  VAR_3->line_fn(VAR_3->consume_callback_data, VAR_1, VAR_5);
  VAR_2 -= VAR_5;
  VAR_1 += VAR_5;
 }
}
