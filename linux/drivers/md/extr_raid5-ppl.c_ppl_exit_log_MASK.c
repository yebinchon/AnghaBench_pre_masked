
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {struct ppl_conf* log_private; } ;
struct ppl_conf {int dummy; } ;


 int FUNC_0 (struct ppl_conf*) ;

void FUNC_1(struct r5conf *VAR_0)
{
 struct ppl_conf *VAR_1 = VAR_0->log_private;

 if (VAR_1) {
  FUNC_0(VAR_1);
  VAR_0->log_private = ((void*)0);
 }
}
