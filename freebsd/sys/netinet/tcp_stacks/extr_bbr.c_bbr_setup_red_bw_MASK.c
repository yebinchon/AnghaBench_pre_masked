
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int red_bw; int rc_bbr_cur_del_rate; int rc_delrate; } ;
struct tcp_bbr {TYPE_1__ r_ctl; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct tcp_bbr*,int ) ;

__attribute__((used)) static void
FUNC_2(struct tcp_bbr *VAR_0, uint32_t VAR_1)
{
 VAR_0->r_ctl.red_bw = FUNC_0(&VAR_0->r_ctl.rc_delrate);

 if (VAR_0->r_ctl.red_bw > VAR_0->r_ctl.rc_bbr_cur_del_rate)
  VAR_0->r_ctl.red_bw = VAR_0->r_ctl.rc_bbr_cur_del_rate;
 if (VAR_0->r_ctl.red_bw < (FUNC_0(&VAR_0->r_ctl.rc_delrate) / 2))
  VAR_0->r_ctl.red_bw = FUNC_0(&VAR_0->r_ctl.rc_delrate) / 2;
 FUNC_1(VAR_0, VAR_1);
}
