
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcm_ahci_priv {int port_mask; } ;
struct ahci_host_priv {scalar_t__ mmio; int flags; struct brcm_ahci_priv* plat_data; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct ahci_host_priv *VAR_6)
{
 struct brcm_ahci_priv *VAR_7 = VAR_6->plat_data;
 u32 VAR_8, VAR_9;
 int VAR_10;


 VAR_9 = FUNC_2(VAR_6->mmio + VAR_1);
 if (!(VAR_9 & VAR_2))
  VAR_6->flags |= VAR_0;





 for (VAR_10 = 0, VAR_8 = VAR_3;
      VAR_10 < VAR_5;
      VAR_10++, VAR_8 += VAR_4) {
  if (VAR_7->port_mask & FUNC_0(VAR_10))
   FUNC_3(0xff1003fc,
          VAR_6->mmio + FUNC_1(VAR_8));
 }
}
