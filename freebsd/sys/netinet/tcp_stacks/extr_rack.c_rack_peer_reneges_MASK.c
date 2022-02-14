
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tcp_seq ;
struct TYPE_2__ {int rack_sf; int rc_mtree; int rc_tmap; int rc_sacked; } ;
struct tcp_rack {TYPE_1__ r_ctl; } ;
struct rack_sendmap {int r_flags; int r_in_tmap; scalar_t__ r_start; scalar_t__ r_end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rack_sendmap* FUNC_0 (int ,int *,struct rack_sendmap*) ;
 int FUNC_1 (int *,struct rack_sendmap*,struct rack_sendmap*,int ) ;
 int FUNC_2 (int *,struct rack_sendmap*,int ) ;
 int FUNC_3 (char*,struct tcp_rack*,struct rack_sendmap*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void inline
FUNC_5(struct tcp_rack *VAR_6, struct rack_sendmap *VAR_7, tcp_seq VAR_8)
{
 struct rack_sendmap *VAR_9;

 VAR_9 = ((void*)0);
 while (VAR_7 && (VAR_7->r_flags & VAR_0)) {

  VAR_6->r_ctl.rc_sacked -= (VAR_7->r_end - VAR_7->r_start);






  VAR_7->r_flags &= ~(VAR_0|VAR_1|VAR_2);

  if (VAR_9 == ((void*)0)) {
   FUNC_2(&VAR_6->r_ctl.rc_tmap, VAR_7, VAR_3);
   VAR_9 = VAR_7;
  } else {
   FUNC_1(&VAR_6->r_ctl.rc_tmap, VAR_9, VAR_7, VAR_3);
   VAR_9 = VAR_7;
  }
  VAR_9->r_in_tmap = 1;
  VAR_7 = FUNC_0(VAR_4, &VAR_6->r_ctl.rc_mtree, VAR_7);
 }




 if (VAR_5)
  FUNC_4(&VAR_6->r_ctl.rack_sf, VAR_8);

}
