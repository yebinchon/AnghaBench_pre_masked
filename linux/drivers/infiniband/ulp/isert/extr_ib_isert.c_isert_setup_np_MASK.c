
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct rdma_cm_id {int dummy; } ;
struct isert_np {struct rdma_cm_id* cm_id; struct iscsi_np* np; int pending; int accepted; int mutex; int sem; } ;
struct iscsi_np {struct isert_np* np_context; int np_sockaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct rdma_cm_id*) ;
 int FUNC_2 (struct rdma_cm_id*) ;
 struct rdma_cm_id* FUNC_3 (struct isert_np*) ;
 int FUNC_4 (struct isert_np*) ;
 struct isert_np* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,struct sockaddr_storage*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int
FUNC_9(struct iscsi_np *VAR_2,
        struct sockaddr_storage *VAR_3)
{
 struct isert_np *VAR_4;
 struct rdma_cm_id *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_5(sizeof(struct isert_np), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_8(&VAR_4->sem, 0);
 FUNC_7(&VAR_4->mutex);
 FUNC_0(&VAR_4->accepted);
 FUNC_0(&VAR_4->pending);
 VAR_4->np = VAR_2;





 FUNC_6(&VAR_2->np_sockaddr, VAR_3,
        sizeof(struct sockaddr_storage));

 VAR_5 = FUNC_3(VAR_4);
 if (FUNC_1(VAR_5)) {
  VAR_6 = FUNC_2(VAR_5);
  goto out;
 }

 VAR_4->cm_id = VAR_5;
 VAR_2->np_context = VAR_4;

 return 0;

out:
 FUNC_4(VAR_4);

 return VAR_6;
}
