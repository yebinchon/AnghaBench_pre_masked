
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; int sched_nr; int sched_mask; } ;
struct dn_schk {TYPE_2__ sch; TYPE_1__* fp; int fsk_list; } ;
struct TYPE_7__ {int flags; int fs_nr; int flow_mask; } ;
struct dn_fsk {TYPE_3__ fs; int fsk_mask; int * qht; struct dn_schk* sched; } ;
struct TYPE_8__ {int fsu; } ;
struct TYPE_5__ {int (* new_fsk ) (struct dn_fsk*) ;} ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *,struct dn_fsk*,int ) ;
 int FUNC_3 (int *,struct dn_fsk*,int ,int ) ;
 int FUNC_4 (struct dn_fsk*) ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_5 ;
 int FUNC_7 (struct dn_fsk*) ;

__attribute__((used)) static void
FUNC_8(struct dn_fsk *VAR_6, struct dn_schk *VAR_7)
{
 FUNC_1("remove fs %d from fsunlinked, link to sched %d",
  VAR_6->fs.fs_nr, VAR_7->sch.sched_nr);
 FUNC_3(&VAR_3.fsu, VAR_6, VAR_4, VAR_5);
 VAR_6->sched = VAR_7;
 FUNC_2(&VAR_7->fsk_list, VAR_6, VAR_5);
 if (VAR_7->fp->new_fsk)
  VAR_7->fp->new_fsk(VAR_6);

 VAR_6->fsk_mask = VAR_6->fs.flow_mask;
 if (VAR_6->sched->sch.flags & VAR_0)
  FUNC_5(&VAR_6->sched->sch.sched_mask, &VAR_6->fsk_mask);
 if (VAR_6->qht) {
  FUNC_0("XXX TODO requeue from fs %d to sch %d",
   VAR_6->fs.fs_nr, VAR_7->sch.sched_nr);
  VAR_6->qht = ((void*)0);
 }

 if (FUNC_6(&VAR_6->fsk_mask))
  VAR_6->fs.flags |= VAR_2;
 else
  VAR_6->fs.flags &= ~VAR_2;


 if (VAR_6->fs.flags & VAR_1)
  FUNC_4(VAR_6);
}
