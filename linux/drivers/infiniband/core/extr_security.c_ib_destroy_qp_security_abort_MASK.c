
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_qp_security {int error_comps_pending; int destroying; int mutex; TYPE_1__* ports_pkeys; int error_complete; } ;
struct TYPE_2__ {int alt; int main; } ;


 int FUNC_0 (TYPE_1__*,struct ib_qp_security*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ib_qp_security*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct ib_qp_security *VAR_0)
{
 int VAR_1;
 int VAR_2;


 if (!VAR_0)
  return;





 for (VAR_2 = 0; VAR_2 < VAR_0->error_comps_pending; VAR_2++)
  FUNC_5(&VAR_0->error_complete);

 FUNC_1(&VAR_0->mutex);
 VAR_0->destroying = 0;
 if (VAR_0->ports_pkeys) {
  FUNC_3(&VAR_0->ports_pkeys->main);
  FUNC_3(&VAR_0->ports_pkeys->alt);
 }

 VAR_1 = FUNC_0(VAR_0->ports_pkeys, VAR_0);
 if (VAR_1)
  FUNC_4(VAR_0);

 FUNC_2(&VAR_0->mutex);
}
