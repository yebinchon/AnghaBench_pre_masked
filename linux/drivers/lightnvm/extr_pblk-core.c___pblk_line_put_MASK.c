
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pblk_line_mgmt {int free_lock; int nr_free_lines; int free_list; } ;
struct pblk_line {scalar_t__ state; int list; int lock; TYPE_1__* w_err_gc; int gc_group; int id; } ;
struct pblk_gc {int pipeline_gc; } ;
struct pblk {int rl; struct pblk_gc gc; struct pblk_line_mgmt l_mg; } ;
struct TYPE_2__ {scalar_t__ has_write_err; scalar_t__ has_gc_err; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct pblk*) ;
 int FUNC_4 (struct pblk*,char*,int ) ;
 int FUNC_5 (struct pblk_line*) ;
 int FUNC_6 (struct pblk*,struct pblk_line*) ;
 int FUNC_7 (int *,struct pblk_line*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct pblk *VAR_3, struct pblk_line *VAR_4)
{
 struct pblk_line_mgmt *VAR_5 = &VAR_3->l_mg;
 struct pblk_gc *VAR_6 = &VAR_3->gc;

 FUNC_9(&VAR_4->lock);
 FUNC_0(VAR_4->state != VAR_2);
 if (VAR_4->w_err_gc->has_gc_err) {
  FUNC_10(&VAR_4->lock);
  FUNC_4(VAR_3, "line %d had errors during GC\n", VAR_4->id);
  FUNC_6(VAR_3, VAR_4);
  VAR_4->w_err_gc->has_gc_err = 0;
  return;
 }

 VAR_4->state = VAR_1;
 FUNC_11(FUNC_3(VAR_3), VAR_4->id,
     VAR_4->state);
 VAR_4->gc_group = VAR_0;
 FUNC_5(VAR_4);

 if (VAR_4->w_err_gc->has_write_err) {
  FUNC_8(&VAR_3->rl);
  VAR_4->w_err_gc->has_write_err = 0;
 }

 FUNC_10(&VAR_4->lock);
 FUNC_1(&VAR_6->pipeline_gc);

 FUNC_9(&VAR_5->free_lock);
 FUNC_2(&VAR_4->list, &VAR_5->free_list);
 VAR_5->nr_free_lines++;
 FUNC_10(&VAR_5->free_lock);

 FUNC_7(&VAR_3->rl, VAR_4);
}
