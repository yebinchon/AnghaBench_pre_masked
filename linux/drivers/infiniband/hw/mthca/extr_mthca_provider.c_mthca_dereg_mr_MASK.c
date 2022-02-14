
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_mr {int umem; } ;
struct ib_udata {int dummy; } ;
struct ib_mr {int device; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mthca_mr*) ;
 int FUNC_2 (int ,struct mthca_mr*) ;
 int FUNC_3 (int ) ;
 struct mthca_mr* FUNC_4 (struct ib_mr*) ;

__attribute__((used)) static int FUNC_5(struct ib_mr *VAR_0, struct ib_udata *VAR_1)
{
 struct mthca_mr *VAR_2 = FUNC_4(VAR_0);

 FUNC_2(FUNC_3(VAR_0->device), VAR_2);
 FUNC_0(VAR_2->umem);
 FUNC_1(VAR_2);

 return 0;
}
