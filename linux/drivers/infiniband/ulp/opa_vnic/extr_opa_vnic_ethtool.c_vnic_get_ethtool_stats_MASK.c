
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vstats ;
typedef int u64 ;
typedef int u32 ;
struct opa_vnic_stats {int netstats; } ;
struct opa_vnic_adapter {int stats_lock; TYPE_1__* rn_ops; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_4__ {int stat_offset; int sizeof_stat; } ;
struct TYPE_3__ {int (* ndo_get_stats64 ) (struct net_device*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct opa_vnic_stats*,int ,int) ;
 struct opa_vnic_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*,int *) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2,
       struct ethtool_stats *VAR_3, u64 *VAR_4)
{
 struct opa_vnic_adapter *VAR_5 = FUNC_1(VAR_2);
 struct opa_vnic_stats VAR_6;
 int VAR_7;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 FUNC_2(&VAR_5->stats_lock);
 VAR_5->rn_ops->ndo_get_stats64(VAR_2, &VAR_6.netstats);
 FUNC_3(&VAR_5->stats_lock);
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  char *VAR_8 = (char *)&VAR_6 + VAR_1[VAR_7].stat_offset;

  VAR_4[VAR_7] = (VAR_1[VAR_7].sizeof_stat ==
      sizeof(u64)) ? *(u64 *)VAR_8 : *(u32 *)VAR_8;
 }
}
