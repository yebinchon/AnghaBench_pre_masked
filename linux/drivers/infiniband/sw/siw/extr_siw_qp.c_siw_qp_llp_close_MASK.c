
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t state; int * sk; } ;
struct TYPE_6__ {int tx_suspend; } ;
struct TYPE_5__ {int rx_suspend; } ;
struct siw_qp {TYPE_3__ attrs; int state_lock; int * cep; TYPE_2__ tx_ctx; TYPE_1__ rx_stream; } ;
struct TYPE_8__ {int wr_status; } ;



 void* VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct siw_qp*,char*,int ) ;
 int * VAR_2 ;
 int FUNC_3 (struct siw_qp*) ;
 int FUNC_4 (struct siw_qp*) ;
 TYPE_4__* FUNC_5 (struct siw_qp*) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct siw_qp *VAR_3)
{
 FUNC_2(VAR_3, "enter llp close, state = %s\n",
     VAR_2[VAR_3->attrs.state]);

 FUNC_0(&VAR_3->state_lock);

 VAR_3->rx_stream.rx_suspend = 1;
 VAR_3->tx_ctx.tx_suspend = 1;
 VAR_3->attrs.sk = ((void*)0);

 switch (VAR_3->attrs.state) {
 case 129:
 case 130:
 case 131:
 case 128:
  VAR_3->attrs.state = VAR_0;
  break;






 case 132:
  if (FUNC_5(VAR_3)->wr_status == VAR_1)
   VAR_3->attrs.state = VAR_0;
  else
   VAR_3->attrs.state = 131;
  break;

 default:
  FUNC_2(VAR_3, "llp close: no state transition needed: %s\n",
      VAR_2[VAR_3->attrs.state]);
  break;
 }
 FUNC_4(VAR_3);
 FUNC_3(VAR_3);




 if (VAR_3->cep) {
  FUNC_1(VAR_3->cep);
  VAR_3->cep = ((void*)0);
 }

 FUNC_6(&VAR_3->state_lock);

 FUNC_2(VAR_3, "llp close exit: state %s\n",
     VAR_2[VAR_3->attrs.state]);
}
