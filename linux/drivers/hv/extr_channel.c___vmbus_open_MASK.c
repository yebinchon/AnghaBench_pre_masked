
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_6__ {int msgtype; } ;
struct vmbus_channel_open_channel {size_t downstream_ringbuffer_pageoffset; int userdata; int target_vp; scalar_t__ ringbuffer_gpadlhandle; int child_relid; int openid; TYPE_1__ header; } ;
struct TYPE_8__ {scalar_t__ status; } ;
struct TYPE_9__ {TYPE_3__ open_result; } ;
struct vmbus_channel_msginfo {int msglistentry; TYPE_4__ response; int waitevent; scalar_t__ msg; struct vmbus_channel* waiting_channel; } ;
struct TYPE_7__ {int child_relid; } ;
struct vmbus_channel {size_t ringbuffer_send_offset; size_t ringbuffer_pagecount; scalar_t__ state; void (* onchannel_callback ) (void*) ;int inbound; int outbound; scalar_t__ ringbuffer_gpadlhandle; scalar_t__ rescind; int target_vp; TYPE_2__ offermsg; struct page* ringbuffer_page; void* channel_callback_context; int lock; } ;
struct page {int dummy; } ;
struct TYPE_10__ {int channelmsg_lock; int chn_msg_list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct page*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vmbus_channel_msginfo*) ;
 struct vmbus_channel_msginfo* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,void*,size_t) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct vmbus_channel_open_channel*,int) ;
 TYPE_5__ VAR_11 ;
 int FUNC_12 (struct vmbus_channel*,int ,size_t,scalar_t__*) ;
 int FUNC_13 (struct vmbus_channel_open_channel*,int,int) ;
 int FUNC_14 (struct vmbus_channel*,scalar_t__) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct vmbus_channel *VAR_12,
         void *VAR_13, u32 VAR_14,
         void (*VAR_15)(void *VAR_16), void *VAR_17)
{
 struct vmbus_channel_open_channel *VAR_18;
 struct vmbus_channel_msginfo *VAR_19 = ((void*)0);
 struct page *VAR_20 = VAR_12->ringbuffer_page;
 u32 VAR_21, VAR_22;
 unsigned long VAR_23;
 int VAR_24;

 if (VAR_14 > VAR_9)
  return -VAR_5;

 VAR_21 = VAR_12->ringbuffer_send_offset;
 VAR_22 = VAR_12->ringbuffer_pagecount - VAR_21;

 FUNC_9(&VAR_12->lock, VAR_23);
 if (VAR_12->state != VAR_3) {
  FUNC_10(&VAR_12->lock, VAR_23);
  return -VAR_5;
 }
 FUNC_10(&VAR_12->lock, VAR_23);

 VAR_12->state = VAR_2;
 VAR_12->onchannel_callback = VAR_15;
 VAR_12->channel_callback_context = VAR_17;

 VAR_24 = FUNC_1(&VAR_12->outbound, VAR_20, VAR_21);
 if (VAR_24)
  goto error_clean_ring;

 VAR_24 = FUNC_1(&VAR_12->inbound,
     &VAR_20[VAR_21], VAR_22);
 if (VAR_24)
  goto error_clean_ring;


 VAR_12->ringbuffer_gpadlhandle = 0;

 VAR_24 = FUNC_12(VAR_12,
        FUNC_8(VAR_12->ringbuffer_page),
        (VAR_21 + VAR_22) << VAR_10,
        &VAR_12->ringbuffer_gpadlhandle);
 if (VAR_24)
  goto error_clean_ring;


 VAR_19 = FUNC_4(sizeof(*VAR_19) +
      sizeof(struct vmbus_channel_open_channel),
      VAR_8);
 if (!VAR_19) {
  VAR_24 = -VAR_7;
  goto error_free_gpadl;
 }

 FUNC_2(&VAR_19->waitevent);
 VAR_19->waiting_channel = VAR_12;

 VAR_18 = (struct vmbus_channel_open_channel *)VAR_19->msg;
 VAR_18->header.msgtype = VAR_0;
 VAR_18->openid = VAR_12->offermsg.child_relid;
 VAR_18->child_relid = VAR_12->offermsg.child_relid;
 VAR_18->ringbuffer_gpadlhandle = VAR_12->ringbuffer_gpadlhandle;
 VAR_18->downstream_ringbuffer_pageoffset = VAR_12->ringbuffer_send_offset;
 VAR_18->target_vp = VAR_12->target_vp;

 if (VAR_14)
  FUNC_7(VAR_18->userdata, VAR_13, VAR_14);

 FUNC_9(&VAR_11.channelmsg_lock, VAR_23);
 FUNC_5(&VAR_19->msglistentry,
        &VAR_11.chn_msg_list);
 FUNC_10(&VAR_11.channelmsg_lock, VAR_23);

 if (VAR_12->rescind) {
  VAR_24 = -VAR_6;
  goto error_free_info;
 }

 VAR_24 = FUNC_13(VAR_18,
        sizeof(struct vmbus_channel_open_channel), 1);

 FUNC_11(VAR_18, VAR_24);

 if (VAR_24 != 0)
  goto error_clean_msglist;

 FUNC_15(&VAR_19->waitevent);

 FUNC_9(&VAR_11.channelmsg_lock, VAR_23);
 FUNC_6(&VAR_19->msglistentry);
 FUNC_10(&VAR_11.channelmsg_lock, VAR_23);

 if (VAR_12->rescind) {
  VAR_24 = -VAR_6;
  goto error_free_info;
 }

 if (VAR_19->response.open_result.status) {
  VAR_24 = -VAR_4;
  goto error_free_info;
 }

 VAR_12->state = VAR_1;
 FUNC_3(VAR_19);
 return 0;

error_clean_msglist:
 FUNC_9(&VAR_11.channelmsg_lock, VAR_23);
 FUNC_6(&VAR_19->msglistentry);
 FUNC_10(&VAR_11.channelmsg_lock, VAR_23);
error_free_info:
 FUNC_3(VAR_19);
error_free_gpadl:
 FUNC_14(VAR_12, VAR_12->ringbuffer_gpadlhandle);
 VAR_12->ringbuffer_gpadlhandle = 0;
error_clean_ring:
 FUNC_0(&VAR_12->outbound);
 FUNC_0(&VAR_12->inbound);
 VAR_12->state = VAR_3;
 return VAR_24;
}
