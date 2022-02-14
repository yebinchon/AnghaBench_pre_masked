
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct TYPE_7__ {TYPE_2__* ports_guid; } ;
struct TYPE_8__ {TYPE_3__ alias_guid; } ;
struct mlx4_ib_dev {TYPE_4__ sriov; } ;
typedef int ib_sa_comp_mask ;
struct TYPE_6__ {TYPE_1__* all_rec_per_port; } ;
struct TYPE_5__ {int guid_indexes; int status; int * all_recs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct mlx4_ib_dev *VAR_5, u8 VAR_6, int VAR_7)
{
 int VAR_8;
 u64 VAR_9;
 ib_sa_comp_mask VAR_10 = 0;

 VAR_5->sriov.alias_guid.ports_guid[VAR_6 - 1].all_rec_per_port[VAR_7].status
  = VAR_3;


 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_9 =
   *(u64 *)&VAR_5->sriov.alias_guid.ports_guid[VAR_6 - 1].
   all_rec_per_port[VAR_7].all_recs[VAR_0 * VAR_8];






  if (VAR_1 == VAR_9 ||
      (!VAR_7 && !VAR_8))
   continue;
  VAR_10 |= FUNC_0(VAR_8);
 }
 VAR_5->sriov.alias_guid.ports_guid[VAR_6 - 1].
  all_rec_per_port[VAR_7].guid_indexes |= VAR_10;
 if (VAR_5->sriov.alias_guid.ports_guid[VAR_6 - 1].
     all_rec_per_port[VAR_7].guid_indexes)
  VAR_5->sriov.alias_guid.ports_guid[VAR_6 - 1].
  all_rec_per_port[VAR_7].status = VAR_2;

}
