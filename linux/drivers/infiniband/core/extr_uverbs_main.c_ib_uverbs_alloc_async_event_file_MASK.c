
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_uverbs_file {int ref; int event_handler; struct ib_uverbs_async_event_file* async_file; TYPE_1__* device; } ;
struct ib_uverbs_async_event_file {int ref; struct ib_uverbs_file* uverbs_file; int list; int ev_queue; } ;
struct ib_device {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int lists_mutex; int uverbs_events_file_list; } ;


 int VAR_0 ;
 struct file* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct ib_device*,int ) ;
 scalar_t__ FUNC_2 (struct file*) ;
 int VAR_2 ;
 int FUNC_3 (struct ib_uverbs_async_event_file*) ;
 struct file* FUNC_4 (char*,int *,struct ib_uverbs_async_event_file*,int ) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 struct ib_uverbs_async_event_file* FUNC_10 (int,int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_6 ;

struct file *FUNC_14(struct ib_uverbs_file *VAR_7,
           struct ib_device *VAR_8)
{
 struct ib_uverbs_async_event_file *VAR_9;
 struct file *VAR_10;

 VAR_9 = FUNC_10(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 FUNC_6(&VAR_9->ev_queue);
 VAR_9->uverbs_file = VAR_7;
 FUNC_7(&VAR_9->uverbs_file->ref);
 FUNC_8(&VAR_9->ref);
 VAR_10 = FUNC_4("[infinibandevent]", &VAR_6,
      VAR_9, VAR_2);
 if (FUNC_2(VAR_10))
  goto err_put_refs;

 FUNC_12(&VAR_7->device->lists_mutex);
 FUNC_11(&VAR_9->list,
        &VAR_7->device->uverbs_events_file_list);
 FUNC_13(&VAR_7->device->lists_mutex);

 FUNC_3(VAR_7->async_file);
 VAR_7->async_file = VAR_9;
 FUNC_7(&VAR_7->async_file->ref);
 FUNC_1(&VAR_7->event_handler,
         VAR_8,
         VAR_3);
 FUNC_5(&VAR_7->event_handler);


 return VAR_10;

err_put_refs:
 FUNC_9(&VAR_9->uverbs_file->ref, VAR_5);
 FUNC_9(&VAR_9->ref, VAR_4);
 return VAR_10;
}
