
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_host {int sfpb; } ;
typedef enum sfpb_ahb_arb_master_port_en { ____Placeholder_sfpb_ahb_arb_master_port_en } sfpb_ahb_arb_master_port_en ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct msm_dsi_host *VAR_4, bool VAR_5)
{
 enum sfpb_ahb_arb_master_port_en VAR_6;

 if (!VAR_4->sfpb)
  return;

 VAR_6 = VAR_5 ? VAR_3 : VAR_2;

 FUNC_1(VAR_4->sfpb, VAR_0,
   VAR_1,
   FUNC_0(VAR_6));
}
