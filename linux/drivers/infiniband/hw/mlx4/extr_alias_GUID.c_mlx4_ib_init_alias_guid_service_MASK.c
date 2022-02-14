
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
struct mlx4_sriov_alias_guid_port_rec_det {int dummy; } ;
struct TYPE_9__ {int * sa_client; TYPE_6__* ports_guid; int ag_work_lock; } ;
struct TYPE_10__ {TYPE_3__ alias_guid; } ;
struct TYPE_7__ {scalar_t__ (* query_gid ) (TYPE_5__*,int,int ,union ib_gid*) ;} ;
struct TYPE_11__ {TYPE_1__ ops; } ;
struct mlx4_ib_dev {int num_ports; TYPE_4__ sriov; int dev; TYPE_5__ ib_dev; } ;
struct TYPE_12__ {int port; int * wq; int alias_guid_work; TYPE_3__* parent; int cb_list; TYPE_2__* all_rec_per_port; int state_flags; } ;
struct TYPE_8__ {TYPE_6__* all_recs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mlx4_ib_dev*,int,int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int,int ) ;
 int FUNC_9 (TYPE_6__*,int,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int,int) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (char*,int,char*,int) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (TYPE_5__*,int,int ,union ib_gid*) ;

int FUNC_16(struct mlx4_ib_dev *VAR_9)
{
 char VAR_10[15];
 int VAR_11 = 0;
 int VAR_12, VAR_13;
 union ib_gid VAR_14;

 if (!FUNC_10(VAR_9->dev))
  return 0;
 VAR_9->sriov.alias_guid.sa_client =
  FUNC_8(sizeof *VAR_9->sriov.alias_guid.sa_client, VAR_2);
 if (!VAR_9->sriov.alias_guid.sa_client)
  return -VAR_1;

 FUNC_4(VAR_9->sriov.alias_guid.sa_client);

 FUNC_14(&VAR_9->sriov.alias_guid.ag_work_lock);

 for (VAR_12 = 1; VAR_12 <= VAR_9->num_ports; ++VAR_12) {
  if (VAR_9->ib_dev.ops.query_gid(&VAR_9->ib_dev, VAR_12, 0, &VAR_14)) {
   VAR_11 = -VAR_0;
   goto err_unregister;
  }
 }

 for (VAR_12 = 0 ; VAR_12 < VAR_9->num_ports; VAR_12++) {
  FUNC_9(&VAR_9->sriov.alias_guid.ports_guid[VAR_12], 0,
         sizeof (struct mlx4_sriov_alias_guid_port_rec_det));
  VAR_9->sriov.alias_guid.ports_guid[VAR_12].state_flags |=
    VAR_3;
  for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {

   FUNC_9(VAR_9->sriov.alias_guid.ports_guid[VAR_12].
    all_rec_per_port[VAR_13].all_recs, 0xFF,
    sizeof(VAR_9->sriov.alias_guid.ports_guid[VAR_12].
    all_rec_per_port[VAR_13].all_recs));
  }
  FUNC_1(&VAR_9->sriov.alias_guid.ports_guid[VAR_12].cb_list);

  if (VAR_8)
   for (VAR_13 = 1; VAR_13 < VAR_4; VAR_13++)
    FUNC_11(VAR_9->dev, 0, VAR_13, VAR_12 + 1);
  for (VAR_13 = 0 ; VAR_13 < VAR_5; VAR_13++)
   FUNC_6(VAR_9, VAR_12 + 1, VAR_13);

  VAR_9->sriov.alias_guid.ports_guid[VAR_12].parent = &VAR_9->sriov.alias_guid;
  VAR_9->sriov.alias_guid.ports_guid[VAR_12].port = VAR_12;

  FUNC_13(VAR_10, sizeof VAR_10, "alias_guid%d", VAR_12);
  VAR_9->sriov.alias_guid.ports_guid[VAR_12].wq =
   FUNC_2(VAR_10, VAR_6);
  if (!VAR_9->sriov.alias_guid.ports_guid[VAR_12].wq) {
   VAR_11 = -VAR_1;
   goto err_thread;
  }
  FUNC_0(&VAR_9->sriov.alias_guid.ports_guid[VAR_12].alias_guid_work,
     VAR_7);
 }
 return 0;

err_thread:
 for (--VAR_12; VAR_12 >= 0; VAR_12--) {
  FUNC_3(VAR_9->sriov.alias_guid.ports_guid[VAR_12].wq);
  VAR_9->sriov.alias_guid.ports_guid[VAR_12].wq = ((void*)0);
 }

err_unregister:
 FUNC_5(VAR_9->sriov.alias_guid.sa_client);
 FUNC_7(VAR_9->sriov.alias_guid.sa_client);
 VAR_9->sriov.alias_guid.sa_client = ((void*)0);
 FUNC_12("init_alias_guid_service: Failed. (ret:%d)\n", VAR_11);
 return VAR_11;
}
