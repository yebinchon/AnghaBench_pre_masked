
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpcc_sm_cfg {int force_next_field_polarity; int force_next_frame_porlarity; int field_alt; int frame_alt; int sm_mode; int enable; } ;
struct mpc {int dummy; } ;
struct dcn10_mpc {int dummy; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 struct dcn10_mpc* FUNC_1 (struct mpc*) ;

void FUNC_2(
 struct mpc *VAR_7,
 struct mpcc_sm_cfg *VAR_8,
 int VAR_9)
{
 struct dcn10_mpc *VAR_10 = FUNC_1(VAR_7);

 FUNC_0(VAR_0[VAR_9],
   VAR_1, VAR_8->enable,
   VAR_6, VAR_8->sm_mode,
   VAR_5, VAR_8->frame_alt,
   VAR_2, VAR_8->field_alt,
   VAR_3, VAR_8->force_next_frame_porlarity,
   VAR_4, VAR_8->force_next_field_polarity);
}
