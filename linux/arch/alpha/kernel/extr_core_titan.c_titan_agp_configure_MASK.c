
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int apctl_v_agp_rate; int apctl_v_agp_hp_rd; int apctl_v_agp_lp_rd; scalar_t__ apctl_v_agp_sba_en; int apctl_v_agp_en; } ;
union TPAchipPCTL {int pctl_q_whole; TYPE_3__ pctl_r_bits; } ;
struct TYPE_11__ {int csr; } ;
struct TYPE_12__ {TYPE_4__ pctl; } ;
typedef TYPE_5__ titan_pachip_port ;
struct TYPE_8__ {int rate; int enable; scalar_t__ sba; } ;
struct TYPE_9__ {TYPE_1__ bits; } ;
struct TYPE_13__ {TYPE_2__ mode; TYPE_5__* private; } ;
typedef TYPE_6__ alpha_agp_info ;


 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(alpha_agp_info *VAR_0)
{
 union TPAchipPCTL VAR_1;
 titan_pachip_port *VAR_2 = VAR_0->private;
 VAR_1.pctl_q_whole = VAR_2->pctl.csr;


 VAR_1.pctl_r_bits.apctl_v_agp_sba_en = VAR_0->mode.bits.sba;


 VAR_1.pctl_r_bits.apctl_v_agp_rate = 0;
 if (VAR_0->mode.bits.rate & 2)
  VAR_1.pctl_r_bits.apctl_v_agp_rate = 1;






 VAR_1.pctl_r_bits.apctl_v_agp_hp_rd = 2;
 VAR_1.pctl_r_bits.apctl_v_agp_lp_rd = 7;




 VAR_1.pctl_r_bits.apctl_v_agp_en = VAR_0->mode.bits.enable;


 FUNC_0("Enabling AGP: %dX%s\n",
        1 << VAR_1.pctl_r_bits.apctl_v_agp_rate,
        VAR_1.pctl_r_bits.apctl_v_agp_sba_en ? " - SBA" : "");


 VAR_2->pctl.csr = VAR_1.pctl_q_whole;


 FUNC_1(100);

 return 0;
}
