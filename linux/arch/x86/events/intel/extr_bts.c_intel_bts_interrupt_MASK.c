
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct perf_event {int dummy; } ;
struct debug_store {scalar_t__ bts_index; scalar_t__ bts_interrupt_threshold; } ;
struct TYPE_5__ {struct perf_event* event; } ;
struct bts_ctx {TYPE_1__ handle; int state; struct debug_store* ds; } ;
struct bts_buffer {int data_size; int head; scalar_t__ snapshot; } ;
typedef scalar_t__ s64 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (struct bts_buffer*,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_4 (struct bts_ctx*) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 struct bts_buffer* FUNC_7 (TYPE_1__*,struct perf_event*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 struct bts_buffer* FUNC_9 (TYPE_1__*) ;
 struct bts_ctx* FUNC_10 (int *) ;

int FUNC_11(void)
{
 struct debug_store *VAR_4 = FUNC_10(&VAR_3)->ds;
 struct bts_ctx *VAR_5 = FUNC_10(&VAR_2);
 struct perf_event *VAR_6 = VAR_5->handle.event;
 struct bts_buffer *VAR_7;
 s64 VAR_8;
 int VAR_9 = -VAR_1, VAR_10 = 0;





 if (VAR_4 && (VAR_4->bts_index >= VAR_4->bts_interrupt_threshold))
  VAR_10 = 1;





 if (FUNC_0(VAR_5->state) == VAR_0)
  return VAR_10;

 VAR_7 = FUNC_9(&VAR_5->handle);
 if (!VAR_7)
  return VAR_10;






 if (VAR_7->snapshot)
  return 0;

 VAR_8 = FUNC_5(&VAR_7->head);
 FUNC_4(VAR_5);


 if (VAR_8 == FUNC_5(&VAR_7->head))
  return VAR_10;

 FUNC_8(&VAR_5->handle, FUNC_6(&VAR_7->data_size, 0));

 VAR_7 = FUNC_7(&VAR_5->handle, VAR_6);
 if (VAR_7)
  VAR_9 = FUNC_3(VAR_7, &VAR_5->handle);

 if (VAR_9) {
  FUNC_1(VAR_5->state, VAR_0);

  if (VAR_7) {




   FUNC_2();
   FUNC_8(&VAR_5->handle, 0);
  }
 }

 return 1;
}
