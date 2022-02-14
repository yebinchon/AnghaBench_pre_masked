
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_ib_ucontext {int uar; } ;
struct ib_ucontext {int device; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,int *) ;
 TYPE_1__* FUNC_1 (int ) ;
 struct mlx4_ib_ucontext* FUNC_2 (struct ib_ucontext*) ;

__attribute__((used)) static void FUNC_3(struct ib_ucontext *VAR_0)
{
 struct mlx4_ib_ucontext *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(FUNC_1(VAR_0->device)->dev, &VAR_1->uar);
}
