
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pblk_line_mgmt {int gc_lock; struct list_head** gc_lists; } ;
struct pblk_line {scalar_t__ state; int list; int lock; int id; } ;
struct pblk_gc {int read_inflight_gc; int r_lock; int r_list; } ;
struct TYPE_2__ {int rb_state; } ;
struct pblk {TYPE_1__ rl; struct pblk_gc gc; struct pblk_line_mgmt l_mg; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pblk*) ;
 int FUNC_6 (struct pblk*) ;
 struct pblk_line* FUNC_7 (struct pblk*,struct list_head*) ;
 int FUNC_8 (struct pblk_gc*) ;
 int FUNC_9 (struct pblk_gc*,TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_13(struct pblk *VAR_4)
{
 struct pblk_line_mgmt *VAR_5 = &VAR_4->l_mg;
 struct pblk_gc *VAR_6 = &VAR_4->gc;
 struct pblk_line *VAR_7;
 struct list_head *VAR_8;
 bool VAR_9;
 int VAR_10, VAR_11 = 0, VAR_12 = 0;

 FUNC_6(VAR_4);

 VAR_9 = FUNC_9(&VAR_4->gc, &VAR_4->rl);
 if (!VAR_9 || (FUNC_2(&VAR_6->read_inflight_gc) >= VAR_0))
  return;

next_gc_group:
 VAR_8 = VAR_5->gc_lists[VAR_11++];

 do {
  FUNC_10(&VAR_5->gc_lock);

  VAR_7 = FUNC_7(VAR_4, VAR_8);
  if (!VAR_7) {
   FUNC_11(&VAR_5->gc_lock);
   break;
  }

  FUNC_10(&VAR_7->lock);
  FUNC_0(VAR_7->state != VAR_2);
  VAR_7->state = VAR_3;
  FUNC_12(FUNC_5(VAR_4), VAR_7->id,
     VAR_7->state);
  FUNC_11(&VAR_7->lock);

  FUNC_4(&VAR_7->list);
  FUNC_11(&VAR_5->gc_lock);

  FUNC_10(&VAR_6->r_lock);
  FUNC_3(&VAR_7->list, &VAR_6->r_list);
  FUNC_11(&VAR_6->r_lock);

  VAR_10 = FUNC_1(&VAR_6->read_inflight_gc);
  FUNC_8(VAR_6);

  VAR_12 = 1;


  VAR_9 = FUNC_9(&VAR_4->gc, &VAR_4->rl);
  if (!VAR_9 || VAR_10 >= VAR_0)
   break;
 } while (1);

 if (!VAR_12 && VAR_4->rl.rb_state > VAR_11 &&
      VAR_11 < VAR_1)
  goto next_gc_group;
}
