
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rc_map; int rc_lost_bytes; int rc_tmap; } ;
struct tcp_bbr {TYPE_1__ r_ctl; } ;
struct bbr_sendmap {scalar_t__ r_dupack; int r_flags; scalar_t__ r_limit_type; scalar_t__ r_start; scalar_t__ r_end; scalar_t__ r_app_limited; scalar_t__ r_in_tmap; scalar_t__ r_rtr_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct bbr_sendmap*,int ) ;
 int FUNC_1 (struct tcp_bbr*,struct bbr_sendmap*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static struct bbr_sendmap *
FUNC_2(struct tcp_bbr *VAR_6,
       struct bbr_sendmap *VAR_7,
       struct bbr_sendmap *VAR_8)
{
 VAR_7->r_end = VAR_8->r_end;
 if (VAR_7->r_dupack < VAR_8->r_dupack)
  VAR_7->r_dupack = VAR_8->r_dupack;
 if (VAR_8->r_rtr_bytes)
  VAR_7->r_rtr_bytes += VAR_8->r_rtr_bytes;
 if (VAR_8->r_in_tmap) {

  FUNC_0(&VAR_6->r_ctl.rc_tmap, VAR_8, VAR_5);
 }
 if (VAR_8->r_app_limited)
  VAR_7->r_app_limited = VAR_8->r_app_limited;

 if (VAR_8->r_flags & VAR_0)
  VAR_7->r_flags |= VAR_0;
 if (VAR_8->r_flags & VAR_3)
  VAR_7->r_flags |= VAR_3;
 if (VAR_8->r_flags & VAR_2)
  VAR_7->r_flags |= VAR_2;
 if (VAR_8->r_flags & VAR_1) {

  VAR_6->r_ctl.rc_lost_bytes -= VAR_8->r_end - VAR_8->r_start;
 }
 FUNC_0(&VAR_6->r_ctl.rc_map, VAR_8, VAR_4);
 if ((VAR_8->r_limit_type == 0) && (VAR_7->r_limit_type != 0)) {

  VAR_8->r_limit_type = VAR_7->r_limit_type;
  VAR_7->r_limit_type = 0;
 }
 FUNC_1(VAR_6, VAR_8);
 return(VAR_7);
}
