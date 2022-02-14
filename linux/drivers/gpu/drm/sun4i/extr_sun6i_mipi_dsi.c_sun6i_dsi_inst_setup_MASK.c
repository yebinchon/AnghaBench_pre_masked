
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sun6i_dsi {int regs; } ;
typedef enum sun6i_dsi_inst_packet { ____Placeholder_sun6i_dsi_inst_packet } sun6i_dsi_inst_packet ;
typedef enum sun6i_dsi_inst_mode { ____Placeholder_sun6i_dsi_inst_mode } sun6i_dsi_inst_mode ;
typedef enum sun6i_dsi_inst_id { ____Placeholder_sun6i_dsi_inst_id } sun6i_dsi_inst_id ;
typedef enum sun6i_dsi_inst_escape { ____Placeholder_sun6i_dsi_inst_escape } sun6i_dsi_inst_escape ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct sun6i_dsi *VAR_1,
     enum sun6i_dsi_inst_id VAR_2,
     enum sun6i_dsi_inst_mode VAR_3,
     bool VAR_4, u8 VAR_5,
     enum sun6i_dsi_inst_packet VAR_6,
     enum sun6i_dsi_inst_escape VAR_7)
{
 FUNC_5(VAR_1->regs, FUNC_3(VAR_2),
       FUNC_1(VAR_3) |
       FUNC_0(VAR_7) |
       FUNC_4(VAR_6) |
       (VAR_4 ? VAR_0 : 0) |
       FUNC_2(VAR_5));
}
