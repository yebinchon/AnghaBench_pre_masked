
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_queue {unsigned int num_buffers; struct vb2_buffer** bufs; int done_wq; int owned_by_drv_count; int done_list; int queued_list; scalar_t__ uses_qbuf; scalar_t__ uses_requests; scalar_t__ error; scalar_t__ queued_count; scalar_t__ start_streaming_called; scalar_t__ streaming; } ;
struct TYPE_5__ {struct media_request* req; } ;
struct vb2_buffer {scalar_t__ state; unsigned int num_planes; scalar_t__ copied_timestamp; int * request; TYPE_2__ req_obj; scalar_t__ prepared; scalar_t__ synced; TYPE_1__* planes; } ;
struct media_request {int state; int lock; } ;
typedef enum media_request_state { ____Placeholder_media_request_state } media_request_state ;
struct TYPE_4__ {int mem_priv; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct vb2_buffer*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct vb2_buffer*,int ,int ) ;
 int FUNC_6 (struct vb2_queue*,int ,struct vb2_queue*) ;
 int FUNC_7 (struct vb2_buffer*,int ,struct vb2_buffer*) ;
 int VAR_5 ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,struct vb2_buffer*) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 int VAR_6 ;
 int FUNC_14 (struct vb2_buffer*,int ) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(struct vb2_queue *VAR_7)
{
 unsigned int VAR_8;





 if (VAR_7->start_streaming_called)
  FUNC_6(VAR_7, VAR_6, VAR_7);







 if (FUNC_1(FUNC_3(&VAR_7->owned_by_drv_count))) {
  for (VAR_8 = 0; VAR_8 < VAR_7->num_buffers; ++VAR_8)
   if (VAR_7->bufs[VAR_8]->state == VAR_1) {
    FUNC_11("driver bug: stop_streaming operation is leaving buf %p in active state\n",
     VAR_7->bufs[VAR_8]);
    FUNC_14(VAR_7->bufs[VAR_8], VAR_2);
   }

  FUNC_1(FUNC_3(&VAR_7->owned_by_drv_count));
 }

 VAR_7->streaming = 0;
 VAR_7->start_streaming_called = 0;
 VAR_7->queued_count = 0;
 VAR_7->error = 0;
 VAR_7->uses_requests = 0;
 VAR_7->uses_qbuf = 0;




 FUNC_0(&VAR_7->queued_list);




 FUNC_0(&VAR_7->done_list);
 FUNC_4(&VAR_7->owned_by_drv_count, 0);
 FUNC_15(&VAR_7->done_wq);
 for (VAR_8 = 0; VAR_8 < VAR_7->num_buffers; ++VAR_8) {
  struct vb2_buffer *VAR_9 = VAR_7->bufs[VAR_8];
  struct media_request *VAR_10 = VAR_9->req_obj.req;







  if (VAR_10) {
   enum media_request_state VAR_11;
   unsigned long VAR_12;

   FUNC_12(&VAR_10->lock, VAR_12);
   VAR_11 = VAR_10->state;
   FUNC_13(&VAR_10->lock, VAR_12);

   if (VAR_11 == VAR_0)
    FUNC_7(VAR_9, VAR_4, VAR_9);
  }

  if (VAR_9->synced) {
   unsigned int VAR_13;

   for (VAR_13 = 0; VAR_13 < VAR_9->num_planes; ++VAR_13)
    FUNC_5(VAR_9, VAR_5,
      VAR_9->planes[VAR_13].mem_priv);
   VAR_9->synced = 0;
  }

  if (VAR_9->prepared) {
   FUNC_7(VAR_9, VAR_3, VAR_9);
   VAR_9->prepared = 0;
  }
  FUNC_2(VAR_9);

  if (VAR_9->req_obj.req) {
   FUNC_9(&VAR_9->req_obj);
   FUNC_8(&VAR_9->req_obj);
  }
  if (VAR_9->request)
   FUNC_10(VAR_9->request);
  VAR_9->request = ((void*)0);
  VAR_9->copied_timestamp = 0;
 }
}
