
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int uses_qbuf; int uses_requests; scalar_t__ queued_count; int waiting_for_buffers; scalar_t__ min_buffers_needed; scalar_t__ start_streaming_called; scalar_t__ streaming; int queued_list; scalar_t__ is_output; scalar_t__ requires_requests; struct vb2_buffer** bufs; scalar_t__ error; } ;
struct vb2_buffer {int state; int index; int queued_entry; int prepared; struct media_request* request; int req_obj; } ;
struct media_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int FUNC_0 (struct vb2_buffer*) ;
 int FUNC_1 (struct vb2_buffer*) ;
 int VAR_5 ;
 int FUNC_2 (struct vb2_buffer*,int ,struct vb2_buffer*) ;
 int FUNC_3 (struct vb2_queue*,int ,struct vb2_buffer*,void*) ;
 int VAR_6 ;
 int FUNC_4 (int,char*,...) ;
 int VAR_7 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct media_request*) ;
 int FUNC_7 (struct media_request*) ;
 int FUNC_8 (struct media_request*,int *,struct vb2_queue*,int,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct media_request*) ;
 int FUNC_11 (struct vb2_queue*,struct vb2_buffer*) ;
 int VAR_8 ;
 int FUNC_12 (struct vb2_queue*) ;

int FUNC_13(struct vb2_queue *VAR_9, unsigned int VAR_10, void *VAR_11,
    struct media_request *VAR_12)
{
 struct vb2_buffer *VAR_13;
 int VAR_14;

 if (VAR_9->error) {
  FUNC_4(1, "fatal error occurred on queue\n");
  return -VAR_3;
 }

 VAR_13 = VAR_9->bufs[VAR_10];

 if (!VAR_12 && VAR_13->state != 129 &&
     VAR_9->requires_requests) {
  FUNC_4(1, "qbuf requires a request\n");
  return -VAR_0;
 }

 if ((VAR_12 && VAR_9->uses_qbuf) ||
     (!VAR_12 && VAR_13->state != 129 &&
      VAR_9->uses_requests)) {
  FUNC_4(1, "queue in wrong mode (qbuf vs requests)\n");
  return -VAR_1;
 }

 if (VAR_12) {
  int VAR_15;

  VAR_9->uses_requests = 1;
  if (VAR_13->state != 130) {
   FUNC_4(1, "buffer %d not in dequeued state\n",
    VAR_13->index);
   return -VAR_2;
  }

  if (VAR_9->is_output && !VAR_13->prepared) {
   VAR_15 = FUNC_2(VAR_13, VAR_5, VAR_13);
   if (VAR_15) {
    FUNC_4(1, "buffer validation failed\n");
    return VAR_15;
   }
  }

  FUNC_9(&VAR_13->req_obj);


  VAR_15 = FUNC_7(VAR_12);
  if (VAR_15)
   return VAR_15;
  VAR_15 = FUNC_8(VAR_12, &VAR_8,
      VAR_9, 1, &VAR_13->req_obj);
  FUNC_10(VAR_12);
  if (VAR_15)
   return VAR_15;

  VAR_13->state = 129;
  FUNC_6(VAR_12);
  VAR_13->request = VAR_12;


  if (VAR_11) {
   FUNC_3(VAR_9, VAR_6, VAR_13, VAR_11);
   FUNC_3(VAR_9, VAR_7, VAR_13, VAR_11);
  }

  FUNC_4(2, "qbuf of buffer %d succeeded\n", VAR_13->index);
  return 0;
 }

 if (VAR_13->state != 129)
  VAR_9->uses_qbuf = 1;

 switch (VAR_13->state) {
 case 130:
 case 129:
  if (!VAR_13->prepared) {
   VAR_14 = FUNC_0(VAR_13);
   if (VAR_14)
    return VAR_14;
  }
  break;
 case 128:
  FUNC_4(1, "buffer still being prepared\n");
  return -VAR_2;
 default:
  FUNC_4(1, "invalid buffer state %d\n", VAR_13->state);
  return -VAR_2;
 }





 FUNC_5(&VAR_13->queued_entry, &VAR_9->queued_list);
 VAR_9->queued_count++;
 VAR_9->waiting_for_buffers = 0;
 VAR_13->state = VAR_4;

 if (VAR_11)
  FUNC_3(VAR_9, VAR_6, VAR_13, VAR_11);

 FUNC_11(VAR_9, VAR_13);





 if (VAR_9->start_streaming_called)
  FUNC_1(VAR_13);


 if (VAR_11)
  FUNC_3(VAR_9, VAR_7, VAR_13, VAR_11);







 if (VAR_9->streaming && !VAR_9->start_streaming_called &&
     VAR_9->queued_count >= VAR_9->min_buffers_needed) {
  VAR_14 = FUNC_12(VAR_9);
  if (VAR_14)
   return VAR_14;
 }

 FUNC_4(2, "qbuf of buffer %d succeeded\n", VAR_13->index);
 return 0;
}
