
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_mr_cache {TYPE_1__* ent; } ;
struct TYPE_2__ {scalar_t__ cur; scalar_t__ limit; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mlx5_mr_cache *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->ent[VAR_2].cur < VAR_1->ent[VAR_2].limit)
   return 1;
 }

 return 0;
}
