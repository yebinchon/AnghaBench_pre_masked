
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcm_ahci_priv {int port_mask; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct brcm_ahci_priv*,int) ;

__attribute__((used)) static void FUNC_2(struct brcm_ahci_priv *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1->port_mask & FUNC_0(VAR_2))
   FUNC_1(VAR_1, VAR_2);
}
