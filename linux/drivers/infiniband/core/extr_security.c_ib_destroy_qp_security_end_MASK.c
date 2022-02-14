
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_qp_security {int error_comps_pending; int error_complete; } ;


 int FUNC_0 (struct ib_qp_security*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ib_qp_security *VAR_0)
{
 int VAR_1;


 if (!VAR_0)
  return;






 for (VAR_1 = 0; VAR_1 < VAR_0->error_comps_pending; VAR_1++)
  FUNC_1(&VAR_0->error_complete);

 FUNC_0(VAR_0);
}
