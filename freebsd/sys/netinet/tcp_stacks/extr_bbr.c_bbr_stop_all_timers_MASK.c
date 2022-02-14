
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {scalar_t__ t_fb_ptr; } ;
struct tcp_bbr {int rc_in_persist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct tcpcb*,int ) ;
 int FUNC_1 (struct tcpcb*,int ) ;

__attribute__((used)) static void
FUNC_2(struct tcpcb *VAR_4)
{
 struct tcp_bbr *VAR_5;




 if (FUNC_0(VAR_4, VAR_2)) {

  VAR_5 = (struct tcp_bbr *)VAR_4->t_fb_ptr;
  VAR_5->rc_in_persist = 1;
 }
 FUNC_1(VAR_4, VAR_2);
 FUNC_1(VAR_4, VAR_3);
 FUNC_1(VAR_4, VAR_1);
 FUNC_1(VAR_4, VAR_0);
}
