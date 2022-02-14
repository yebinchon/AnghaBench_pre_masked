
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ current_state; } ;
struct sdma_engine {int tail_lock; int head_lock; TYPE_1__ state; } ;
typedef enum sdma_events { ____Placeholder_sdma_events } sdma_events ;


 int FUNC_0 (struct sdma_engine*,int) ;
 int FUNC_1 (struct sdma_engine*,int ) ;
 int FUNC_2 (struct sdma_engine*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct sdma_engine *VAR_1, enum sdma_events VAR_2)
{
 unsigned long VAR_3;

 FUNC_3(&VAR_1->tail_lock, VAR_3);
 FUNC_5(&VAR_1->head_lock);

 FUNC_0(VAR_1, VAR_2);

 if (VAR_1->state.current_state == VAR_0)
  FUNC_1(VAR_1, FUNC_2(VAR_1));

 FUNC_6(&VAR_1->head_lock);
 FUNC_4(&VAR_1->tail_lock, VAR_3);
}
