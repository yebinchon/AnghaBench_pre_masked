
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlx4_next_alias_guid_work {int dummy; } ;
struct TYPE_4__ {int ag_work_lock; } ;
struct TYPE_3__ {TYPE_2__ alias_guid; } ;
struct mlx4_ib_dev {TYPE_1__ sriov; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_ib_dev*,int ,int *) ;
 int FUNC_1 (struct mlx4_ib_dev*,int ,struct mlx4_next_alias_guid_work*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct mlx4_ib_dev *VAR_1, u8 VAR_2,
         struct mlx4_next_alias_guid_work *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;
 int VAR_6 = 0;

 FUNC_2(&VAR_1->sriov.alias_guid.ag_work_lock, VAR_4);
 VAR_5 = FUNC_0(VAR_1, VAR_2, ((void*)0));

 if (VAR_5 < 0) {
  VAR_6 = -VAR_0;
  goto out;
 }

 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5);
out:
 FUNC_3(&VAR_1->sriov.alias_guid.ag_work_lock, VAR_4);
 return VAR_6;
}
