
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx4_ib_dev {TYPE_1__* dev; } ;
struct mlx4_cmd_mailbox {int dma; scalar_t__ buf; } ;
typedef int __be32 ;
struct TYPE_4__ {int flags; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int FUNC_2 (int ) ;
 struct mlx4_cmd_mailbox* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,struct mlx4_cmd_mailbox*) ;

__attribute__((used)) static int FUNC_6(struct mlx4_ib_dev *VAR_5, u8 VAR_6, int VAR_7,
       u32 VAR_8)
{
 struct mlx4_cmd_mailbox *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_5->dev);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 if (VAR_5->dev->flags & VAR_3) {
  *(u8 *) VAR_9->buf = !!VAR_7 << 6;
  ((__be32 *) VAR_9->buf)[2] = FUNC_2(VAR_8);
 } else {
  ((u8 *) VAR_9->buf)[3] = !!VAR_7;
  ((__be32 *) VAR_9->buf)[1] = FUNC_2(VAR_8);
 }

 VAR_10 = FUNC_4(VAR_5->dev, VAR_9->dma, VAR_6, VAR_4,
         VAR_0, VAR_1,
         VAR_2);

 FUNC_5(VAR_5->dev, VAR_9);
 return VAR_10;
}
