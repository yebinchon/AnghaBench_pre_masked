
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u16 ;
struct rxe_qp {int dummy; } ;
struct rxe_mc_grp {int dummy; } ;
struct rxe_dev {int dummy; } ;
struct ib_qp {int device; } ;


 int FUNC_0 (struct rxe_mc_grp*) ;
 int FUNC_1 (struct rxe_dev*,struct rxe_qp*,struct rxe_mc_grp*) ;
 int FUNC_2 (struct rxe_dev*,union ib_gid*,struct rxe_mc_grp**) ;
 struct rxe_dev* FUNC_3 (int ) ;
 struct rxe_qp* FUNC_4 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_5(struct ib_qp *VAR_0, union ib_gid *VAR_1, u16 VAR_2)
{
 int VAR_3;
 struct rxe_dev *VAR_4 = FUNC_3(VAR_0->device);
 struct rxe_qp *VAR_5 = FUNC_4(VAR_0);
 struct rxe_mc_grp *VAR_6;


 VAR_3 = FUNC_2(VAR_4, VAR_1, &VAR_6);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_4, VAR_5, VAR_6);

 FUNC_0(VAR_6);
 return VAR_3;
}
