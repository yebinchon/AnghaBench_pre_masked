
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int t_state; } ;
struct tcp_rack {int r_state; int r_substate; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct tcpcb*,struct tcp_rack*) ;

__attribute__((used)) static void
FUNC_1(struct tcpcb *VAR_8, struct tcp_rack *VAR_9)
{
 switch (VAR_8->t_state) {
 case 129:
  VAR_9->r_state = 129;
  VAR_9->r_substate = VAR_7;
  break;
 case 130:
  VAR_9->r_state = 130;
  VAR_9->r_substate = VAR_6;
  break;
 case 135:
  FUNC_0(VAR_8, VAR_9);
  VAR_9->r_state = 135;
  VAR_9->r_substate = VAR_2;
  break;
 case 137:
  VAR_9->r_state = 137;
  VAR_9->r_substate = VAR_0;
  break;
 case 134:
  VAR_9->r_state = 134;
  VAR_9->r_substate = VAR_3;
  break;
 case 136:
  VAR_9->r_state = 136;
  VAR_9->r_substate = VAR_1;
  break;
 case 132:
  VAR_9->r_state = 132;
  VAR_9->r_substate = VAR_5;
  break;
 case 133:
  VAR_9->r_state = 133;
  VAR_9->r_substate = VAR_4;
  break;
 case 131:
 case 138:
 case 128:
 default:
  break;
 };
}
