
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_ib_resources {TYPE_1__* ports; int p0; int c0; int x1; int x0; int s0; int s1; } ;
struct TYPE_2__ {int pkey_change_work; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct mlx5_ib_resources *VAR_0)
{
 int VAR_1;

 FUNC_6(VAR_0->s1, ((void*)0));
 FUNC_2(VAR_0->s1);
 FUNC_6(VAR_0->s0, ((void*)0));
 FUNC_2(VAR_0->s0);
 FUNC_4(VAR_0->x0, ((void*)0));
 FUNC_4(VAR_0->x1, ((void*)0));
 FUNC_5(VAR_0->c0, ((void*)0));
 FUNC_2(VAR_0->c0);
 FUNC_3(VAR_0->p0, ((void*)0));
 FUNC_2(VAR_0->p0);


 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->ports); ++VAR_1)
  FUNC_1(&VAR_0->ports[VAR_1].pkey_change_work);
}
