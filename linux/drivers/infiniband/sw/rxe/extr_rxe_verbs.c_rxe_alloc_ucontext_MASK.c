
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_ucontext {int pelem; } ;
struct rxe_dev {int uc_pool; } ;
struct ib_udata {int dummy; } ;
struct ib_ucontext {int device; } ;


 int FUNC_0 (int *,int *) ;
 struct rxe_dev* FUNC_1 (int ) ;
 struct rxe_ucontext* FUNC_2 (struct ib_ucontext*) ;

__attribute__((used)) static int FUNC_3(struct ib_ucontext *VAR_0, struct ib_udata *VAR_1)
{
 struct rxe_dev *VAR_2 = FUNC_1(VAR_0->device);
 struct rxe_ucontext *VAR_3 = FUNC_2(VAR_0);

 return FUNC_0(&VAR_2->uc_pool, &VAR_3->pelem);
}
