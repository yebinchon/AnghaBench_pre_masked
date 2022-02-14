
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct mlx4_port_gid_table {TYPE_1__* gids; } ;
struct mlx4_ib_iboe {int lock; struct mlx4_port_gid_table* gids; } ;
struct mlx4_ib_dev {struct mlx4_ib_iboe iboe; } ;
typedef enum ib_gid_type { ____Placeholder_ib_gid_type } ib_gid_type ;
struct TYPE_2__ {int gid_type; int gid; } ;


 int VAR_0 ;
 int FUNC_0 (union ib_gid*,int *,int) ;
 scalar_t__ FUNC_1 (union ib_gid*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct mlx4_ib_dev *VAR_1, u8 VAR_2,
    int VAR_3, union ib_gid *VAR_4,
    enum ib_gid_type *VAR_5)
{
 struct mlx4_ib_iboe *VAR_6 = &VAR_1->iboe;
 struct mlx4_port_gid_table *VAR_7;
 unsigned long VAR_8;

 VAR_7 = &VAR_6->gids[VAR_2 - 1];
 FUNC_2(&VAR_6->lock, VAR_8);
 FUNC_0(VAR_4, &VAR_7->gids[VAR_3].gid, sizeof(*VAR_4));
 *VAR_5 = VAR_7->gids[VAR_3].gid_type;
 FUNC_3(&VAR_6->lock, VAR_8);
 if (FUNC_1(VAR_4))
  return -VAR_0;

 return 0;
}
