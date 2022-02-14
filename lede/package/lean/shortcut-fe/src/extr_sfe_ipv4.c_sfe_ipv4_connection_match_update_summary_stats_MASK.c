
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfe_ipv4_connection_match {scalar_t__ rx_byte_count; int rx_byte_count64; scalar_t__ rx_packet_count; int rx_packet_count64; } ;



__attribute__((used)) static inline void FUNC_0(struct sfe_ipv4_connection_match *VAR_0)
{
 VAR_0->rx_packet_count64 += VAR_0->rx_packet_count;
 VAR_0->rx_packet_count = 0;
 VAR_0->rx_byte_count64 += VAR_0->rx_byte_count;
 VAR_0->rx_byte_count = 0;
}
