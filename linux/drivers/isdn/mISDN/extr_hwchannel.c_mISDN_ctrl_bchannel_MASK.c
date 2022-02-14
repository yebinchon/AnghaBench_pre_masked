
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mISDN_ctrl_req {int op; int p1; int p2; } ;
struct bchannel {int dropcnt; int next_maxlen; int next_minlen; int minlen; int maxlen; int Flags; int fill; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

int
FUNC_4(struct bchannel *VAR_5, struct mISDN_ctrl_req *VAR_6)
{
 int VAR_7 = 0;

 switch (VAR_6->op) {
 case 130:
  VAR_6->op = 129 | 131 |
    128;
  break;
 case 131:
  if (VAR_6->p1) {
   FUNC_0(VAR_5->fill, VAR_6->p2 & 0xff, VAR_3);
   FUNC_3(VAR_1, &VAR_5->Flags);
  } else {
   FUNC_2(VAR_1, &VAR_5->Flags);
  }
  break;
 case 128:

  VAR_6->p2 = VAR_5->dropcnt;
  if (VAR_6->p1)
   FUNC_3(VAR_2, &VAR_5->Flags);
  else
   FUNC_2(VAR_2, &VAR_5->Flags);
  VAR_5->dropcnt = 0;
  break;
 case 129:
  if (VAR_6->p2 > VAR_4)
   VAR_5->next_maxlen = VAR_6->p2;
  if (VAR_6->p1 > VAR_4)
   VAR_5->next_minlen = VAR_6->p1;

  VAR_6->p1 = VAR_5->minlen;
  VAR_6->p2 = VAR_5->maxlen;
  break;
 default:
  FUNC_1("mISDN unhandled control %x operation\n", VAR_6->op);
  VAR_7 = -VAR_0;
  break;
 }
 return VAR_7;
}
