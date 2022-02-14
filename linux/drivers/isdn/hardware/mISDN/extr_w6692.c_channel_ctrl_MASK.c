
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int l1; } ;
struct w6692_hw {int name; TYPE_1__ dch; } ;
struct mISDN_ctrl_req {int op; int p1; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct w6692_hw *VAR_2, struct mISDN_ctrl_req *VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_3->op) {
 case 129:
  VAR_3->op = 128;
  break;
 case 128:
  VAR_4 = FUNC_0(VAR_2->dch.l1, VAR_1 | (VAR_3->p1 & 0xff));
  break;
 default:
  FUNC_1("%s: unknown CTRL OP %x\n", VAR_2->name, VAR_3->op);
  VAR_4 = -VAR_0;
  break;
 }
 return VAR_4;
}
