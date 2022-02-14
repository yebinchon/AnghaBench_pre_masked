
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device_stats {scalar_t__ rx_packets; scalar_t__ rx_dropped; scalar_t__ rx_errors; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {scalar_t__ wrx_correct_pdu; scalar_t__ wrx_len_violation_drop_pdu; scalar_t__ wrx_nodesc_drop_pdu; scalar_t__ wrx_ethcrc_err_pdu; scalar_t__ wrx_tccrc_err_pdu; } ;
struct TYPE_5__ {TYPE_1__* itf; } ;
struct TYPE_4__ {struct net_device_stats stats; } ;


 int FUNC_0 (struct net_device**) ;
 int FUNC_1 (int,char*,int) ;
 TYPE_3__* VAR_0 ;
 struct net_device** VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static struct net_device_stats *FUNC_2(struct net_device *VAR_3)
{
    int VAR_4;

    for ( VAR_4 = 0; VAR_4 < FUNC_0(VAR_1) && VAR_1[VAR_4] != VAR_3; VAR_4++ );
    FUNC_1(VAR_4 >= 0 && VAR_4 < FUNC_0(VAR_1), "ndev = %d (wrong value)", VAR_4);

    VAR_2.itf[VAR_4].stats.rx_errors = VAR_0[VAR_4].wrx_tccrc_err_pdu + VAR_0[VAR_4].wrx_ethcrc_err_pdu;
    VAR_2.itf[VAR_4].stats.rx_dropped = VAR_0[VAR_4].wrx_nodesc_drop_pdu + VAR_0[VAR_4].wrx_len_violation_drop_pdu + (VAR_0[VAR_4].wrx_correct_pdu - VAR_2.itf[VAR_4].stats.rx_packets);

    return &VAR_2.itf[VAR_4].stats;
}
