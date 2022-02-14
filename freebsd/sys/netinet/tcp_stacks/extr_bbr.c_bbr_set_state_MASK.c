
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct tcpcb {int t_state; } ;
struct TYPE_3__ {int rc_init_rwnd; } ;
struct tcp_bbr {int r_state; int r_substate; TYPE_2__* rc_tp; TYPE_1__ r_ctl; } ;
struct TYPE_4__ {int snd_wnd; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct tcpcb *VAR_8, struct tcp_bbr *VAR_9, uint32_t VAR_10)
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
  VAR_9->r_ctl.rc_init_rwnd = FUNC_0(VAR_10, VAR_9->rc_tp->snd_wnd);
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
