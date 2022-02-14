
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct siw_qp_attrs {int state; } ;
struct TYPE_3__ {int state; } ;
struct siw_qp {TYPE_1__ attrs; } ;
struct TYPE_4__ {int wr_status; } ;



 int VAR_0 ;
 int FUNC_0 (struct siw_qp*) ;
 int FUNC_1 (struct siw_qp*) ;
 TYPE_2__* FUNC_2 (struct siw_qp*) ;

__attribute__((used)) static void FUNC_3(struct siw_qp *VAR_1,
           struct siw_qp_attrs *VAR_2)
{
 switch (VAR_2->state) {
 case 128:
  FUNC_0(VAR_1);
  VAR_1->attrs.state = 128;

  if (FUNC_2(VAR_1)->wr_status != VAR_0)
   FUNC_1(VAR_1);
  break;

 default:
  break;
 }
}
