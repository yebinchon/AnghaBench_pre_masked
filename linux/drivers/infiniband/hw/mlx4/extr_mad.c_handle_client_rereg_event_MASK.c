
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int * demux; int is_going_down; } ;
struct mlx4_ib_dev {TYPE_3__* dev; TYPE_2__ sriov; } ;
struct TYPE_6__ {int flags2; } ;
struct TYPE_8__ {int flags; TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int,int ) ;
 int FUNC_1 (struct mlx4_ib_dev*,int,int ) ;
 int FUNC_2 (struct mlx4_ib_dev*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct mlx4_ib_dev*,int) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct mlx4_ib_dev*,int) ;

__attribute__((used)) static void FUNC_8(struct mlx4_ib_dev *VAR_4, u8 VAR_5)
{

 if (FUNC_5(VAR_4->dev)) {
  FUNC_2(VAR_4, VAR_5);

  if (!VAR_4->sriov.is_going_down) {
   FUNC_3(&VAR_4->sriov.demux[VAR_5 - 1], 0);
   FUNC_0(VAR_4->dev, VAR_5,
          VAR_2);
  }
 }





 if (!FUNC_6(VAR_4->dev) &&
     VAR_4->dev->flags & VAR_3 &&
     !(VAR_4->dev->caps.flags2 & VAR_1)) {
  if (FUNC_5(VAR_4->dev))




   FUNC_4(VAR_4, VAR_5);
  else
   FUNC_7(VAR_4, VAR_5);
 }
 FUNC_1(VAR_4, VAR_5, VAR_0);
}
