
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int state; } ;
struct perf_event {TYPE_1__ hw; } ;
struct cpu_hw_events {TYPE_2__* ds; } ;
struct TYPE_8__ {int bts_interrupt_threshold; int bts_absolute_maximum; int bts_buffer_base; } ;
struct TYPE_9__ {int head; } ;
struct bts_ctx {TYPE_3__ ds_back; TYPE_4__ handle; int state; } ;
struct bts_buffer {int nr_pages; int data_size; scalar_t__ snapshot; } ;
struct TYPE_7__ {int bts_interrupt_threshold; int bts_absolute_maximum; int bts_buffer_base; int bts_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct perf_event*,int) ;
 int VAR_5 ;
 int FUNC_2 (struct bts_ctx*) ;
 int VAR_6 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 struct bts_buffer* FUNC_5 (TYPE_4__*) ;
 void* FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct perf_event *VAR_7, int VAR_8)
{
 struct cpu_hw_events *VAR_9 = FUNC_6(&VAR_6);
 struct bts_ctx *VAR_10 = FUNC_6(&VAR_5);
 struct bts_buffer *VAR_11 = ((void*)0);
 int VAR_12 = FUNC_0(VAR_10->state);

 if (VAR_12 == VAR_0)
  FUNC_1(VAR_7, VAR_1);

 if (VAR_12 != VAR_1)
  VAR_11 = FUNC_5(&VAR_10->handle);

 VAR_7->hw.state |= VAR_4;

 if (VAR_8 & VAR_3) {
  FUNC_2(VAR_10);

  if (VAR_11) {
   if (VAR_11->snapshot)
    VAR_10->handle.head =
     FUNC_3(&VAR_11->data_size,
         VAR_11->nr_pages << VAR_2);
   FUNC_4(&VAR_10->handle,
                       FUNC_3(&VAR_11->data_size, 0));
  }

  VAR_9->ds->bts_index = VAR_10->ds_back.bts_buffer_base;
  VAR_9->ds->bts_buffer_base = VAR_10->ds_back.bts_buffer_base;
  VAR_9->ds->bts_absolute_maximum = VAR_10->ds_back.bts_absolute_maximum;
  VAR_9->ds->bts_interrupt_threshold = VAR_10->ds_back.bts_interrupt_threshold;
 }
}
