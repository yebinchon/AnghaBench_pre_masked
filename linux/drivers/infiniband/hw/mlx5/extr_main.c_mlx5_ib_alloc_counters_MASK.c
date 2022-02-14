
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_ib_dev {int num_ports; TYPE_1__* port; int mdev; } ;
struct TYPE_4__ {int set_id_valid; int set_id; int offsets; int names; } ;
struct TYPE_3__ {TYPE_2__ cnts; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mlx5_ib_dev*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct mlx5_ib_dev*) ;
 int FUNC_5 (struct mlx5_ib_dev*,int ,int ) ;
 int FUNC_6 (struct mlx5_ib_dev*,char*,int,int) ;

__attribute__((used)) static int FUNC_7(struct mlx5_ib_dev *VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;
 int VAR_5;
 bool VAR_6;

 VAR_6 = FUNC_0(VAR_2->mdev, VAR_1) != 0;
 VAR_3 = FUNC_2(VAR_2->mdev) ? 1 : VAR_2->num_ports;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4 = FUNC_1(VAR_2, &VAR_2->port[VAR_5].cnts);
  if (VAR_4)
   goto err_alloc;

  FUNC_5(VAR_2, VAR_2->port[VAR_5].cnts.names,
          VAR_2->port[VAR_5].cnts.offsets);

  VAR_4 = FUNC_3(VAR_2->mdev,
            &VAR_2->port[VAR_5].cnts.set_id,
            VAR_6 ?
            VAR_0 : 0);
  if (VAR_4) {
   FUNC_6(VAR_2,
         "couldn't allocate queue counter for port %d, err %d\n",
         VAR_5 + 1, VAR_4);
   goto err_alloc;
  }
  VAR_2->port[VAR_5].cnts.set_id_valid = 1;
 }
 return 0;

err_alloc:
 FUNC_4(VAR_2);
 return VAR_4;
}
