
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct mlx4_ib_dev {struct mlx4_dev* dev; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; union ib_gid* buf; } ;
struct gid_entry {int gid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (union ib_gid*,int *,int) ;
 struct mlx4_cmd_mailbox* FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,int ,int,int,int ,int ,int ) ;
 int FUNC_4 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;
 scalar_t__ FUNC_5 (struct mlx4_dev*) ;

__attribute__((used)) static int FUNC_6(struct gid_entry *VAR_6,
      struct mlx4_ib_dev *VAR_7,
      u8 VAR_8)
{
 struct mlx4_cmd_mailbox *VAR_9;
 int VAR_10;
 struct mlx4_dev *VAR_11 = VAR_7->dev;
 int VAR_12;
 union ib_gid *VAR_13;

 VAR_9 = FUNC_2(VAR_11);
 if (FUNC_0(VAR_9))
  return -VAR_0;

 VAR_13 = VAR_9->buf;

 for (VAR_12 = 0; VAR_12 < VAR_4; ++VAR_12)
  FUNC_1(&VAR_13[VAR_12], &VAR_6[VAR_12].gid, sizeof(union ib_gid));

 VAR_10 = FUNC_3(VAR_11, VAR_9->dma,
         VAR_5 << 8 | VAR_8,
         1, VAR_1, VAR_2,
         VAR_3);
 if (FUNC_5(VAR_11))
  VAR_10 += FUNC_3(VAR_11, VAR_9->dma,
    VAR_5 << 8 | 2,
    1, VAR_1, VAR_2,
    VAR_3);

 FUNC_4(VAR_11, VAR_9);
 return VAR_10;
}
