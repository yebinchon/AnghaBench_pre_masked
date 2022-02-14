
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nuport_mac_priv {int dummy; } ;
struct net_device {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct net_device*,char*,...) ;
 struct nuport_mac_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct nuport_mac_priv*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct nuport_mac_priv*) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_3)
{
 struct nuport_mac_priv *VAR_4 = FUNC_1(VAR_3);
 unsigned int VAR_5;

 FUNC_2(VAR_3, "transmit timeout, attempting recovery\n");

 FUNC_0(VAR_3, "TX DMA regs\n");
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5 += 4)
  FUNC_0(VAR_3, "[%02x]: 0x%08x\n", VAR_5, FUNC_5(VAR_2 + VAR_5));
 FUNC_0(VAR_3, "RX DMA regs\n");
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5 += 4)
  FUNC_0(VAR_3, "[%02x]: 0x%08x\n", VAR_5, FUNC_5(VAR_1 + VAR_5));

 FUNC_4(VAR_4);
 FUNC_6(VAR_4);

 FUNC_3(VAR_3);
}
