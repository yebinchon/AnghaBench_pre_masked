
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_cq {int dummy; } ;
struct ib_cq {int cq_context; int (* comp_handler ) (struct ib_cq*,int ) ;} ;
struct TYPE_2__ {struct ib_cq ibcq; } ;


 int FUNC_0 (struct ib_cq*,int ) ;
 TYPE_1__* FUNC_1 (struct mlx4_cq*) ;

__attribute__((used)) static void FUNC_2(struct mlx4_cq *VAR_0)
{
 struct ib_cq *VAR_1 = &FUNC_1(VAR_0)->ibcq;
 VAR_1->comp_handler(VAR_1, VAR_1->cq_context);
}
