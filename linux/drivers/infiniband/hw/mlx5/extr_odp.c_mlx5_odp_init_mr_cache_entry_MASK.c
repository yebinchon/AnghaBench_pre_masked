
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_mtt {int dummy; } ;
struct mlx5_klm {int dummy; } ;
struct mlx5_cache_ent {int order; int xlt; int limit; int access_mode; int page; TYPE_2__* dev; } ;
struct TYPE_3__ {int general_caps; } ;
struct TYPE_4__ {TYPE_1__ odp_caps; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_0(struct mlx5_cache_ent *VAR_8)
{
 if (!(VAR_8->dev->odp_caps.general_caps & VAR_0))
  return;

 switch (VAR_8->order - 2) {
 case 128:
  VAR_8->page = VAR_6;
  VAR_8->xlt = VAR_2 *
      sizeof(struct mlx5_mtt) /
      VAR_1;
  VAR_8->access_mode = VAR_5;
  VAR_8->limit = 0;
  break;

 case 129:
  VAR_8->page = VAR_3;
  VAR_8->xlt = VAR_7 *
      sizeof(struct mlx5_klm) /
      VAR_1;
  VAR_8->access_mode = VAR_4;
  VAR_8->limit = 0;
  break;
 }
}
