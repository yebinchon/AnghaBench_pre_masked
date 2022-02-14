
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switch_port_stats {unsigned long long tx_bytes; unsigned long long rx_bytes; } ;
struct switch_dev {int dummy; } ;
struct rtl8366_smi {int num_ports; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_mib_counter ) (struct rtl8366_smi*,int,int,unsigned long long*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct rtl8366_smi*,int,int,unsigned long long*) ;
 int FUNC_1 (struct rtl8366_smi*,int,int,unsigned long long*) ;
 struct rtl8366_smi* FUNC_2 (struct switch_dev*) ;

int FUNC_3(struct switch_dev *VAR_1, int VAR_2,
    struct switch_port_stats *VAR_3,
    int VAR_4, int VAR_5)
{
 struct rtl8366_smi *VAR_6 = FUNC_2(VAR_1);
 unsigned long long VAR_7 = 0;
 int VAR_8;

 if (VAR_2 >= VAR_6->num_ports)
  return -VAR_0;

 VAR_8 = VAR_6->ops->get_mib_counter(VAR_6, VAR_4, VAR_2, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_3->tx_bytes = VAR_7;

 VAR_8 = VAR_6->ops->get_mib_counter(VAR_6, VAR_5, VAR_2, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_3->rx_bytes = VAR_7;

 return 0;
}
