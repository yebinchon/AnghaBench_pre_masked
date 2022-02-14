
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucmd ;
struct rxe_srq {int dummy; } ;
struct rxe_modify_srq_cmd {int dummy; } ;
struct rxe_dev {int dummy; } ;
struct ib_udata {int inlen; } ;
struct ib_srq_attr {int dummy; } ;
struct ib_srq {int device; } ;
typedef enum ib_srq_attr_mask { ____Placeholder_ib_srq_attr_mask } ib_srq_attr_mask ;


 int VAR_0 ;
 int FUNC_0 (struct rxe_modify_srq_cmd*,struct ib_udata*,int) ;
 int FUNC_1 (struct rxe_dev*,struct rxe_srq*,struct ib_srq_attr*,int) ;
 int FUNC_2 (struct rxe_dev*,struct rxe_srq*,struct ib_srq_attr*,int,struct rxe_modify_srq_cmd*,struct ib_udata*) ;
 struct rxe_dev* FUNC_3 (int ) ;
 struct rxe_srq* FUNC_4 (struct ib_srq*) ;

__attribute__((used)) static int FUNC_5(struct ib_srq *VAR_1, struct ib_srq_attr *VAR_2,
     enum ib_srq_attr_mask VAR_3,
     struct ib_udata *VAR_4)
{
 int VAR_5;
 struct rxe_srq *VAR_6 = FUNC_4(VAR_1);
 struct rxe_dev *VAR_7 = FUNC_3(VAR_1->device);
 struct rxe_modify_srq_cmd VAR_8 = {};

 if (VAR_4) {
  if (VAR_4->inlen < sizeof(VAR_8))
   return -VAR_0;

  VAR_5 = FUNC_0(&VAR_8, VAR_4, sizeof(VAR_8));
  if (VAR_5)
   return VAR_5;
 }

 VAR_5 = FUNC_1(VAR_7, VAR_6, VAR_2, VAR_3);
 if (VAR_5)
  goto err1;

 VAR_5 = FUNC_2(VAR_7, VAR_6, VAR_2, VAR_3, &VAR_8, VAR_4);
 if (VAR_5)
  goto err1;

 return 0;

err1:
 return VAR_5;
}
