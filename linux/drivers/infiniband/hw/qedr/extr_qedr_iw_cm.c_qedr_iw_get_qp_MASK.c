
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedr_dev {int qps; } ;
struct ib_qp {int dummy; } ;
struct ib_device {int dummy; } ;


 struct qedr_dev* FUNC_0 (struct ib_device*) ;
 struct ib_qp* FUNC_1 (int *,int) ;

struct ib_qp *FUNC_2(struct ib_device *VAR_0, int VAR_1)
{
 struct qedr_dev *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(&VAR_2->qps, VAR_1);
}
