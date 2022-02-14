
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_ib_dev {int mdev; } ;
struct mlx5_flow_spec {int match_value; int match_criteria; } ;
struct TYPE_2__ {int bth_dst_qp; } ;


 void* FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,void*,int ,int) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct mlx5_ib_dev *VAR_5,
       struct mlx5_flow_spec *VAR_6,
       u32 VAR_7)
{
 void *VAR_8 = FUNC_0(VAR_2,
        VAR_6->match_criteria,
        VAR_4);
 void *VAR_9 = FUNC_0(VAR_2, VAR_6->match_value,
        VAR_4);

 if (VAR_7 &&
     FUNC_1(VAR_5->mdev,
          VAR_1.bth_dst_qp)) {
  FUNC_2(VAR_3,
    VAR_9, VAR_0, VAR_7);
  FUNC_2(VAR_3,
    VAR_8, VAR_0, 0xffffff);
 }
}
