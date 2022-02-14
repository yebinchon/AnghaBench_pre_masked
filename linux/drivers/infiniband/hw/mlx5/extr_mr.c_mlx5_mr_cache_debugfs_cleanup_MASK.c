
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * root; } ;
struct mlx5_ib_dev {TYPE_1__ cache; scalar_t__ is_rep; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct mlx5_ib_dev *VAR_1)
{
 if (!VAR_0 || VAR_1->is_rep)
  return;

 FUNC_0(VAR_1->cache.root);
 VAR_1->cache.root = ((void*)0);
}
