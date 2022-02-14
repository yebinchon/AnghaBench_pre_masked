
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rc_mtree; int rc_tmap; } ;
struct tcp_rack {TYPE_1__ r_ctl; } ;
struct rack_sendmap {scalar_t__ r_dupack; int r_flags; scalar_t__ r_limit_type; scalar_t__ r_in_tmap; scalar_t__ r_rtr_bytes; int r_end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rack_sendmap* FUNC_0 (int ,int *,struct rack_sendmap*) ;
 int FUNC_1 (int *,struct rack_sendmap*,int ) ;
 int FUNC_2 (char*,struct tcp_rack*,struct rack_sendmap*,struct rack_sendmap*) ;
 int VAR_3 ;
 int FUNC_3 (struct tcp_rack*,struct rack_sendmap*) ;
 int VAR_4 ;

__attribute__((used)) static struct rack_sendmap *
FUNC_4(struct tcp_rack *VAR_5,
        struct rack_sendmap *VAR_6,
        struct rack_sendmap *VAR_7)
{
 struct rack_sendmap *VAR_8;

 VAR_6->r_end = VAR_7->r_end;
 if (VAR_6->r_dupack < VAR_7->r_dupack)
  VAR_6->r_dupack = VAR_7->r_dupack;
 if (VAR_7->r_rtr_bytes)
  VAR_6->r_rtr_bytes += VAR_7->r_rtr_bytes;
 if (VAR_7->r_in_tmap) {

  FUNC_1(&VAR_5->r_ctl.rc_tmap, VAR_7, VAR_3);
  VAR_7->r_in_tmap = 0;
 }

 if (VAR_7->r_flags & VAR_0)
  VAR_6->r_flags |= VAR_0;
 if (VAR_7->r_flags & VAR_2)
  VAR_6->r_flags |= VAR_2;
 if (VAR_7->r_flags & VAR_1)
  VAR_6->r_flags |= VAR_1;
 VAR_8 = FUNC_0(VAR_4, &VAR_5->r_ctl.rc_mtree, VAR_7);






 if ((VAR_7->r_limit_type == 0) && (VAR_6->r_limit_type != 0)) {

  VAR_7->r_limit_type = VAR_6->r_limit_type;
  VAR_6->r_limit_type = 0;
 }
 FUNC_3(VAR_5, VAR_7);
 return(VAR_6);
}
