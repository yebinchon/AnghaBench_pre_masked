
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ib_mr {int dummy; } ;
struct rxe_pd {struct ib_mr ibmr; } ;
struct rxe_mem {struct ib_mr ibmr; } ;
struct rxe_dev {int mr_pool; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;
typedef enum ib_mr_type { ____Placeholder_ib_mr_type } ib_mr_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct rxe_pd*) ;
 int FUNC_2 (struct rxe_pd*) ;
 struct rxe_pd* FUNC_3 (int *) ;
 int FUNC_4 (struct rxe_pd*) ;
 int FUNC_5 (struct rxe_pd*) ;
 int FUNC_6 (struct rxe_pd*,int ,struct rxe_pd*) ;
 struct rxe_dev* FUNC_7 (int ) ;
 struct rxe_pd* FUNC_8 (struct ib_pd*) ;

__attribute__((used)) static struct ib_mr *FUNC_9(struct ib_pd *VAR_3, enum ib_mr_type VAR_4,
      u32 VAR_5, struct ib_udata *VAR_6)
{
 struct rxe_dev *VAR_7 = FUNC_7(VAR_3->device);
 struct rxe_pd *VAR_8 = FUNC_8(VAR_3);
 struct rxe_mem *VAR_9;
 int VAR_10;

 if (VAR_4 != VAR_2)
  return FUNC_0(-VAR_0);

 VAR_9 = FUNC_3(&VAR_7->mr_pool);
 if (!VAR_9) {
  VAR_10 = -VAR_1;
  goto err1;
 }

 FUNC_1(VAR_9);

 FUNC_2(VAR_8);

 VAR_10 = FUNC_6(VAR_8, VAR_5, VAR_9);
 if (VAR_10)
  goto err2;

 return &VAR_9->ibmr;

err2:
 FUNC_5(VAR_8);
 FUNC_4(VAR_9);
 FUNC_5(VAR_9);
err1:
 return FUNC_0(VAR_10);
}
