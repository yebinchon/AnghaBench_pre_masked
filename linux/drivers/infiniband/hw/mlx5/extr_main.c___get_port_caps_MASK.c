
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_ib_dev {TYPE_2__* mdev; int ib_dev; } ;
struct ib_udata {int outlen; int inlen; } ;
struct ib_port_attr {int gid_tbl_len; int max_pkeys; } ;
struct ib_device_attr {int gid_tbl_len; int max_pkeys; } ;
struct TYPE_4__ {TYPE_1__* port_caps; } ;
struct TYPE_3__ {int gid_table_len; int pkey_table_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_port_attr*) ;
 struct ib_port_attr* FUNC_1 (int,int ) ;
 struct ib_port_attr* FUNC_2 (int,int ) ;
 int FUNC_3 (struct mlx5_ib_dev*,char*,int,int ,int ) ;
 int FUNC_4 (int *,struct ib_port_attr*,struct ib_udata*) ;
 int FUNC_5 (int *,int,struct ib_port_attr*) ;
 int FUNC_6 (struct mlx5_ib_dev*,char*,int,...) ;

__attribute__((used)) static int FUNC_7(struct mlx5_ib_dev *VAR_2, u8 VAR_3)
{
 struct ib_device_attr *VAR_4 = ((void*)0);
 struct ib_port_attr *VAR_5 = ((void*)0);
 int VAR_6 = -VAR_0;
 struct ib_udata VAR_7 = {.inlen = 0, .outlen = 0};

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  goto out;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  goto out;

 VAR_6 = FUNC_4(&VAR_2->ib_dev, VAR_4, &VAR_7);
 if (VAR_6) {
  FUNC_6(VAR_2, "query_device failed %d\n", VAR_6);
  goto out;
 }

 VAR_6 = FUNC_5(&VAR_2->ib_dev, VAR_3, VAR_5);
 if (VAR_6) {
  FUNC_6(VAR_2, "query_port %d failed %d\n",
        VAR_3, VAR_6);
  goto out;
 }

 VAR_2->mdev->port_caps[VAR_3 - 1].pkey_table_len =
     VAR_4->max_pkeys;
 VAR_2->mdev->port_caps[VAR_3 - 1].gid_table_len =
     VAR_5->gid_tbl_len;
 FUNC_3(VAR_2, "port %d: pkey_table_len %d, gid_table_len %d\n",
      VAR_3, VAR_4->max_pkeys, VAR_5->gid_tbl_len);

out:
 FUNC_0(VAR_5);
 FUNC_0(VAR_4);

 return VAR_6;
}
