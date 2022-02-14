
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_msgqueue_seq {int state; struct completion* completion; int callback; int id; } ;
struct nvkm_msgqueue_queue {int state; struct completion* completion; int callback; int id; } ;
struct nvkm_msgqueue_hdr {int ctrl_flags; int seq_id; } ;
struct nvkm_msgqueue {TYPE_1__* func; int init_done; } ;
struct completion {int dummy; } ;
typedef int nvkm_msgqueue_callback ;
typedef enum msgqueue_msg_priority { ____Placeholder_msgqueue_msg_priority } msgqueue_msg_priority ;
struct TYPE_2__ {struct nvkm_msgqueue_seq* (* cmd_queue ) (struct nvkm_msgqueue*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct nvkm_msgqueue_seq*) ;
 int FUNC_1 (struct nvkm_msgqueue_seq*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct nvkm_msgqueue*,struct nvkm_msgqueue_hdr*,struct nvkm_msgqueue_seq*) ;
 int FUNC_3 (int) ;
 struct nvkm_msgqueue_seq* FUNC_4 (struct nvkm_msgqueue*) ;
 int FUNC_5 (struct nvkm_msgqueue*,struct nvkm_msgqueue_seq*) ;
 struct nvkm_msgqueue_seq* FUNC_6 (struct nvkm_msgqueue*,int) ;
 int FUNC_7 (int *,int ) ;

int
FUNC_8(struct nvkm_msgqueue *VAR_5, enum msgqueue_msg_priority VAR_6,
     struct nvkm_msgqueue_hdr *VAR_7, nvkm_msgqueue_callback VAR_8,
     struct completion *VAR_9, bool VAR_10)
{
 struct nvkm_msgqueue_seq *VAR_11;
 struct nvkm_msgqueue_queue *VAR_12;
 int VAR_13;

 if (VAR_10 && !FUNC_7(&VAR_5->init_done,
      FUNC_3(1000)))
  return -VAR_2;

 VAR_12 = VAR_5->func->cmd_queue(VAR_5, VAR_6);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 VAR_11 = FUNC_4(VAR_5);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_7->seq_id = VAR_11->id;
 VAR_7->ctrl_flags = VAR_1 | VAR_0;

 VAR_11->callback = VAR_8;
 VAR_11->state = VAR_4;
 VAR_11->completion = VAR_9;

 VAR_13 = FUNC_2(VAR_5, VAR_7, VAR_12);
 if (VAR_13) {
  VAR_11->state = VAR_3;
  FUNC_5(VAR_5, VAR_11);
 }

 return VAR_13;
}
