
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* ctrl ) (TYPE_1__*,int ,int) ;} ;
struct sfax_hw {int name; TYPE_1__ isac; } ;
struct mISDN_ctrl_req {int op; int channel; int p1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct sfax_hw *VAR_3, struct mISDN_ctrl_req *VAR_4)
{
 int VAR_5 = 0;

 switch (VAR_4->op) {
 case 130:
  VAR_4->op = 128 | 129;
  break;
 case 128:

  if (VAR_4->channel < 0 || VAR_4->channel > 3) {
   VAR_5 = -VAR_0;
   break;
  }
  VAR_5 = VAR_3->isac.ctrl(&VAR_3->isac, VAR_1, VAR_4->channel);
  break;
 case 129:
  VAR_5 = VAR_3->isac.ctrl(&VAR_3->isac, VAR_2, VAR_4->p1);
  break;
 default:
  FUNC_0("%s: unknown Op %x\n", VAR_3->name, VAR_4->op);
  VAR_5 = -VAR_0;
  break;
 }
 return VAR_5;
}
