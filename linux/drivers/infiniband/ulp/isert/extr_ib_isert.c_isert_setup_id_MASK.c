
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct rdma_cm_id {struct sockaddr* context; } ;
struct isert_np {struct iscsi_np* np; } ;
struct iscsi_np {struct rdma_cm_id np_sockaddr; } ;


 struct rdma_cm_id* FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct rdma_cm_id*) ;
 int FUNC_2 (struct rdma_cm_id*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,struct rdma_cm_id*,struct sockaddr*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct rdma_cm_id*,struct sockaddr*) ;
 struct rdma_cm_id* FUNC_6 (int *,int ,struct isert_np*,int ,int ) ;
 int FUNC_7 (struct rdma_cm_id*) ;
 int FUNC_8 (struct rdma_cm_id*,int ) ;

struct rdma_cm_id *
FUNC_9(struct isert_np *VAR_4)
{
 struct iscsi_np *VAR_5 = VAR_4->np;
 struct rdma_cm_id *VAR_6;
 struct sockaddr *VAR_7;
 int VAR_8;

 VAR_7 = (struct sockaddr *)&VAR_5->np_sockaddr;
 FUNC_3("ksockaddr: %p, sa: %p\n", &VAR_5->np_sockaddr, VAR_7);

 VAR_6 = FUNC_6(&VAR_2, VAR_3, VAR_4,
       VAR_1, VAR_0);
 if (FUNC_1(VAR_6)) {
  FUNC_4("rdma_create_id() failed: %ld\n", FUNC_2(VAR_6));
  VAR_8 = FUNC_2(VAR_6);
  goto out;
 }
 FUNC_3("id %p context %p\n", VAR_6, VAR_6->context);

 VAR_8 = FUNC_5(VAR_6, VAR_7);
 if (VAR_8) {
  FUNC_4("rdma_bind_addr() failed: %d\n", VAR_8);
  goto out_id;
 }

 VAR_8 = FUNC_8(VAR_6, 0);
 if (VAR_8) {
  FUNC_4("rdma_listen() failed: %d\n", VAR_8);
  goto out_id;
 }

 return VAR_6;
out_id:
 FUNC_7(VAR_6);
out:
 return FUNC_0(VAR_8);
}
