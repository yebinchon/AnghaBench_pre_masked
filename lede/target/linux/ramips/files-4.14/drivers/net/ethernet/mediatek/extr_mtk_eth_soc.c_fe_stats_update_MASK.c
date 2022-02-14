
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct fe_priv {struct fe_hw_stats* hw_stats; } ;
struct fe_hw_stats {int rx_bytes; int rx_packets; int rx_overflow; int rx_fcs_errors; int rx_short_errors; int rx_long_errors; int rx_checksum_errors; int rx_flow_control_packets; int tx_skip; int tx_collisions; int tx_bytes; int tx_packets; int syncp; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 unsigned int* VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct fe_priv *VAR_3)
{
 struct fe_hw_stats *VAR_4 = VAR_3->hw_stats;
 unsigned int VAR_5 = VAR_2[VAR_1];
 u64 VAR_6;

 FUNC_2(&VAR_4->syncp);

 if (FUNC_0(VAR_0)) {
  VAR_4->rx_bytes += FUNC_1(VAR_5);
  VAR_6 = FUNC_1(VAR_5 + 0x04);
  if (VAR_6)
   VAR_4->rx_bytes += (VAR_6 << 32);
  VAR_4->rx_packets += FUNC_1(VAR_5 + 0x08);
  VAR_4->rx_overflow += FUNC_1(VAR_5 + 0x10);
  VAR_4->rx_fcs_errors += FUNC_1(VAR_5 + 0x14);
  VAR_4->rx_short_errors += FUNC_1(VAR_5 + 0x18);
  VAR_4->rx_long_errors += FUNC_1(VAR_5 + 0x1c);
  VAR_4->rx_checksum_errors += FUNC_1(VAR_5 + 0x20);
  VAR_4->rx_flow_control_packets += FUNC_1(VAR_5 + 0x24);
  VAR_4->tx_skip += FUNC_1(VAR_5 + 0x28);
  VAR_4->tx_collisions += FUNC_1(VAR_5 + 0x2c);
  VAR_4->tx_bytes += FUNC_1(VAR_5 + 0x30);
  VAR_6 = FUNC_1(VAR_5 + 0x34);
  if (VAR_6)
   VAR_4->tx_bytes += (VAR_6 << 32);
  VAR_4->tx_packets += FUNC_1(VAR_5 + 0x38);
 } else {
  VAR_4->tx_bytes += FUNC_1(VAR_5);
  VAR_4->tx_packets += FUNC_1(VAR_5 + 0x04);
  VAR_4->tx_skip += FUNC_1(VAR_5 + 0x08);
  VAR_4->tx_collisions += FUNC_1(VAR_5 + 0x0c);
  VAR_4->rx_bytes += FUNC_1(VAR_5 + 0x20);
  VAR_4->rx_packets += FUNC_1(VAR_5 + 0x24);
  VAR_4->rx_overflow += FUNC_1(VAR_5 + 0x28);
  VAR_4->rx_fcs_errors += FUNC_1(VAR_5 + 0x2c);
  VAR_4->rx_short_errors += FUNC_1(VAR_5 + 0x30);
  VAR_4->rx_long_errors += FUNC_1(VAR_5 + 0x34);
  VAR_4->rx_checksum_errors += FUNC_1(VAR_5 + 0x38);
  VAR_4->rx_flow_control_packets += FUNC_1(VAR_5 + 0x3c);
 }

 FUNC_3(&VAR_4->syncp);
}
