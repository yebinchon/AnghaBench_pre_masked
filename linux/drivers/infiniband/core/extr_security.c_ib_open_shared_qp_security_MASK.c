
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ib_qp {TYPE_1__* qp_sec; struct ib_qp* real_qp; } ;
struct ib_device {int dummy; } ;
struct TYPE_3__ {int mutex; int shared_qp_list; int ports_pkeys; } ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct ib_qp*,struct ib_device*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct ib_qp *VAR_0, struct ib_device *VAR_1)
{
 struct ib_qp *VAR_2 = VAR_0->real_qp;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1);

 if (VAR_3)
  return VAR_3;

 if (!VAR_0->qp_sec)
  return 0;

 FUNC_4(&VAR_2->qp_sec->mutex);
 VAR_3 = FUNC_0(VAR_2->qp_sec->ports_pkeys,
       VAR_0->qp_sec);

 if (VAR_3)
  goto ret;

 if (VAR_0 != VAR_2)
  FUNC_3(&VAR_0->qp_sec->shared_qp_list,
    &VAR_2->qp_sec->shared_qp_list);
ret:
 FUNC_5(&VAR_2->qp_sec->mutex);
 if (VAR_3)
  FUNC_1(VAR_0->qp_sec);

 return VAR_3;
}
