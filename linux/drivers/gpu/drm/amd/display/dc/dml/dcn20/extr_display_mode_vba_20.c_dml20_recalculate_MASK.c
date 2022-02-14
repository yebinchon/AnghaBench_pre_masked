
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double FabricAndDRAMBandwidth; int DRAMSpeed; int NumberOfChannels; int DRAMChannelWidth; int FabricClock; int FabricDatapathToDCNDataReturn; } ;
struct display_mode_lib {TYPE_1__ vba; } ;


 int FUNC_0 (struct display_mode_lib*) ;
 int FUNC_1 (struct display_mode_lib*) ;
 int FUNC_2 (struct display_mode_lib*) ;
 int FUNC_3 (struct display_mode_lib*) ;
 double FUNC_4 (int,int) ;

void FUNC_5(struct display_mode_lib *VAR_0)
{
 FUNC_0(VAR_0);
 VAR_0->vba.FabricAndDRAMBandwidth = FUNC_4(
  VAR_0->vba.DRAMSpeed * VAR_0->vba.NumberOfChannels * VAR_0->vba.DRAMChannelWidth,
  VAR_0->vba.FabricClock * VAR_0->vba.FabricDatapathToDCNDataReturn) / 1000.0;
 FUNC_1(VAR_0);
 FUNC_3(VAR_0);
 FUNC_2(VAR_0);
}
