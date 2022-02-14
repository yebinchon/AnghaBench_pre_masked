
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int buckets; int flags; int * par; int sched_nr; int flow_mask; int max_p; int w_q; int plr; int qsize; int fs_nr; } ;
struct dn_fsk {TYPE_2__ fs; int min_th; int max_th; } ;
struct TYPE_3__ {struct dn_flow_set* sle_next; } ;
struct dn_flow_set {int rq_elements; int rq_size; int flags_fs; int weight; int parent_nr; int flow_mask; int max_p; int min_th; int max_th; int w_q; int plr; int qsize; int fs_nr; TYPE_1__ next; } ;
struct copy_args {int* start; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

int
FUNC_1(struct dn_fsk *VAR_1, struct copy_args *VAR_2, int VAR_3)
{
 struct dn_flow_set *VAR_4 = (struct dn_flow_set *)*VAR_2->start;

 VAR_4->next.sle_next = (struct dn_flow_set *)VAR_0;
 VAR_4->fs_nr = VAR_1->fs.fs_nr;
 VAR_4->qsize = VAR_1->fs.qsize;
 VAR_4->plr = VAR_1->fs.plr;
 VAR_4->w_q = VAR_1->fs.w_q;
 VAR_4->max_th = VAR_1->max_th;
 VAR_4->min_th = VAR_1->min_th;
 VAR_4->max_p = VAR_1->fs.max_p;
 VAR_4->flow_mask = VAR_1->fs.flow_mask;
 VAR_4->rq_elements = VAR_3;
 VAR_4->rq_size = (VAR_1->fs.buckets ? VAR_1->fs.buckets : 1);
 VAR_4->parent_nr = VAR_1->fs.sched_nr;
 VAR_4->weight = VAR_1->fs.par[0];

 VAR_4->flags_fs = FUNC_0(VAR_1->fs.flags);
 *VAR_2->start += sizeof(struct dn_flow_set);
 return 0;
}
