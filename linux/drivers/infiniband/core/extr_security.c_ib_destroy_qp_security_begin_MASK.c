
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_qp_security {int destroying; int mutex; int error_list_count; int error_comps_pending; TYPE_1__* ports_pkeys; } ;
struct TYPE_2__ {int alt; int main; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ib_qp_security *VAR_0)
{

 if (!VAR_0)
  return;

 FUNC_1(&VAR_0->mutex);




 if (VAR_0->ports_pkeys) {
  FUNC_3(&VAR_0->ports_pkeys->main);
  FUNC_3(&VAR_0->ports_pkeys->alt);
 }





 VAR_0->destroying = 1;




 VAR_0->error_comps_pending = FUNC_0(&VAR_0->error_list_count);

 FUNC_2(&VAR_0->mutex);
}
