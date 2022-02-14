
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pt_buffer {int output_off; int cur_idx; int cur; int snapshot; } ;
struct TYPE_6__ {int head; } ;
struct pt {TYPE_2__ handle; int handle_nmi; } ;
struct hw_perf_event {scalar_t__ state; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct TYPE_5__ {int table; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 struct pt_buffer* FUNC_1 (TYPE_2__*,struct perf_event*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (struct pt_buffer*,TYPE_2__*) ;
 int FUNC_4 (struct pt_buffer*,int ) ;
 int FUNC_5 (struct perf_event*) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_1 ;
 struct pt* FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct perf_event *VAR_2, int VAR_3)
{
 struct hw_perf_event *VAR_4 = &VAR_2->hw;
 struct pt *VAR_5 = FUNC_7(&VAR_1);
 struct pt_buffer *VAR_6;

 VAR_6 = FUNC_1(&VAR_5->handle, VAR_2);
 if (!VAR_6)
  goto fail_stop;

 FUNC_4(VAR_6, VAR_5->handle.head);
 if (!VAR_6->snapshot) {
  if (FUNC_3(VAR_6, &VAR_5->handle))
   goto fail_end_stop;
 }

 FUNC_0(VAR_5->handle_nmi, 1);
 VAR_4->state = 0;

 FUNC_6(FUNC_8(VAR_6->cur)->table, VAR_6->cur_idx,
    VAR_6->output_off);
 FUNC_5(VAR_2);

 return;

fail_end_stop:
 FUNC_2(&VAR_5->handle, 0);
fail_stop:
 VAR_4->state = VAR_0;
}
