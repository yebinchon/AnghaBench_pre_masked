
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u64 ;
struct mlx4_sriov_alias_guid_info_rec_det {scalar_t__ status; scalar_t__ time_to_run; scalar_t__ guid_indexes; } ;
struct TYPE_5__ {TYPE_1__* ports_guid; } ;
struct TYPE_6__ {TYPE_2__ alias_guid; } ;
struct mlx4_ib_dev {TYPE_3__ sriov; } ;
struct TYPE_4__ {struct mlx4_sriov_alias_guid_info_rec_det* all_rec_per_port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct mlx4_ib_dev *VAR_3, u8 VAR_4,
         int *VAR_5)
{
 int VAR_6 = -1;
 u64 VAR_7 = 0;
 struct mlx4_sriov_alias_guid_info_rec_det VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  VAR_8 = VAR_3->sriov.alias_guid.ports_guid[VAR_4].
   all_rec_per_port[VAR_9];
  if (VAR_8.status == VAR_0 &&
      VAR_8.guid_indexes) {
   if (VAR_6 == -1 ||
       VAR_8.time_to_run < VAR_7) {
    VAR_6 = VAR_9;
    VAR_7 = VAR_8.time_to_run;
   }
  }
 }
 if (VAR_5) {
  u64 VAR_10 = FUNC_1();

  *VAR_5 = (VAR_7 < VAR_10) ? 0 :
   FUNC_0((VAR_7 - VAR_10), VAR_1);
 }

 return VAR_6;
}
