
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef void* u16 ;
struct sfe_ipv6_connection_match {int flags; void* xlate_dest_csum_adjustment; TYPE_4__* xlate_dest_ip; int xlate_dest_port; int match_dest_port; TYPE_3__* match_dest_ip; void* xlate_src_csum_adjustment; TYPE_2__* xlate_src_ip; int xlate_src_port; int match_src_port; TYPE_1__* match_src_ip; } ;
struct TYPE_8__ {int * addr; } ;
struct TYPE_7__ {int * addr; } ;
struct TYPE_6__ {int * addr; } ;
struct TYPE_5__ {int * addr; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct sfe_ipv6_connection_match *VAR_2)
{
 u32 VAR_3[9];
 u32 *VAR_4;
 u16 *VAR_5;






 if (VAR_2->flags & VAR_1) {
  u32 VAR_6 = 0;
  u32 VAR_7 = 0;





  VAR_4 = VAR_3;
  *(VAR_4++) = VAR_2->match_src_ip->addr[0];
  *(VAR_4++) = VAR_2->match_src_ip->addr[1];
  *(VAR_4++) = VAR_2->match_src_ip->addr[2];
  *(VAR_4++) = VAR_2->match_src_ip->addr[3];

  VAR_5 = (u16 *)VAR_4;
  *(VAR_5++) = VAR_2->match_src_port;
  *(VAR_5++) = ~VAR_2->xlate_src_port;
  VAR_4 = (u32 *)VAR_5;

  *(VAR_4++) = ~VAR_2->xlate_src_ip->addr[0];
  *(VAR_4++) = ~VAR_2->xlate_src_ip->addr[1];
  *(VAR_4++) = ~VAR_2->xlate_src_ip->addr[2];
  *(VAR_4++) = ~VAR_2->xlate_src_ip->addr[3];
  for (VAR_4 = VAR_3; VAR_4 < VAR_3 + 9; VAR_4++) {
   u32 VAR_8 = *VAR_4;
   VAR_6 += VAR_7;
   VAR_6 += VAR_8;
   VAR_7 = (VAR_8 > VAR_6);
  }
  VAR_6 += VAR_7;
  VAR_6 = (VAR_6 & 0xffff) + (VAR_6 >> 16);
  VAR_6 = (VAR_6 & 0xffff) + (VAR_6 >> 16);
  VAR_2->xlate_src_csum_adjustment = (u16)VAR_6;
 }

 if (VAR_2->flags & VAR_0) {
  u32 VAR_9 = 0;
  u32 VAR_10 = 0;





  VAR_4 = VAR_3;
  *(VAR_4++) = VAR_2->match_dest_ip->addr[0];
  *(VAR_4++) = VAR_2->match_dest_ip->addr[1];
  *(VAR_4++) = VAR_2->match_dest_ip->addr[2];
  *(VAR_4++) = VAR_2->match_dest_ip->addr[3];

  VAR_5 = (u16 *)VAR_4;
  *(VAR_5++) = VAR_2->match_dest_port;
  *(VAR_5++) = ~VAR_2->xlate_dest_port;
  VAR_4 = (u32 *)VAR_5;

  *(VAR_4++) = ~VAR_2->xlate_dest_ip->addr[0];
  *(VAR_4++) = ~VAR_2->xlate_dest_ip->addr[1];
  *(VAR_4++) = ~VAR_2->xlate_dest_ip->addr[2];
  *(VAR_4++) = ~VAR_2->xlate_dest_ip->addr[3];
  for (VAR_4 = VAR_3; VAR_4 < VAR_3 + 9; VAR_4++) {
   u32 VAR_11 = *VAR_4;
   VAR_9 += VAR_10;
   VAR_9 += VAR_11;
   VAR_10 = (VAR_11 > VAR_9);
  }
  VAR_9 += VAR_10;
  VAR_9 = (VAR_9 & 0xffff) + (VAR_9 >> 16);
  VAR_9 = (VAR_9 & 0xffff) + (VAR_9 >> 16);
  VAR_2->xlate_dest_csum_adjustment = (u16)VAR_9;
 }
}
