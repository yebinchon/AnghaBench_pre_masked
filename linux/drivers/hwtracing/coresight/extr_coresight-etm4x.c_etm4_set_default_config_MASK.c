
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etmv4_config {int eventctrl0; int eventctrl1; int stall_ctrl; int syncfreq; int ts_ctrl; int vinst_ctrl; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct etmv4_config *VAR_0)
{

 VAR_0->eventctrl0 = 0x0;
 VAR_0->eventctrl1 = 0x0;


 VAR_0->stall_ctrl = 0x0;


 VAR_0->syncfreq = 0xC;


 VAR_0->ts_ctrl = 0x0;


 VAR_0->vinst_ctrl |= FUNC_0(0);
}
