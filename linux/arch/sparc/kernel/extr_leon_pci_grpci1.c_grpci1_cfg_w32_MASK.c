
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct grpci1_priv {unsigned int pci_conf; TYPE_1__* regs; } ;
struct TYPE_2__ {int cfg_stat; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 unsigned int VAR_1 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct grpci1_priv *VAR_2, unsigned int VAR_3,
    unsigned int VAR_4, int VAR_5, u32 VAR_6)
{
 unsigned int *VAR_7;
 u32 VAR_8;

 if (VAR_5 & 0x3)
  return -VAR_0;

 if (VAR_3 == 0) {
  VAR_4 += (0x8 * 6);
 } else if (VAR_3 == VAR_1) {
  VAR_3 = 0;
  VAR_4 = 0;
 }


 VAR_8 = FUNC_1(VAR_2->regs->cfg_stat);
 FUNC_2(VAR_2->regs->cfg_stat, (VAR_8 & ~(0xf << 23)) | (VAR_3 << 23));

 VAR_7 = (unsigned int *) (VAR_2->pci_conf |
      (VAR_4 << 8) | (VAR_5 & 0xfc));
 FUNC_0(VAR_7, FUNC_3(VAR_6));

 return 0;
}
