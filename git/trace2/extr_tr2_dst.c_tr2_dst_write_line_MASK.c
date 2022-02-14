
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tr2_dst {int sysenv_var; } ;
struct strbuf {int len; int buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct strbuf*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tr2_dst*) ;
 int FUNC_3 (struct tr2_dst*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,int ) ;
 scalar_t__ FUNC_7 (int,int ,int ) ;

void FUNC_8(struct tr2_dst *VAR_1, struct strbuf *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_1);

 FUNC_0(VAR_2);
 if (FUNC_7(VAR_3, VAR_2->buf, VAR_2->len) >= 0)
  return;

 if (FUNC_4())
  FUNC_6("unable to write trace to '%s': %s",
   FUNC_5(VAR_1->sysenv_var),
   FUNC_1(VAR_0));
 FUNC_3(VAR_1);
}
