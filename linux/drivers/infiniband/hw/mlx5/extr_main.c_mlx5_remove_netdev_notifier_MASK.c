
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct mlx5_ib_dev {TYPE_2__* port; } ;
struct TYPE_6__ {int * notifier_call; } ;
struct TYPE_4__ {TYPE_3__ nb; } ;
struct TYPE_5__ {TYPE_1__ roce; } ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(struct mlx5_ib_dev *VAR_0, u8 VAR_1)
{
 if (VAR_0->port[VAR_1].roce.nb.notifier_call) {
  FUNC_0(&VAR_0->port[VAR_1].roce.nb);
  VAR_0->port[VAR_1].roce.nb.notifier_call = ((void*)0);
 }
}
