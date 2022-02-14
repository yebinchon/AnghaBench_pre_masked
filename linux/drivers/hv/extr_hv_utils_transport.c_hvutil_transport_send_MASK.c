
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int val; int idx; } ;
struct hvutil_transport {scalar_t__ mode; int outmsg_len; void (* on_read ) () ;int lock; int outmsg_q; void* outmsg; TYPE_2__ cn_id; } ;
struct TYPE_3__ {int val; int idx; } ;
struct cn_msg {int len; void* data; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct cn_msg*,int ,int ,int ) ;
 int FUNC_1 (struct cn_msg*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (void*,void*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct hvutil_transport *VAR_9, void *VAR_10, int VAR_11,
     void (*VAR_12)(void))
{
 struct cn_msg *VAR_13;
 int VAR_14 = 0;

 if (VAR_9->mode == VAR_7 ||
     VAR_9->mode == VAR_6) {
  return -VAR_1;
 } else if (VAR_9->mode == VAR_8) {
  VAR_13 = FUNC_2(sizeof(*VAR_13) + VAR_11, VAR_3);
  if (!VAR_13)
   return -VAR_2;
  VAR_13->id.idx = VAR_9->cn_id.idx;
  VAR_13->id.val = VAR_9->cn_id.val;
  VAR_13->len = VAR_11;
  FUNC_3(VAR_13->data, VAR_10, VAR_11);
  VAR_14 = FUNC_0(VAR_13, 0, 0, VAR_3);
  FUNC_1(VAR_13);





  if (VAR_12)
   VAR_12();
  return VAR_14;
 }

 FUNC_4(&VAR_9->lock);
 if (VAR_9->mode != VAR_5) {
  VAR_14 = -VAR_1;
  goto out_unlock;
 }

 if (VAR_9->outmsg) {

  VAR_14 = -VAR_0;
  goto out_unlock;
 }
 VAR_9->outmsg = FUNC_2(VAR_11, VAR_4);
 if (VAR_9->outmsg) {
  FUNC_3(VAR_9->outmsg, VAR_10, VAR_11);
  VAR_9->outmsg_len = VAR_11;
  VAR_9->on_read = VAR_12;
  FUNC_6(&VAR_9->outmsg_q);
 } else
  VAR_14 = -VAR_2;
out_unlock:
 FUNC_5(&VAR_9->lock);
 return VAR_14;
}
