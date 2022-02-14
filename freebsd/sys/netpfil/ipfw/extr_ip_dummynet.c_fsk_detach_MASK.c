
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dn_fsk_head {int dummy; } ;
struct TYPE_5__ {int sched_nr; int fs_nr; } ;
struct dn_fsk {TYPE_3__* sched; struct dn_fsk* w_q_lookup; TYPE_1__ fs; } ;
struct TYPE_8__ {struct dn_fsk_head fsu; int fsk_count; } ;
struct TYPE_7__ {TYPE_2__* fp; struct dn_fsk_head fsk_list; } ;
struct TYPE_6__ {int (* free_fsk ) (struct dn_fsk*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ,char*,char*,char*) ;
 int FUNC_1 (struct dn_fsk_head*,struct dn_fsk*,int ) ;
 int FUNC_2 (struct dn_fsk_head*,struct dn_fsk*,int ,int ) ;
 int FUNC_3 (struct dn_fsk*) ;
 int FUNC_4 (struct dn_fsk*,int) ;
 TYPE_4__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct dn_fsk*,int ) ;
 int FUNC_6 (struct dn_fsk*,int) ;
 int VAR_6 ;
 int FUNC_7 (struct dn_fsk*) ;

__attribute__((used)) static void
FUNC_8(struct dn_fsk *VAR_7, int VAR_8)
{
 if (VAR_8 & VAR_0)
  VAR_8 |= VAR_1;
 FUNC_0("fs %d from sched %d flags %s %s %s",
  VAR_7->fs.fs_nr, VAR_7->fs.sched_nr,
  (VAR_8 & VAR_0) ? "DEL_FS":"",
  (VAR_8 & VAR_1) ? "DEL":"",
  (VAR_8 & VAR_2) ? "DET":"");
 if (VAR_8 & VAR_2) {
  struct dn_fsk_head *VAR_9;
  VAR_9 = VAR_7->sched ? &VAR_7->sched->fsk_list : &VAR_4.fsu;
  FUNC_2(VAR_9, VAR_7, VAR_5, VAR_6);
 }



 if (VAR_7->w_q_lookup)
  FUNC_5(VAR_7->w_q_lookup, VAR_3);
 VAR_7->w_q_lookup = ((void*)0);
 FUNC_6(VAR_7, VAR_8);




 if (VAR_7->sched && VAR_7->sched->fp->free_fsk)
  VAR_7->sched->fp->free_fsk(VAR_7);
 VAR_7->sched = ((void*)0);
 if (VAR_8 & VAR_0) {
  FUNC_4(VAR_7, sizeof(*VAR_7));
  FUNC_5(VAR_7, VAR_3);
  VAR_4.fsk_count--;
 } else {
  FUNC_1(&VAR_4.fsu, VAR_7, VAR_6);
 }
}
