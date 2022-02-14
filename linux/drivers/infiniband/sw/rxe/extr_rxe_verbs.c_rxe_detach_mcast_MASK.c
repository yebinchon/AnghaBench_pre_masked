
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u16 ;
struct rxe_qp {int dummy; } ;
struct rxe_dev {int dummy; } ;
struct ib_qp {int device; } ;


 int FUNC_0 (struct rxe_dev*,struct rxe_qp*,union ib_gid*) ;
 struct rxe_dev* FUNC_1 (int ) ;
 struct rxe_qp* FUNC_2 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_3(struct ib_qp *VAR_0, union ib_gid *VAR_1, u16 VAR_2)
{
 struct rxe_dev *VAR_3 = FUNC_1(VAR_0->device);
 struct rxe_qp *VAR_4 = FUNC_2(VAR_0);

 return FUNC_0(VAR_3, VAR_4, VAR_1);
}
