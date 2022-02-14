
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_mem {struct rxe_mem* pd; int state; } ;
struct ib_udata {int dummy; } ;
struct ib_mr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rxe_mem*) ;
 int FUNC_1 (struct rxe_mem*) ;
 struct rxe_mem* FUNC_2 (struct ib_mr*) ;

__attribute__((used)) static int FUNC_3(struct ib_mr *VAR_1, struct ib_udata *VAR_2)
{
 struct rxe_mem *VAR_3 = FUNC_2(VAR_1);

 VAR_3->state = VAR_0;
 FUNC_1(VAR_3->pd);
 FUNC_0(VAR_3);
 FUNC_1(VAR_3);
 return 0;
}
