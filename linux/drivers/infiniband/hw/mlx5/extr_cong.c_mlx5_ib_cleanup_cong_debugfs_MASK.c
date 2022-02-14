
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct mlx5_ib_dev {TYPE_1__* port; } ;
struct TYPE_4__ {int root; } ;
struct TYPE_3__ {TYPE_2__* dbg_cc_params; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;

void FUNC_2(struct mlx5_ib_dev *VAR_1, u8 VAR_2)
{
 if (!VAR_0 ||
     !VAR_1->port[VAR_2].dbg_cc_params ||
     !VAR_1->port[VAR_2].dbg_cc_params->root)
  return;

 FUNC_0(VAR_1->port[VAR_2].dbg_cc_params->root);
 FUNC_1(VAR_1->port[VAR_2].dbg_cc_params);
 VAR_1->port[VAR_2].dbg_cc_params = ((void*)0);
}
