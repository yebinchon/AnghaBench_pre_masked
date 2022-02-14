
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


 int * VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(struct mlx5_ib_dev *VAR_1, u8 VAR_2)
{
 int VAR_3;

 VAR_1->port[VAR_2].roce.nb.notifier_call = VAR_0;
 VAR_3 = FUNC_0(&VAR_1->port[VAR_2].roce.nb);
 if (VAR_3) {
  VAR_1->port[VAR_2].roce.nb.notifier_call = ((void*)0);
  return VAR_3;
 }

 return 0;
}
