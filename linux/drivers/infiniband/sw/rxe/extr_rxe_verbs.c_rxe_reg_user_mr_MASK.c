
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ib_mr {int dummy; } ;
struct rxe_pd {struct ib_mr ibmr; } ;
struct rxe_mem {struct ib_mr ibmr; } ;
struct rxe_dev {int mr_pool; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;


 int VAR_0 ;
 struct ib_mr* FUNC_0 (int) ;
 int FUNC_1 (struct rxe_pd*) ;
 int FUNC_2 (struct rxe_pd*) ;
 struct rxe_pd* FUNC_3 (int *) ;
 int FUNC_4 (struct rxe_pd*) ;
 int FUNC_5 (struct rxe_pd*) ;
 int FUNC_6 (struct rxe_pd*,int ,int ,int ,int,struct ib_udata*,struct rxe_pd*) ;
 struct rxe_dev* FUNC_7 (int ) ;
 struct rxe_pd* FUNC_8 (struct ib_pd*) ;

__attribute__((used)) static struct ib_mr *FUNC_9(struct ib_pd *VAR_1,
         u64 VAR_2,
         u64 VAR_3,
         u64 VAR_4,
         int VAR_5, struct ib_udata *VAR_6)
{
 int VAR_7;
 struct rxe_dev *VAR_8 = FUNC_7(VAR_1->device);
 struct rxe_pd *VAR_9 = FUNC_8(VAR_1);
 struct rxe_mem *VAR_10;

 VAR_10 = FUNC_3(&VAR_8->mr_pool);
 if (!VAR_10) {
  VAR_7 = -VAR_0;
  goto err2;
 }

 FUNC_1(VAR_10);

 FUNC_2(VAR_9);

 VAR_7 = FUNC_6(VAR_9, VAR_2, VAR_3, VAR_4,
    VAR_5, VAR_6, VAR_10);
 if (VAR_7)
  goto err3;

 return &VAR_10->ibmr;

err3:
 FUNC_5(VAR_9);
 FUNC_4(VAR_10);
 FUNC_5(VAR_10);
err2:
 return FUNC_0(VAR_7);
}
