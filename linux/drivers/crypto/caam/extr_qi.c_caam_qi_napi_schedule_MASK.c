
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qman_portal {int dummy; } ;
struct caam_napi {int irqtask; struct qman_portal* p; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qman_portal*,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct qman_portal *VAR_1, struct caam_napi *VAR_2)
{





 if (FUNC_4(FUNC_0() || !FUNC_1())) {

  FUNC_3(VAR_1, VAR_0);
  VAR_2->p = VAR_1;
  FUNC_2(&VAR_2->irqtask);
  return 1;
 }
 return 0;
}
