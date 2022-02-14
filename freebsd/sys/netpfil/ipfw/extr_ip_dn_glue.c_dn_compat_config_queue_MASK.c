
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dn_flow_set {int max_p; int min_th; int max_th; int w_q; int flags_fs; int weight; int plr; int qsize; int rq_size; int flow_mask; int parent_nr; int fs_nr; } ;
struct dn_pipe8 {struct dn_flow_set fs; } ;
struct dn_pipe7 {struct dn_flow_set fs; } ;
struct dn_fs {int flags; int max_p; int min_th; int max_th; int w_q; int * par; int plr; int qsize; int buckets; int flow_mask; int sched_nr; int fs_nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_1(struct dn_fs *VAR_3, void* VAR_4)
{
 struct dn_pipe7 *VAR_5 = (struct dn_pipe7 *)VAR_4;
 struct dn_pipe8 *VAR_6 = (struct dn_pipe8 *)VAR_4;
 struct dn_flow_set *VAR_7;

 if (VAR_2)
  VAR_7 = &VAR_5->fs;
 else
  VAR_7 = &VAR_6->fs;

 VAR_3->fs_nr = VAR_7->fs_nr;
 VAR_3->sched_nr = VAR_7->parent_nr;
 VAR_3->flow_mask = VAR_7->flow_mask;
 VAR_3->buckets = VAR_7->rq_size;
 VAR_3->qsize = VAR_7->qsize;
 VAR_3->plr = VAR_7->plr;
 VAR_3->par[0] = VAR_7->weight;
 VAR_3->flags = FUNC_0(VAR_7->flags_fs);
 if (VAR_3->flags & VAR_0 || VAR_3->flags & VAR_1) {
  VAR_3->w_q = VAR_7->w_q;
  VAR_3->max_th = VAR_7->max_th;
  VAR_3->min_th = VAR_7->min_th;
  VAR_3->max_p = VAR_7->max_p;
 }

 return 0;
}
