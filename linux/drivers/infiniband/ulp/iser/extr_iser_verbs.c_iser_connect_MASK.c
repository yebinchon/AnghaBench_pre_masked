
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct ib_conn {int * cma_id; int * device; } ;
struct iser_conn {scalar_t__ state; int state_mutex; int conn_list; int up_completion; int name; struct ib_conn ib_conn; } ;
struct TYPE_2__ {int connlist_mutex; int connlist; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct iser_conn*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int ,void*,int ,int ) ;
 int FUNC_9 (int *,struct sockaddr*,struct sockaddr*,int) ;
 int FUNC_10 (int ,char*,struct sockaddr*) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct iser_conn *VAR_9,
   struct sockaddr *VAR_10,
   struct sockaddr *VAR_11,
   int VAR_12)
{
 struct ib_conn *VAR_13 = &VAR_9->ib_conn;
 int VAR_14 = 0;

 FUNC_6(&VAR_9->state_mutex);

 FUNC_10(VAR_9->name, "%pISp", VAR_11);

 FUNC_4("connecting to: %s\n", VAR_9->name);


 VAR_13->device = ((void*)0);

 VAR_9->state = VAR_3;

 VAR_13->cma_id = FUNC_8(&VAR_7, VAR_8,
      (void *)VAR_9,
      VAR_5, VAR_1);
 if (FUNC_0(VAR_13->cma_id)) {
  VAR_14 = FUNC_1(VAR_13->cma_id);
  FUNC_3("rdma_create_id failed: %d\n", VAR_14);
  goto id_failure;
 }

 VAR_14 = FUNC_9(VAR_13->cma_id, VAR_10, VAR_11, 1000);
 if (VAR_14) {
  FUNC_3("rdma_resolve_addr failed: %d\n", VAR_14);
  goto addr_failure;
 }

 if (!VAR_12) {
  FUNC_11(&VAR_9->up_completion);

  if (VAR_9->state != VAR_4) {
   VAR_14 = -VAR_0;
   goto connect_failure;
  }
 }
 FUNC_7(&VAR_9->state_mutex);

 FUNC_6(&VAR_6.connlist_mutex);
 FUNC_5(&VAR_9->conn_list, &VAR_6.connlist);
 FUNC_7(&VAR_6.connlist_mutex);
 return 0;

id_failure:
 VAR_13->cma_id = ((void*)0);
addr_failure:
 VAR_9->state = VAR_2;
connect_failure:
 FUNC_7(&VAR_9->state_mutex);
 FUNC_2(VAR_9);
 return VAR_14;
}
