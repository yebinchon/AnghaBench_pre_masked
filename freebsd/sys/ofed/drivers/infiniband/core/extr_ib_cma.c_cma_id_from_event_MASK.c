
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_id_private {int dummy; } ;
struct rdma_bind_list {int dummy; } ;
typedef struct rdma_id_private net_device ;
struct ib_cm_id {int service_id; } ;
struct ib_cm_event {int dummy; } ;
struct cma_req_info {int service_id; } ;


 int VAR_0 ;
 struct rdma_id_private* FUNC_0 (struct rdma_id_private*) ;
 struct rdma_id_private* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct rdma_id_private*) ;
 int FUNC_3 (struct rdma_id_private*) ;
 int VAR_1 ;
 struct rdma_id_private* FUNC_4 (struct rdma_bind_list*,struct ib_cm_id*,struct ib_cm_event*,struct cma_req_info*,struct rdma_id_private*) ;
 struct rdma_id_private* FUNC_5 (struct ib_cm_event*,struct cma_req_info*) ;
 int FUNC_6 (int ) ;
 struct rdma_bind_list* FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (struct ib_cm_event*,struct cma_req_info*) ;
 int * FUNC_9 (struct rdma_id_private*) ;
 int FUNC_10 (struct rdma_id_private*) ;
 int VAR_2 ;
 int FUNC_11 (int ) ;

__attribute__((used)) static struct rdma_id_private *FUNC_12(struct ib_cm_id *VAR_3,
       struct ib_cm_event *VAR_4,
       struct net_device **VAR_5)
{
 struct cma_req_info VAR_6;
 struct rdma_bind_list *VAR_7;
 struct rdma_id_private *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_8(VAR_4, &VAR_6);
 if (VAR_9)
  return FUNC_1(VAR_9);

 if (FUNC_11(VAR_3->service_id) == VAR_1) {
  *VAR_5 = ((void*)0);
  goto there_is_no_net_dev;
 }

 *VAR_5 = FUNC_5(VAR_4, &VAR_6);
 if (FUNC_2(*VAR_5)) {
  if (FUNC_3(*VAR_5) == -VAR_0) {

   *VAR_5 = ((void*)0);
  } else {
   return FUNC_0(*VAR_5);
  }
 }

there_is_no_net_dev:
 VAR_7 = FUNC_7(*VAR_5 ? FUNC_9(*VAR_5) : &VAR_2,
    FUNC_11(VAR_6.service_id),
    FUNC_6(VAR_6.service_id));
 VAR_8 = FUNC_4(VAR_7, VAR_3, VAR_4, &VAR_6, *VAR_5);
 if (FUNC_2(VAR_8) && *VAR_5) {
  FUNC_10(*VAR_5);
  *VAR_5 = ((void*)0);
 }

 return VAR_8;
}
