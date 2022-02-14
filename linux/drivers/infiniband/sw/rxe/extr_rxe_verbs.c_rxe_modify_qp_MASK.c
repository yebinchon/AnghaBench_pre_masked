
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_qp {int dummy; } ;
struct rxe_dev {int dummy; } ;
struct ib_udata {int dummy; } ;
struct ib_qp_attr {int dummy; } ;
struct ib_qp {int device; } ;


 int FUNC_0 (struct rxe_dev*,struct rxe_qp*,struct ib_qp_attr*,int) ;
 int FUNC_1 (struct rxe_qp*,struct ib_qp_attr*,int,struct ib_udata*) ;
 struct rxe_dev* FUNC_2 (int ) ;
 struct rxe_qp* FUNC_3 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_4(struct ib_qp *VAR_0, struct ib_qp_attr *VAR_1,
    int VAR_2, struct ib_udata *VAR_3)
{
 int VAR_4;
 struct rxe_dev *VAR_5 = FUNC_2(VAR_0->device);
 struct rxe_qp *VAR_6 = FUNC_3(VAR_0);

 VAR_4 = FUNC_0(VAR_5, VAR_6, VAR_1, VAR_2);
 if (VAR_4)
  goto err1;

 VAR_4 = FUNC_1(VAR_6, VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  goto err1;

 return 0;

err1:
 return VAR_4;
}
