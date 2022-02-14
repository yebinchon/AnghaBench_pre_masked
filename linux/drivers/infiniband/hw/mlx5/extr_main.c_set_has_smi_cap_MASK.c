
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5_ib_dev {TYPE_1__* mdev; } ;
struct mlx5_hca_vport_context {int has_smi; } ;
struct TYPE_5__ {int has_smi; } ;
struct TYPE_4__ {TYPE_3__* port_caps; } ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct mlx5_ib_dev*,char*,int,int) ;
 int FUNC_3 (TYPE_1__*,int ,int,int ,struct mlx5_hca_vport_context*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct mlx5_ib_dev *VAR_3)
{
 struct mlx5_hca_vport_context VAR_4;
 int VAR_5;
 int VAR_6;

 for (VAR_6 = 1; VAR_6 <= FUNC_0(VAR_3->mdev->port_caps); VAR_6++) {
  VAR_3->mdev->port_caps[VAR_6 - 1].has_smi = 0;
  if (FUNC_1(VAR_3->mdev, VAR_2) ==
      VAR_0) {
   if (FUNC_1(VAR_3->mdev, VAR_1)) {
    VAR_5 = FUNC_3(VAR_3->mdev, 0,
           VAR_6, 0,
           &VAR_4);
    if (VAR_5) {
     FUNC_2(VAR_3, "query_hca_vport_context for port=%d failed %d\n",
          VAR_6, VAR_5);
     return VAR_5;
    }
    VAR_3->mdev->port_caps[VAR_6 - 1].has_smi =
     VAR_4.has_smi;
   } else {
    VAR_3->mdev->port_caps[VAR_6 - 1].has_smi = 1;
   }
  }
 }
 return 0;
}
