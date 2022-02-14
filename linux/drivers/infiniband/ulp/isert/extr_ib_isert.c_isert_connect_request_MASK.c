
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_cm_id {int device; struct isert_np* context; } ;
struct TYPE_2__ {int conn; } ;
struct rdma_cm_event {TYPE_1__ param; } ;
struct isert_np {int mutex; int accepted; struct iscsi_np* np; } ;
struct isert_device {int dummy; } ;
struct isert_conn {int node; struct isert_device* device; struct rdma_cm_id* cm_id; } ;
struct iscsi_np {int np_thread_lock; int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct isert_device*) ;
 int FUNC_1 (struct isert_device*) ;
 int FUNC_2 (struct isert_conn*,int ) ;
 int FUNC_3 (struct isert_conn*,struct rdma_cm_id*) ;
 int FUNC_4 (char*,...) ;
 struct isert_device* FUNC_5 (struct rdma_cm_id*) ;
 int FUNC_6 (struct isert_device*) ;
 int FUNC_7 (struct isert_conn*) ;
 int FUNC_8 (struct isert_conn*) ;
 int FUNC_9 (struct isert_conn*) ;
 int FUNC_10 (struct isert_conn*) ;
 int FUNC_11 (struct isert_conn*,int *) ;
 int FUNC_12 (struct isert_conn*) ;
 struct isert_conn* FUNC_13 (int,int ) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct rdma_cm_id*,int *,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int
FUNC_20(struct rdma_cm_id *VAR_2, struct rdma_cm_event *VAR_3)
{
 struct isert_np *VAR_4 = VAR_2->context;
 struct iscsi_np *VAR_5 = VAR_4->np;
 struct isert_conn *VAR_6;
 struct isert_device *VAR_7;
 int VAR_8 = 0;

 FUNC_18(&VAR_5->np_thread_lock);
 if (!VAR_5->enabled) {
  FUNC_19(&VAR_5->np_thread_lock);
  FUNC_4("iscsi_np is not enabled, reject connect request\n");
  return FUNC_17(VAR_2, ((void*)0), 0);
 }
 FUNC_19(&VAR_5->np_thread_lock);

 FUNC_4("cma_id: %p, portal: %p\n",
   VAR_2, VAR_2->context);

 VAR_6 = FUNC_13(sizeof(struct isert_conn), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_8(VAR_6);
 VAR_6->cm_id = VAR_2;

 VAR_8 = FUNC_2(VAR_6, VAR_2->device);
 if (VAR_8)
  goto out;

 VAR_7 = FUNC_5(VAR_2);
 if (FUNC_0(VAR_7)) {
  VAR_8 = FUNC_1(VAR_7);
  goto out_rsp_dma_map;
 }
 VAR_6->device = VAR_7;

 FUNC_11(VAR_6, &VAR_3->param.conn);

 VAR_8 = FUNC_3(VAR_6, VAR_2);
 if (VAR_8)
  goto out_conn_dev;

 VAR_8 = FUNC_9(VAR_6);
 if (VAR_8)
  goto out_conn_dev;

 VAR_8 = FUNC_10(VAR_6);
 if (VAR_8)
  goto out_conn_dev;

 FUNC_15(&VAR_4->mutex);
 FUNC_14(&VAR_6->node, &VAR_4->accepted);
 FUNC_16(&VAR_4->mutex);

 return 0;

out_conn_dev:
 FUNC_6(VAR_7);
out_rsp_dma_map:
 FUNC_7(VAR_6);
out:
 FUNC_12(VAR_6);
 FUNC_17(VAR_2, ((void*)0), 0);
 return VAR_8;
}
