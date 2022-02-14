
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_3__ {scalar_t__ current_state; } ;
struct sdma_engine {scalar_t__ descq_head; scalar_t__ descq_tail; scalar_t__ progress_check_head; int err_halt_worker; int tail_lock; int head_lock; TYPE_1__ state; TYPE_2__* dd; } ;
struct TYPE_4__ {unsigned int num_sdma; struct sdma_engine* per_sdma; } ;


 int FUNC_0 (struct sdma_engine*,int ) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int VAR_0 ;
 struct sdma_engine* FUNC_2 (int ,struct timer_list*,int ) ;
 int FUNC_3 (int *) ;
 struct sdma_engine* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_4)
{
 unsigned VAR_5;
 struct sdma_engine *VAR_6 = FUNC_2(VAR_6, VAR_4, VAR_0);

 FUNC_1(VAR_6->dd, "SDE progress check event\n");
 for (VAR_5 = 0; VAR_5 < VAR_6->dd->num_sdma; VAR_5++) {
  struct sdma_engine *VAR_7 = &VAR_6->dd->per_sdma[VAR_5];
  unsigned long VAR_8;


  if (VAR_7 == VAR_6)
   continue;





  FUNC_4(&VAR_7->tail_lock, VAR_8);
  FUNC_6(&VAR_7->head_lock);


  if (VAR_7->state.current_state != VAR_3) {
   FUNC_7(&VAR_7->head_lock);
   FUNC_5(&VAR_7->tail_lock, VAR_8);
   continue;
  }

  if ((VAR_7->descq_head != VAR_7->descq_tail) &&
      (VAR_7->descq_head ==
    VAR_7->progress_check_head))
   FUNC_0(VAR_7,
          VAR_2);
  FUNC_7(&VAR_7->head_lock);
  FUNC_5(&VAR_7->tail_lock, VAR_8);
 }
 FUNC_3(&VAR_6->err_halt_worker);
}
