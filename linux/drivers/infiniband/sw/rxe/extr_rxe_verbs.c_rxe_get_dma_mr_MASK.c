
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mr {int dummy; } ;
struct rxe_pd {struct ib_mr ibmr; } ;
struct rxe_mem {struct ib_mr ibmr; } ;
struct rxe_dev {int mr_pool; } ;
struct ib_pd {int device; } ;


 int VAR_0 ;
 struct ib_mr* FUNC_0 (int) ;
 int FUNC_1 (struct rxe_pd*) ;
 int FUNC_2 (struct rxe_pd*) ;
 struct rxe_pd* FUNC_3 (int *) ;
 int FUNC_4 (struct rxe_pd*) ;
 int FUNC_5 (struct rxe_pd*) ;
 int FUNC_6 (struct rxe_pd*,int,struct rxe_pd*) ;
 struct rxe_dev* FUNC_7 (int ) ;
 struct rxe_pd* FUNC_8 (struct ib_pd*) ;

__attribute__((used)) static struct ib_mr *FUNC_9(struct ib_pd *VAR_1, int VAR_2)
{
 struct rxe_dev *VAR_3 = FUNC_7(VAR_1->device);
 struct rxe_pd *VAR_4 = FUNC_8(VAR_1);
 struct rxe_mem *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(&VAR_3->mr_pool);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto err1;
 }

 FUNC_1(VAR_5);

 FUNC_2(VAR_4);

 VAR_6 = FUNC_6(VAR_4, VAR_2, VAR_5);
 if (VAR_6)
  goto err2;

 return &VAR_5->ibmr;

err2:
 FUNC_5(VAR_4);
 FUNC_4(VAR_5);
 FUNC_5(VAR_5);
err1:
 return FUNC_0(VAR_6);
}
