
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tcpopt {int dummy; } ;
struct tcpcb {scalar_t__ t_fb_ptr; } ;
struct TYPE_2__ {int rc_map; struct bbr_sendmap* rc_next; int rc_tmap; int rc_holes_rxt; int rc_rcvtime; } ;
struct tcp_bbr {TYPE_1__ r_ctl; } ;
struct bbr_sendmap {int r_flags; int r_end; int r_start; scalar_t__ r_in_tmap; scalar_t__ r_rtr_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct bbr_sendmap*,int ) ;
 int FUNC_2 (struct tcp_bbr*,struct bbr_sendmap*) ;
 int FUNC_3 (struct tcpcb*,struct tcp_bbr*,struct bbr_sendmap*,struct tcpopt*,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(struct tcpcb *VAR_4, struct tcpopt *VAR_5)
{
 struct tcp_bbr *VAR_6;
 struct bbr_sendmap *VAR_7;
 uint32_t VAR_8;

 VAR_6 = (struct tcp_bbr *)VAR_4->t_fb_ptr;
 VAR_8 = VAR_6->r_ctl.rc_rcvtime;
 VAR_7 = FUNC_0(&VAR_6->r_ctl.rc_map);
 if (VAR_7 && (VAR_7->r_flags & VAR_1)) {
  if ((VAR_7->r_end - VAR_7->r_start) <= 1) {

   VAR_6->r_ctl.rc_holes_rxt -= VAR_7->r_rtr_bytes;
   VAR_7->r_rtr_bytes = 0;
   FUNC_1(&VAR_6->r_ctl.rc_map, VAR_7, VAR_2);
   if (VAR_7->r_in_tmap) {
    FUNC_1(&VAR_6->r_ctl.rc_tmap, VAR_7, VAR_3);
    VAR_7->r_in_tmap = 0;
   }
   if (VAR_6->r_ctl.rc_next == VAR_7) {

    VAR_6->r_ctl.rc_next = FUNC_0(&VAR_6->r_ctl.rc_map);
   }
   if (VAR_5 != ((void*)0))
    FUNC_3(VAR_4, VAR_6, VAR_7, VAR_5, VAR_8, VAR_0, 0);
   FUNC_2(VAR_6, VAR_7);
  } else {

   VAR_7->r_flags &= ~VAR_1;
   VAR_7->r_start++;
  }
 }
}
