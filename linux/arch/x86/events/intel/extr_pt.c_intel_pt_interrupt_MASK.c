
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pt_buffer {int output_off; int cur_idx; int cur; int data_size; } ;
struct TYPE_9__ {int head; struct perf_event* event; } ;
struct pt {TYPE_3__ handle; int handle_nmi; } ;
struct TYPE_7__ {int state; } ;
struct perf_event {TYPE_1__ hw; } ;
struct TYPE_8__ {int table; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 struct pt_buffer* FUNC_2 (TYPE_3__*,struct perf_event*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 struct pt_buffer* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct pt_buffer*,TYPE_3__*) ;
 int FUNC_6 (struct pt_buffer*,int ) ;
 int FUNC_7 (struct perf_event*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct perf_event*) ;
 int VAR_1 ;
 int FUNC_10 (struct pt*) ;
 int FUNC_11 (struct pt_buffer*) ;
 int FUNC_12 (struct pt*) ;
 struct pt* FUNC_13 (int *) ;
 TYPE_2__* FUNC_14 (int ) ;

void FUNC_15(void)
{
 struct pt *VAR_2 = FUNC_13(&VAR_1);
 struct pt_buffer *VAR_3;
 struct perf_event *VAR_4 = VAR_2->handle.event;






 if (!FUNC_0(VAR_2->handle_nmi))
  return;

 if (!VAR_4)
  return;

 FUNC_9(VAR_4);

 VAR_3 = FUNC_4(&VAR_2->handle);
 if (!VAR_3)
  return;

 FUNC_11(VAR_3);

 FUNC_10(VAR_2);

 FUNC_12(VAR_2);

 FUNC_3(&VAR_2->handle, FUNC_1(&VAR_3->data_size, 0));

 if (!VAR_4->hw.state) {
  int VAR_5;

  VAR_3 = FUNC_2(&VAR_2->handle, VAR_4);
  if (!VAR_3) {
   VAR_4->hw.state = VAR_0;
   return;
  }

  FUNC_6(VAR_3, VAR_2->handle.head);

  VAR_5 = FUNC_5(VAR_3, &VAR_2->handle);
  if (VAR_5) {
   FUNC_3(&VAR_2->handle, 0);
   return;
  }

  FUNC_8(FUNC_14(VAR_3->cur)->table, VAR_3->cur_idx,
     VAR_3->output_off);
  FUNC_7(VAR_4);
 }
}
