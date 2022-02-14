
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w6692_hw {int state; int name; } ;
struct dchannel {int state; int l1; struct w6692_hw* hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ,int,...) ;

__attribute__((used)) static void
FUNC_2(struct dchannel *VAR_9)
{
 struct w6692_hw *VAR_10 = VAR_9->hw;

 switch (VAR_10->state) {
 case 135:
  VAR_9->state = 0;
  FUNC_0(VAR_9->l1, VAR_4);
  break;
 case 131:
  VAR_9->state = 3;
  FUNC_0(VAR_9->l1, VAR_1);
  break;
 case 129:
  VAR_9->state = 3;
  FUNC_0(VAR_9->l1, VAR_2);
  break;
 case 130:
  VAR_9->state = 4;
  FUNC_0(VAR_9->l1, VAR_3);
  break;
 case 128:
  if (VAR_9->state <= 5) {
   VAR_9->state = 5;
   FUNC_0(VAR_9->l1, VAR_0);
  } else {
   VAR_9->state = 8;
   FUNC_0(VAR_9->l1, VAR_8);
  }
  break;
 case 132:
  VAR_9->state = 6;
  FUNC_0(VAR_9->l1, VAR_5);
  break;
 case 133:
  VAR_9->state = 7;
  FUNC_0(VAR_9->l1, VAR_7);
  break;
 case 134:
  VAR_9->state = 7;
  FUNC_0(VAR_9->l1, VAR_6);
  break;
 default:
  FUNC_1("%s: TE unknown state %02x dch state %02x\n",
    VAR_10->name, VAR_10->state, VAR_9->state);
  break;
 }
 FUNC_1("%s: TE newstate %02x\n", VAR_10->name, VAR_9->state);
}
