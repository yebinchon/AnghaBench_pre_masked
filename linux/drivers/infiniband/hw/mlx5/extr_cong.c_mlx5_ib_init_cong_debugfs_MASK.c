
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_ib_dev {TYPE_1__* port; } ;
struct mlx5_ib_dbg_cc_params {TYPE_3__* params; int root; } ;
struct TYPE_5__ {int dbg_root; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;
struct TYPE_6__ {int offset; int port_num; int dentry; struct mlx5_ib_dev* dev; } ;
struct TYPE_4__ {struct mlx5_ib_dbg_cc_params* dbg_cc_params; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int,int ,TYPE_3__*,int *) ;
 struct mlx5_ib_dbg_cc_params* FUNC_3 (int,int ) ;
 int VAR_5 ;
 int FUNC_4 (struct mlx5_ib_dev*,int) ;
 int * VAR_6 ;
 struct mlx5_core_dev* FUNC_5 (struct mlx5_ib_dev*,int,int *) ;
 int FUNC_6 (struct mlx5_ib_dev*,int) ;
 int FUNC_7 (struct mlx5_ib_dev*,char*) ;

void FUNC_8(struct mlx5_ib_dev *VAR_7, u8 VAR_8)
{
 struct mlx5_ib_dbg_cc_params *VAR_9;
 struct mlx5_core_dev *VAR_10;
 int VAR_11;

 if (!VAR_5)
  return;


 VAR_10 = FUNC_5(VAR_7, VAR_8 + 1, ((void*)0));
 if (!VAR_10)
  return;

 if (!FUNC_0(VAR_10, VAR_3) ||
     !FUNC_0(VAR_10, VAR_2))
  goto put_mdev;

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_0);
 if (!VAR_9)
  goto err;

 VAR_7->port[VAR_8].dbg_cc_params = VAR_9;

 VAR_9->root = FUNC_1("cc_params",
       VAR_10->priv.dbg_root);

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  VAR_9->params[VAR_11].offset = VAR_11;
  VAR_9->params[VAR_11].dev = VAR_7;
  VAR_9->params[VAR_11].port_num = VAR_8;
  VAR_9->params[VAR_11].dentry =
   FUNC_2(VAR_6[VAR_11],
         0600, VAR_9->root,
         &VAR_9->params[VAR_11],
         &VAR_4);
 }

put_mdev:
 FUNC_6(VAR_7, VAR_8 + 1);
 return;

err:
 FUNC_7(VAR_7, "cong debugfs failure\n");
 FUNC_4(VAR_7, VAR_8);
 FUNC_6(VAR_7, VAR_8 + 1);





 return;
}
