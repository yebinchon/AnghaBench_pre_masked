
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ grp; void* non_tag_type; void* ip4_tag_type; void* ip6_tag_type; void* tcp4_tag_type; void* tcp6_tag_type; int inc_prt_flag; int ip4_pctl_flag; int ip4_dprt_flag; int ip4_sprt_flag; int ip4_dst_flag; int ip4_src_flag; int ip6_nxth_flag; int ip6_dprt_flag; int ip6_sprt_flag; int ip6_dst_flag; int ip6_src_flag; } ;
union cvmx_pip_prt_tagx {TYPE_2__ s; void* u64; } ;
struct TYPE_3__ {int qos; int mode; } ;
union cvmx_pip_prt_cfgx {TYPE_1__ s; void* u64; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,union cvmx_pip_prt_cfgx,union cvmx_pip_prt_tagx) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(int VAR_13)
{
 union cvmx_pip_prt_cfgx VAR_14;
 union cvmx_pip_prt_tagx VAR_15;

 VAR_14.u64 = FUNC_3(FUNC_0(VAR_13));
 VAR_15.u64 = FUNC_3(FUNC_1(VAR_13));


 VAR_14.s.qos = VAR_13 & 0x7;


 VAR_14.s.mode = VAR_0;

 VAR_15.s.ip6_src_flag = VAR_10;
 VAR_15.s.ip6_dst_flag = VAR_7;
 VAR_15.s.ip6_sprt_flag = VAR_11;
 VAR_15.s.ip6_dprt_flag = VAR_8;
 VAR_15.s.ip6_nxth_flag = VAR_9;
 VAR_15.s.ip4_src_flag = VAR_5;
 VAR_15.s.ip4_dst_flag = VAR_2;
 VAR_15.s.ip4_sprt_flag = VAR_6;
 VAR_15.s.ip4_dprt_flag = VAR_3;
 VAR_15.s.ip4_pctl_flag = VAR_4;
 VAR_15.s.inc_prt_flag = VAR_1;
 VAR_15.s.tcp6_tag_type = VAR_12;
 VAR_15.s.tcp4_tag_type = VAR_12;
 VAR_15.s.ip6_tag_type = VAR_12;
 VAR_15.s.ip4_tag_type = VAR_12;
 VAR_15.s.non_tag_type = VAR_12;

 VAR_15.s.grp = 0;

 FUNC_2(VAR_13, VAR_14, VAR_15);

 return 0;
}
