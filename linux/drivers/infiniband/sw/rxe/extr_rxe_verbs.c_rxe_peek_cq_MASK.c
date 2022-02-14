
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_cq {int queue; } ;
struct ib_cq {int dummy; } ;


 int FUNC_0 (int ) ;
 struct rxe_cq* FUNC_1 (struct ib_cq*) ;

__attribute__((used)) static int FUNC_2(struct ib_cq *VAR_0, int VAR_1)
{
 struct rxe_cq *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = FUNC_0(VAR_2->queue);

 return (VAR_3 > VAR_1) ? VAR_1 : VAR_3;
}
