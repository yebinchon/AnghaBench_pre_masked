
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cm_id {int dummy; } ;
struct isert_conn {int qp; } ;
struct isert_comp {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct isert_comp* FUNC_2 (struct isert_conn*) ;
 int FUNC_3 (struct isert_comp*) ;
 int FUNC_4 (struct isert_conn*,struct isert_comp*,struct rdma_cm_id*) ;

__attribute__((used)) static int
FUNC_5(struct isert_conn *VAR_0, struct rdma_cm_id *VAR_1)
{
 struct isert_comp *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_0);
 VAR_0->qp = FUNC_4(VAR_0, VAR_2, VAR_1);
 if (FUNC_0(VAR_0->qp)) {
  VAR_3 = FUNC_1(VAR_0->qp);
  goto err;
 }

 return 0;
err:
 FUNC_3(VAR_2);
 return VAR_3;
}
