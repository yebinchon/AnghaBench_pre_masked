
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sfe_ipv4_connection_match {int flags; int match_src_ip; int xlate_src_ip; int xlate_src_port; int match_src_port; int xlate_src_csum_adjustment; int match_dest_ip; int xlate_dest_ip; int xlate_dest_port; int match_dest_port; int xlate_dest_csum_adjustment; int xlate_src_partial_csum_adjustment; int xlate_dest_partial_csum_adjustment; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct sfe_ipv4_connection_match *VAR_2)
{





 if (VAR_2->flags & VAR_1) {




  u16 VAR_3 = VAR_2->match_src_ip >> 16;
  u16 VAR_4 = VAR_2->match_src_ip & 0xffff;
  u32 VAR_5 = ~VAR_2->xlate_src_ip;
  u16 VAR_6 = VAR_5 >> 16;
  u16 VAR_7 = VAR_5 & 0xffff;
  u16 VAR_8 = ~VAR_2->xlate_src_port;
  u32 VAR_9;
  VAR_9 = VAR_3 + VAR_4 + VAR_2->match_src_port
        + VAR_6 + VAR_7 + VAR_8;
  VAR_9 = (VAR_9 & 0xffff) + (VAR_9 >> 16);
  VAR_9 = (VAR_9 & 0xffff) + (VAR_9 >> 16);
  VAR_2->xlate_src_csum_adjustment = (u16)VAR_9;

 }

 if (VAR_2->flags & VAR_0) {




  u16 VAR_10 = VAR_2->match_dest_ip >> 16;
  u16 VAR_11 = VAR_2->match_dest_ip & 0xffff;
  u32 VAR_12 = ~VAR_2->xlate_dest_ip;
  u16 VAR_13 = VAR_12 >> 16;
  u16 VAR_14 = VAR_12 & 0xffff;
  u16 VAR_15 = ~VAR_2->xlate_dest_port;
  u32 VAR_16;
  VAR_16 = VAR_10 + VAR_11 + VAR_2->match_dest_port
        + VAR_13 + VAR_14 + VAR_15;
  VAR_16 = (VAR_16 & 0xffff) + (VAR_16 >> 16);
  VAR_16 = (VAR_16 & 0xffff) + (VAR_16 >> 16);
  VAR_2->xlate_dest_csum_adjustment = (u16)VAR_16;
 }

 if (VAR_2->flags & VAR_1) {
  u32 VAR_17 = ~VAR_2->match_src_ip + VAR_2->xlate_src_ip;
  if (VAR_17 < VAR_2->xlate_src_ip) {
   VAR_17++;
  }

  VAR_17 = (VAR_17 & 0xffff) + (VAR_17 >> 16);
  VAR_17 = (VAR_17 & 0xffff) + (VAR_17 >> 16);
  VAR_2->xlate_src_partial_csum_adjustment = (u16)VAR_17;
 }

 if (VAR_2->flags & VAR_0) {
  u32 VAR_18 = ~VAR_2->match_dest_ip + VAR_2->xlate_dest_ip;
  if (VAR_18 < VAR_2->xlate_dest_ip) {
   VAR_18++;
  }

  VAR_18 = (VAR_18 & 0xffff) + (VAR_18 >> 16);
  VAR_18 = (VAR_18 & 0xffff) + (VAR_18 >> 16);
  VAR_2->xlate_dest_partial_csum_adjustment = (u16)VAR_18;
 }

}
