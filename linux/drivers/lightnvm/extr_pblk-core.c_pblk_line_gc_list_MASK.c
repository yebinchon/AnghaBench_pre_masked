
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct pblk_line_mgmt {struct list_head corrupt_list; struct list_head gc_empty_list; struct list_head gc_low_list; struct list_head gc_mid_list; struct list_head gc_high_list; struct list_head gc_full_list; struct list_head gc_werr_list; } ;
struct pblk_line_meta {int high_thrs; int mid_thrs; } ;
struct pblk_line {scalar_t__ gc_group; int sec_in_line; int id; int state; TYPE_1__* w_err_gc; int lock; int * vsc; } ;
struct pblk {int min_write_pgs_data; int min_write_pgs; int rl; struct pblk_line_mgmt l_mg; struct pblk_line_meta lm; } ;
struct TYPE_2__ {scalar_t__ has_write_err; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pblk*) ;
 int FUNC_3 (struct pblk*,char*,int ,int,int,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;

struct list_head *FUNC_6(struct pblk *VAR_8, struct pblk_line *VAR_9)
{
 struct pblk_line_meta *VAR_10 = &VAR_8->lm;
 struct pblk_line_mgmt *VAR_11 = &VAR_8->l_mg;
 struct list_head *VAR_12 = ((void*)0);
 int VAR_13 = (FUNC_0(*VAR_9->vsc) / VAR_8->min_write_pgs_data)
   * (VAR_8->min_write_pgs - VAR_8->min_write_pgs_data);
 int VAR_14 = FUNC_0(*VAR_9->vsc) + VAR_13;

 FUNC_1(&VAR_9->lock);

 if (VAR_9->w_err_gc->has_write_err) {
  if (VAR_9->gc_group != VAR_6) {
   VAR_9->gc_group = VAR_6;
   VAR_12 = &VAR_11->gc_werr_list;
   FUNC_4(&VAR_8->rl);
  }
 } else if (!VAR_14) {
  if (VAR_9->gc_group != VAR_1) {
   VAR_9->gc_group = VAR_1;
   VAR_12 = &VAR_11->gc_full_list;
  }
 } else if (VAR_14 < VAR_10->high_thrs) {
  if (VAR_9->gc_group != VAR_2) {
   VAR_9->gc_group = VAR_2;
   VAR_12 = &VAR_11->gc_high_list;
  }
 } else if (VAR_14 < VAR_10->mid_thrs) {
  if (VAR_9->gc_group != VAR_4) {
   VAR_9->gc_group = VAR_4;
   VAR_12 = &VAR_11->gc_mid_list;
  }
 } else if (VAR_14 < VAR_9->sec_in_line) {
  if (VAR_9->gc_group != VAR_3) {
   VAR_9->gc_group = VAR_3;
   VAR_12 = &VAR_11->gc_low_list;
  }
 } else if (VAR_14 == VAR_9->sec_in_line) {
  if (VAR_9->gc_group != VAR_0) {
   VAR_9->gc_group = VAR_0;
   VAR_12 = &VAR_11->gc_empty_list;
  }
 } else {
  VAR_9->state = VAR_7;
  FUNC_5(FUNC_2(VAR_8), VAR_9->id,
     VAR_9->state);

  VAR_9->gc_group = VAR_5;
  VAR_12 = &VAR_11->corrupt_list;
  FUNC_3(VAR_8, "corrupted vsc for line %d, vsc:%d (%d/%d/%d)\n",
      VAR_9->id, VAR_14,
      VAR_9->sec_in_line,
      VAR_10->high_thrs, VAR_10->mid_thrs);
 }

 return VAR_12;
}
