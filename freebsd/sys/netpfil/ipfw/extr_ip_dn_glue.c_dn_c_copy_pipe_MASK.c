
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int buckets; int sched_mask; } ;
struct dn_link {int delay; void* link_nr; int burst; int bandwidth; } ;
struct dn_schk {TYPE_2__ sch; struct dn_profile* profile; struct dn_fsk* fs; struct dn_link link; } ;
struct dn_profile {int samples_no; int loss_level; int name; } ;
struct dn_flow_set {int rq_size; int rq_elements; int flags_fs; int max_p; int min_th; int max_th; int w_q; int plr; int qsize; void* parent_nr; int flow_mask; } ;
struct dn_pipe8 {int burst; int samples_no; int loss_level; int name; struct dn_flow_set fs; } ;
struct TYPE_4__ {struct dn_pipe7* sle_next; } ;
struct dn_pipe7 {int delay; void* pipe_nr; int bandwidth; TYPE_1__ next; struct dn_flow_set fs; } ;
struct TYPE_6__ {int flags; int max_p; int w_q; int plr; int qsize; } ;
struct dn_fsk {TYPE_3__ fs; int min_th; int max_th; } ;
struct copy_args {int* start; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ,int) ;

int
FUNC_3(struct dn_schk *VAR_4, struct copy_args *VAR_5, int VAR_6)
{
 struct dn_link *VAR_7 = &VAR_4->link;
 struct dn_fsk *VAR_8 = VAR_4->fs;

 struct dn_pipe7 *VAR_9 = (struct dn_pipe7 *)*VAR_5->start;
 struct dn_pipe8 *VAR_10 = (struct dn_pipe8 *)*VAR_5->start;
 struct dn_flow_set *VAR_11;
 int VAR_12 = 0;

 if (VAR_3) {
  VAR_11 = &VAR_9->fs;
  VAR_12 = sizeof(struct dn_pipe7);
 } else {
  VAR_11 = &VAR_10->fs;
  VAR_12 = sizeof(struct dn_pipe8);
 }


 VAR_9->next.sle_next = (struct dn_pipe7 *)VAR_0;
 VAR_9->bandwidth = VAR_7->bandwidth;
 VAR_9->delay = VAR_7->delay * 1000 / VAR_2;
 VAR_9->pipe_nr = VAR_7->link_nr - VAR_1;

 if (!VAR_3) {
  if (VAR_4->profile) {
   struct dn_profile *VAR_13 = VAR_4->profile;
   FUNC_2(VAR_10->name, VAR_13->name, sizeof(VAR_13->name));
   VAR_10->loss_level = VAR_13->loss_level;
   VAR_10->samples_no = VAR_13->samples_no;
  }
  VAR_10->burst = FUNC_1(VAR_7->burst , 8 * VAR_2);
 }

 VAR_11->flow_mask = VAR_4->sch.sched_mask;
 VAR_11->rq_size = VAR_4->sch.buckets ? VAR_4->sch.buckets : 1;

 VAR_11->parent_nr = VAR_7->link_nr - VAR_1;
 VAR_11->qsize = VAR_8->fs.qsize;
 VAR_11->plr = VAR_8->fs.plr;
 VAR_11->w_q = VAR_8->fs.w_q;
 VAR_11->max_th = VAR_8->max_th;
 VAR_11->min_th = VAR_8->min_th;
 VAR_11->max_p = VAR_8->fs.max_p;
 VAR_11->rq_elements = VAR_6;

 VAR_11->flags_fs = FUNC_0(VAR_8->fs.flags);

 *VAR_5->start += VAR_12;
 return 0;
}
