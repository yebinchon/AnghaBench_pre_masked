
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sg_linearized; scalar_t__ sg_ok; scalar_t__ tx_flow_control_xoff; scalar_t__ tx_flow_control_xon; scalar_t__ tx_kicks; scalar_t__ tx_restart_queue; scalar_t__ tx_timeout_count; scalar_t__ rx_encaps_errors; scalar_t__ tx_queue_running_average; scalar_t__ tx_queue_max; scalar_t__ rx_queue_running_average; scalar_t__ rx_queue_max; } ;
struct vector_private {TYPE_1__ estats; } ;



__attribute__((used)) static void FUNC_0(struct vector_private *VAR_0)
{
 VAR_0->estats.rx_queue_max = 0;
 VAR_0->estats.rx_queue_running_average = 0;
 VAR_0->estats.tx_queue_max = 0;
 VAR_0->estats.tx_queue_running_average = 0;
 VAR_0->estats.rx_encaps_errors = 0;
 VAR_0->estats.tx_timeout_count = 0;
 VAR_0->estats.tx_restart_queue = 0;
 VAR_0->estats.tx_kicks = 0;
 VAR_0->estats.tx_flow_control_xon = 0;
 VAR_0->estats.tx_flow_control_xoff = 0;
 VAR_0->estats.sg_ok = 0;
 VAR_0->estats.sg_linearized = 0;
}
