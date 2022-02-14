
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_pd {int pelem; } ;
struct rxe_dev {int pd_pool; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;


 int FUNC_0 (int *,int *) ;
 struct rxe_dev* FUNC_1 (int ) ;
 struct rxe_pd* FUNC_2 (struct ib_pd*) ;

__attribute__((used)) static int FUNC_3(struct ib_pd *VAR_0, struct ib_udata *VAR_1)
{
 struct rxe_dev *VAR_2 = FUNC_1(VAR_0->device);
 struct rxe_pd *VAR_3 = FUNC_2(VAR_0);

 return FUNC_0(&VAR_2->pd_pool, &VAR_3->pelem);
}
