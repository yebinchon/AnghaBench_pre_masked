
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct list_head {int dummy; } ;
struct ib_uverbs_file {TYPE_4__* async_file; } ;
struct TYPE_5__ {scalar_t__ reserved; void* event_type; void* element; } ;
struct TYPE_6__ {TYPE_1__ async; } ;
struct ib_uverbs_event {int obj_list; int list; int * counter; TYPE_2__ desc; } ;
typedef void* __u64 ;
struct TYPE_7__ {int async_queue; int poll_wait; int lock; struct list_head event_list; scalar_t__ is_closed; } ;
struct TYPE_8__ {TYPE_3__ ev_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 struct ib_uverbs_event* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ib_uverbs_file *VAR_3,
        __u64 VAR_4, __u64 VAR_5,
        struct list_head *VAR_6,
        u32 *VAR_7)
{
 struct ib_uverbs_event *VAR_8;
 unsigned long VAR_9;

 FUNC_3(&VAR_3->async_file->ev_queue.lock, VAR_9);
 if (VAR_3->async_file->ev_queue.is_closed) {
  FUNC_4(&VAR_3->async_file->ev_queue.lock, VAR_9);
  return;
 }

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_0);
 if (!VAR_8) {
  FUNC_4(&VAR_3->async_file->ev_queue.lock, VAR_9);
  return;
 }

 VAR_8->desc.async.element = VAR_4;
 VAR_8->desc.async.event_type = VAR_5;
 VAR_8->desc.async.reserved = 0;
 VAR_8->counter = VAR_7;

 FUNC_2(&VAR_8->list, &VAR_3->async_file->ev_queue.event_list);
 if (VAR_6)
  FUNC_2(&VAR_8->obj_list, VAR_6);
 FUNC_4(&VAR_3->async_file->ev_queue.lock, VAR_9);

 FUNC_5(&VAR_3->async_file->ev_queue.poll_wait);
 FUNC_0(&VAR_3->async_file->ev_queue.async_queue, VAR_2, VAR_1);
}
