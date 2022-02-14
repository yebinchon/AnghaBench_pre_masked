
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int jmaxlen; scalar_t__ nh_delete_delay; scalar_t__ pg_delete_delay; scalar_t__ st_syn_ttl; scalar_t__ st_close_ttl; scalar_t__ st_estab_ttl; scalar_t__ st_udp_ttl; scalar_t__ st_icmp_ttl; int states_chunks; } ;
typedef TYPE_1__ ipfw_nat64lsn_cfg ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(ipfw_nat64lsn_cfg *VAR_8)
{

 if (VAR_8->jmaxlen == 0)
  VAR_8->jmaxlen = VAR_2;
 if (VAR_8->jmaxlen > 65536)
  VAR_8->jmaxlen = 65536;
 if (VAR_8->nh_delete_delay == 0)
  VAR_8->nh_delete_delay = VAR_0;
 if (VAR_8->pg_delete_delay == 0)
  VAR_8->pg_delete_delay = VAR_3;
 if (VAR_8->st_syn_ttl == 0)
  VAR_8->st_syn_ttl = VAR_6;
 if (VAR_8->st_close_ttl == 0)
  VAR_8->st_close_ttl = VAR_5;
 if (VAR_8->st_estab_ttl == 0)
  VAR_8->st_estab_ttl = VAR_4;
 if (VAR_8->st_udp_ttl == 0)
  VAR_8->st_udp_ttl = VAR_7;
 if (VAR_8->st_icmp_ttl == 0)
  VAR_8->st_icmp_ttl = VAR_1;

 if (VAR_8->states_chunks == 0)
  VAR_8->states_chunks = 1;
 else if (VAR_8->states_chunks >= 128)
  VAR_8->states_chunks = 128;
 else if (!FUNC_1(VAR_8->states_chunks))
  VAR_8->states_chunks = 1 << FUNC_0(VAR_8->states_chunks);
}
