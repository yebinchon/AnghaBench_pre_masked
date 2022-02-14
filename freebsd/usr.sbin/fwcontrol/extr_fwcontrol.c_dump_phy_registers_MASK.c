
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct phyreg_page1 {int compliance; int* vendor_id; int* product_id; } ;
struct phyreg_page0 {int astat; int bstat; int ch; int con; int rxok; int dis; int negotiated_speed; int pie; int fault; int stanby_fault; int disscrm; int b_only; int dc_connected; int max_port_speed; int lpp; int cable_speed; int connection_unreliable; int beta_mode; int port_error; int loop_disable; int in_standby; int hard_disable; } ;
struct phyreg_base {int phy_id; int r; int cps; int rhb; int ibr; int gap_count; int extended; int num_ports; int phy_speed; int delay; int lctrl; int c; int jitter; int pwr_class; int wdie; int isbr; int ctoi; int cpsi; int stoi; int pei; int eaa; int emc; int legacy_spd; int blink; int bridge; int page_select; int port_select; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,int *,int,int) ;
 int FUNC_2 (int,int *,int ,int) ;

__attribute__((used)) static void
FUNC_3(int VAR_0)
{
 struct phyreg_base VAR_1;
 struct phyreg_page0 VAR_2;
 struct phyreg_page1 VAR_3;
 int VAR_4;

 FUNC_0("=== base register ===\n");
 FUNC_2(VAR_0, (u_int8_t *)&VAR_1, 0, 8);
 FUNC_0(
     "Physical_ID:%d  R:%d  CPS:%d\n"
     "RHB:%d  IBR:%d  Gap_Count:%d\n"
     "Extended:%d Num_Ports:%d\n"
     "PHY_Speed:%d Delay:%d\n"
     "LCtrl:%d C:%d Jitter:%d Pwr_Class:%d\n"
     "WDIE:%d ISBR:%d CTOI:%d CPSI:%d STOI:%d PEI:%d EAA:%d EMC:%d\n"
     "Max_Legacy_SPD:%d BLINK:%d Bridge:%d\n"
     "Page_Select:%d Port_Select%d\n",
     VAR_1.phy_id, VAR_1.r, VAR_1.cps,
     VAR_1.rhb, VAR_1.ibr, VAR_1.gap_count,
     VAR_1.extended, VAR_1.num_ports,
     VAR_1.phy_speed, VAR_1.delay,
     VAR_1.lctrl, VAR_1.c, VAR_1.jitter, VAR_1.pwr_class,
     VAR_1.wdie, VAR_1.isbr, VAR_1.ctoi, VAR_1.cpsi, VAR_1.stoi, VAR_1.pei, VAR_1.eaa, VAR_1.emc,
     VAR_1.legacy_spd, VAR_1.blink, VAR_1.bridge,
     VAR_1.page_select, VAR_1.port_select
 );

 for (VAR_4 = 0; VAR_4 < VAR_1.num_ports; VAR_4 ++) {
  FUNC_0("\n=== page 0 port %d ===\n", VAR_4);
  FUNC_1(VAR_0, (u_int8_t *)&VAR_2, 0, VAR_4);
  FUNC_0(
      "Astat:%d BStat:%d Ch:%d Con:%d RXOK:%d Dis:%d\n"
      "Negotiated_speed:%d PIE:%d Fault:%d Stanby_fault:%d Disscrm:%d B_Only:%d\n"
      "DC_connected:%d Max_port_speed:%d LPP:%d Cable_speed:%d\n"
      "Connection_unreliable:%d Beta_mode:%d\n"
      "Port_error:0x%x\n"
      "Loop_disable:%d In_standby:%d Hard_disable:%d\n",
      VAR_2.astat, VAR_2.bstat, VAR_2.ch, VAR_2.con, VAR_2.rxok, VAR_2.dis,
      VAR_2.negotiated_speed, VAR_2.pie, VAR_2.fault, VAR_2.stanby_fault, VAR_2.disscrm, VAR_2.b_only,
      VAR_2.dc_connected, VAR_2.max_port_speed, VAR_2.lpp, VAR_2.cable_speed,
      VAR_2.connection_unreliable, VAR_2.beta_mode,
      VAR_2.port_error,
      VAR_2.loop_disable, VAR_2.in_standby, VAR_2.hard_disable
  );
 }
 FUNC_0("\n=== page 1 ===\n");
 FUNC_1(VAR_0, (u_int8_t *)&VAR_3, 1, 0);
 FUNC_0(
     "Compliance:%d\n"
     "Vendor_ID:0x%06x\n"
     "Product_ID:0x%06x\n",
     VAR_3.compliance,
     (VAR_3.vendor_id[0] << 16) | (VAR_3.vendor_id[1] << 8) | VAR_3.vendor_id[2],
     (VAR_3.product_id[0] << 16) | (VAR_3.product_id[1] << 8) | VAR_3.product_id[2]
 );
}
