
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipfw_flow_id {int dummy; } ;
struct TYPE_2__ {scalar_t__ subtype; } ;
struct dn_sch {int sched_nr; int flags; int sched_mask; scalar_t__ buckets; TYPE_1__ oid; } ;
struct dn_pipe8 {int burst; } ;
struct dn_pipe7 {int pipe_nr; int delay; int bandwidth; } ;
struct dn_link {int link_nr; int burst; int delay; int bandwidth; } ;
struct dn_fs {int fs_nr; int sched_nr; int flags; int flow_mask; scalar_t__ buckets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct dn_fs*,void*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct dn_sch *VAR_3, struct dn_link *VAR_4,
        struct dn_fs *VAR_5, void* VAR_6)
{
 struct dn_pipe7 *VAR_7 = (struct dn_pipe7 *)VAR_6;
 struct dn_pipe8 *VAR_8 = (struct dn_pipe8 *)VAR_6;
 int VAR_9 = VAR_7->pipe_nr;

 VAR_3->sched_nr = VAR_9;
 VAR_3->oid.subtype = 0;
 VAR_4->link_nr = VAR_9;
 VAR_5->fs_nr = VAR_9 + 2*VAR_1;
 VAR_5->sched_nr = VAR_9 + VAR_1;


 VAR_4->bandwidth = VAR_7->bandwidth;
 VAR_4->delay = VAR_7->delay;
 if (!VAR_2) {

  VAR_4->burst = VAR_8->burst;
 }


 FUNC_1(VAR_5, VAR_6);
 VAR_5->fs_nr = VAR_9 + 2*VAR_1;
 VAR_5->sched_nr = VAR_9 + VAR_1;


 VAR_3->buckets = VAR_5->buckets;
 VAR_5->buckets = 0;
 if (VAR_5->flags & VAR_0) {
  VAR_3->flags |= VAR_0;
  VAR_5->flags &= ~VAR_0;
  VAR_3->sched_mask = VAR_5->flow_mask;
  FUNC_0(&VAR_5->flow_mask, sizeof(struct ipfw_flow_id));
 }

 return 0;
}
