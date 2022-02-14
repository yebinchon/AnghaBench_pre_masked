
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_uverbs_file {int ref; struct ib_uverbs_event_file* async_file; int event_handler; TYPE_1__* device; } ;
struct ib_uverbs_event_file {int is_async; int ref; struct ib_uverbs_file* uverbs_file; int list; scalar_t__ is_closed; int * async_queue; int poll_wait; int event_list; int lock; } ;
struct ib_device {int dummy; } ;
struct file {struct ib_uverbs_event_file* private_data; } ;
struct TYPE_2__ {int lists_mutex; int uverbs_events_file_list; } ;


 int VAR_0 ;
 struct file* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct ib_device*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct file*) ;
 int FUNC_4 (struct ib_uverbs_event_file*) ;
 struct file* FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct file*) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 struct ib_uverbs_event_file* FUNC_13 (int,int ) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int VAR_6 ;

struct file *FUNC_18(struct ib_uverbs_file *VAR_7,
     struct ib_device *VAR_8,
     int VAR_9)
{
 struct ib_uverbs_event_file *VAR_10;
 struct file *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_13(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return FUNC_0(-VAR_0);

 FUNC_11(&VAR_10->ref);
 FUNC_17(&VAR_10->lock);
 FUNC_2(&VAR_10->event_list);
 FUNC_9(&VAR_10->poll_wait);
 VAR_10->uverbs_file = VAR_7;
 FUNC_10(&VAR_10->uverbs_file->ref);
 VAR_10->async_queue = ((void*)0);
 VAR_10->is_closed = 0;






 VAR_11 = FUNC_5(VAR_1, FUNC_6(&VAR_6));
 if (FUNC_3(VAR_11))
  goto err_put_refs;
 VAR_11->private_data = VAR_10;

 FUNC_15(&VAR_7->device->lists_mutex);
 FUNC_14(&VAR_10->list,
        &VAR_7->device->uverbs_events_file_list);
 FUNC_16(&VAR_7->device->lists_mutex);

 if (VAR_9) {
  FUNC_4(VAR_7->async_file);
  VAR_7->async_file = VAR_10;
  FUNC_10(&VAR_7->async_file->ref);
  FUNC_1(&VAR_7->event_handler,
          VAR_8,
          VAR_3);
  VAR_12 = FUNC_8(&VAR_7->event_handler);
  if (VAR_12)
   goto err_put_file;


  VAR_10->is_async = 1;
 }

 return VAR_11;

err_put_file:
 FUNC_7(VAR_11);
 FUNC_12(&VAR_7->async_file->ref, VAR_4);
 VAR_7->async_file = ((void*)0);
 return FUNC_0(VAR_12);

err_put_refs:
 FUNC_12(&VAR_10->uverbs_file->ref, VAR_5);
 FUNC_12(&VAR_10->ref, VAR_4);
 return VAR_11;
}
