
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
typedef struct sockaddr_storage sockaddr ;
struct TYPE_3__ {scalar_t__ (* event_handler ) (TYPE_1__*,struct rdma_cm_event*) ;} ;
struct rdma_id_private {int handler_mutex; TYPE_1__ id; int cma_dev; } ;
struct rdma_dev_addr {int dummy; } ;
struct rdma_cm_event {int status; int event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rdma_id_private*) ;
 int FUNC_1 (struct rdma_id_private*,int ,int ) ;
 int FUNC_2 (struct rdma_id_private*,int ) ;
 struct sockaddr_storage* FUNC_3 (struct rdma_id_private*) ;
 int FUNC_4 (struct sockaddr_storage*,struct sockaddr_storage*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (struct sockaddr_storage*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,struct rdma_cm_event*) ;

__attribute__((used)) static void FUNC_11(int VAR_6, struct sockaddr *VAR_7,
    struct rdma_dev_addr *VAR_8, void *VAR_9)
{
 struct rdma_id_private *VAR_10 = VAR_9;
 struct rdma_cm_event VAR_11 = {};
 struct sockaddr *VAR_12;
 struct sockaddr_storage VAR_13;

 FUNC_5(&VAR_10->handler_mutex);
 if (!FUNC_1(VAR_10, VAR_1,
      VAR_2))
  goto out;






 VAR_12 = FUNC_3(VAR_10);
 FUNC_4(&VAR_13, VAR_12, FUNC_8(VAR_12));
 FUNC_4(VAR_12, VAR_7, FUNC_8(VAR_7));
 if (!VAR_6 && !VAR_10->cma_dev) {
  VAR_6 = FUNC_0(VAR_10);
  if (VAR_6)
   FUNC_7("RDMA CM: ADDR_ERROR: failed to acquire device. status %d\n",
          VAR_6);
 } else if (VAR_6) {
  FUNC_7("RDMA CM: ADDR_ERROR: failed to resolve IP. status %d\n", VAR_6);
 }

 if (VAR_6) {
  FUNC_4(VAR_12, &VAR_13,
         FUNC_8((struct sockaddr *)&VAR_13));
  if (!FUNC_1(VAR_10, VAR_2,
       VAR_0))
   goto out;
  VAR_11.event = VAR_4;
  VAR_11.status = VAR_6;
 } else
  VAR_11.event = VAR_5;

 if (VAR_10->id.event_handler(&VAR_10->id, &VAR_11)) {
  FUNC_2(VAR_10, VAR_3);
  FUNC_6(&VAR_10->handler_mutex);
  FUNC_9(&VAR_10->id);
  return;
 }
out:
 FUNC_6(&VAR_10->handler_mutex);
}
