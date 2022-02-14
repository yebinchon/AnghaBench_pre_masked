
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ state; } ;
struct perf_event {TYPE_3__ hw; } ;
struct cpu_hw_events {TYPE_2__* ds; } ;
struct TYPE_4__ {int bts_interrupt_threshold; int bts_absolute_maximum; int bts_buffer_base; } ;
struct bts_ctx {int handle; TYPE_1__ ds_back; } ;
struct bts_buffer {int dummy; } ;
struct TYPE_5__ {int bts_interrupt_threshold; int bts_absolute_maximum; int bts_buffer_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct perf_event*) ;
 scalar_t__ FUNC_1 (struct bts_buffer*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct bts_buffer* FUNC_2 (int *,struct perf_event*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct perf_event*) ;
 void* FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct perf_event *VAR_3, int VAR_4)
{
 struct cpu_hw_events *VAR_5 = FUNC_5(&VAR_2);
 struct bts_ctx *VAR_6 = FUNC_5(&VAR_1);
 struct bts_buffer *VAR_7;

 VAR_7 = FUNC_2(&VAR_6->handle, VAR_3);
 if (!VAR_7)
  goto fail_stop;

 if (FUNC_1(VAR_7, &VAR_6->handle))
  goto fail_end_stop;

 VAR_6->ds_back.bts_buffer_base = VAR_5->ds->bts_buffer_base;
 VAR_6->ds_back.bts_absolute_maximum = VAR_5->ds->bts_absolute_maximum;
 VAR_6->ds_back.bts_interrupt_threshold = VAR_5->ds->bts_interrupt_threshold;

 FUNC_4(VAR_3);
 VAR_3->hw.state = 0;

 FUNC_0(VAR_3);

 return;

fail_end_stop:
 FUNC_3(&VAR_6->handle, 0);

fail_stop:
 VAR_3->hw.state = VAR_0;
}
