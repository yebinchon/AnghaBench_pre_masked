
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {TYPE_1__* ethtool_ops; } ;
struct fe_soc_data {scalar_t__* reg_table; } ;
struct fe_priv {struct fe_soc_data* soc; } ;
struct TYPE_2__ {int get_ethtool_stats; int get_sset_count; int get_strings; } ;


 size_t VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct fe_priv* FUNC_0 (struct net_device*) ;

void FUNC_1(struct net_device *VAR_5)
{
 struct fe_priv *VAR_6 = FUNC_0(VAR_5);
 struct fe_soc_data *VAR_7 = VAR_6->soc;

 if (VAR_7->reg_table[VAR_0]) {
  VAR_1.get_strings = VAR_4;
  VAR_1.get_sset_count = VAR_3;
  VAR_1.get_ethtool_stats = VAR_2;
 }

 VAR_5->ethtool_ops = &VAR_1;
}
