
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_buffer {int nr_pages; int data_size; scalar_t__ snapshot; } ;
struct TYPE_5__ {int head; struct perf_event* event; } ;
struct pt {TYPE_2__ handle; int handle_nmi; } ;
struct TYPE_4__ {scalar_t__ state; } ;
struct perf_event {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 struct pt_buffer* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct perf_event*) ;
 int VAR_3 ;
 int FUNC_6 (struct pt*) ;
 int FUNC_7 (struct pt_buffer*) ;
 int FUNC_8 (struct pt*) ;
 struct pt* FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct perf_event *VAR_4, int VAR_5)
{
 struct pt *VAR_6 = FUNC_9(&VAR_3);





 FUNC_1(VAR_6->handle_nmi, 0);

 FUNC_5(VAR_4);

 if (VAR_4->hw.state == VAR_2)
  return;

 VAR_4->hw.state = VAR_2;

 if (VAR_5 & VAR_1) {
  struct pt_buffer *VAR_7 = FUNC_4(&VAR_6->handle);

  if (!VAR_7)
   return;

  if (FUNC_0(VAR_6->handle.event != VAR_4))
   return;

  FUNC_7(VAR_7);

  FUNC_6(VAR_6);

  FUNC_8(VAR_6);

  if (VAR_7->snapshot)
   VAR_6->handle.head =
    FUNC_2(&VAR_7->data_size,
        VAR_7->nr_pages << VAR_0);
  FUNC_3(&VAR_6->handle, FUNC_2(&VAR_7->data_size, 0));
 }
}
