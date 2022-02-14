
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmid_read {int first; int evtid; struct rdt_domain* d; } ;
struct rdt_domain {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct rmid_read*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int,struct rmid_read*) ;

__attribute__((used)) static void FUNC_5(struct rdt_domain *VAR_2, int VAR_3)
{
 struct rmid_read VAR_4;

 VAR_4.first = 0;
 VAR_4.d = VAR_2;





 if (FUNC_3()) {
  VAR_4.evtid = VAR_1;
  FUNC_0(VAR_3, &VAR_4);
 }
 if (FUNC_2()) {
  VAR_4.evtid = VAR_0;






  if (!FUNC_1(((void*)0)))
   FUNC_0(VAR_3, &VAR_4);
  else
   FUNC_4(VAR_3, &VAR_4);
 }
}
