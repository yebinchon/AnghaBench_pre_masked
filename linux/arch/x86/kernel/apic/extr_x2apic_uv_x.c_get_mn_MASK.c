
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int m_skt; } ;
struct TYPE_9__ {int m_skt; } ;
struct TYPE_7__ {int m_skt; } ;
struct TYPE_6__ {int n_skt; } ;
union uvh_rh_gam_config_mmr_u {TYPE_5__ s1; TYPE_4__ s2; TYPE_2__ s3; TYPE_1__ s; void* v; } ;
struct TYPE_8__ {int m_skt; } ;
union uv3h_gr0_gam_gr_config_u {TYPE_3__ s3; void* v; } ;
struct mn {int m_val; int n_lshift; int m_shift; int n_val; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct mn*,int ,int) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct mn *VAR_2)
{
 union uvh_rh_gam_config_mmr_u VAR_3;
 union uv3h_gr0_gam_gr_config_u VAR_4;


 FUNC_4(VAR_2, 0, sizeof(*VAR_2));

 VAR_3.v = FUNC_5(VAR_1);
 VAR_2->n_val = VAR_3.s.n_skt;

 if (FUNC_3()) {
  VAR_2->m_val = 0;
  VAR_2->n_lshift = 0;
 } else if (FUNC_2()) {
  VAR_2->m_val = VAR_3.s3.m_skt;
  VAR_4.v = FUNC_5(VAR_0);
  VAR_2->n_lshift = VAR_4.s3.m_skt;
 } else if (FUNC_1()) {
  VAR_2->m_val = VAR_3.s2.m_skt;
  VAR_2->n_lshift = VAR_2->m_val == 40 ? 40 : 39;
 } else if (FUNC_0()) {
  VAR_2->m_val = VAR_3.s1.m_skt;
  VAR_2->n_lshift = VAR_2->m_val;
 }
 VAR_2->m_shift = VAR_2->m_val ? 64 - VAR_2->m_val : 0;
}
