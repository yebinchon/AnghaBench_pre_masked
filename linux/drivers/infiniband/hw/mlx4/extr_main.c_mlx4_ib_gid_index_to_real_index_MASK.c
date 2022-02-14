
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx4_port_gid_table {TYPE_1__* gids; } ;
struct mlx4_ib_iboe {int lock; struct mlx4_port_gid_table* gids; } ;
struct mlx4_ib_dev {int ib_dev; int dev; struct mlx4_ib_iboe iboe; } ;
struct ib_gid_attr {int port_num; int index; scalar_t__ gid_type; int gid; } ;
struct gid_cache_context {int real_index; } ;
struct TYPE_2__ {scalar_t__ gid_type; struct gid_cache_context* ctx; int gid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct mlx4_ib_dev *VAR_3,
        const struct ib_gid_attr *VAR_4)
{
 struct mlx4_ib_iboe *VAR_5 = &VAR_3->iboe;
 struct gid_cache_context *VAR_6 = ((void*)0);
 struct mlx4_port_gid_table *VAR_7;
 int VAR_8 = -VAR_0;
 int VAR_9;
 unsigned long VAR_10;
 u8 VAR_11 = VAR_4->port_num;

 if (VAR_11 > VAR_1)
  return -VAR_0;

 if (FUNC_1(VAR_3->dev))
  VAR_11 = 1;

 if (!FUNC_2(&VAR_3->ib_dev, VAR_11))
  return VAR_4->index;

 FUNC_3(&VAR_5->lock, VAR_10);
 VAR_7 = &VAR_5->gids[VAR_11 - 1];

 for (VAR_9 = 0; VAR_9 < VAR_2; ++VAR_9)
  if (!FUNC_0(&VAR_7->gids[VAR_9].gid,
       &VAR_4->gid, sizeof(VAR_4->gid)) &&
      VAR_4->gid_type == VAR_7->gids[VAR_9].gid_type) {
   VAR_6 = VAR_7->gids[VAR_9].ctx;
   break;
  }
 if (VAR_6)
  VAR_8 = VAR_6->real_index;
 FUNC_4(&VAR_5->lock, VAR_10);
 return VAR_8;
}
