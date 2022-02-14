
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fault {int tag; int state; int flags; int address; int pasid; TYPE_1__* dev_state; } ;
struct TYPE_2__ {int (* inv_ppr_cb ) (int ,int ,int ,int ) ;int pdev; } ;





 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct fault *VAR_3)
{
 int VAR_4;

 if (!VAR_3->dev_state->inv_ppr_cb) {
  FUNC_1(VAR_3->state, VAR_3->tag, VAR_1);
  return;
 }

 VAR_4 = VAR_3->dev_state->inv_ppr_cb(VAR_3->dev_state->pdev,
           VAR_3->pasid,
           VAR_3->address,
           VAR_3->flags);
 switch (VAR_4) {
 case 128:
  FUNC_1(VAR_3->state, VAR_3->tag, VAR_2);
  break;
 case 129:
  FUNC_1(VAR_3->state, VAR_3->tag, VAR_1);
  break;
 case 130:
  FUNC_1(VAR_3->state, VAR_3->tag, VAR_0);
  break;
 default:
  FUNC_0();
 }
}
