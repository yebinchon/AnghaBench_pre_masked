
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct grpci1_priv {unsigned int pci_conf; TYPE_1__* regs; } ;
struct TYPE_2__ {int stat_cmd; int cfg_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 unsigned int VAR_3 ;
 int FUNC_3 (struct grpci1_priv*,unsigned int,int ,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct grpci1_priv *VAR_4, unsigned int VAR_5,
    unsigned int VAR_6, int VAR_7, u32 *VAR_8)
{
 u32 *VAR_9, VAR_10, VAR_11;

 if (VAR_7 & 0x3)
  return -VAR_1;

 if (VAR_5 == 0) {
  VAR_6 += (0x8 * 6);
 } else if (VAR_5 == VAR_3) {
  VAR_5 = 0;
  VAR_6 = 0;
 }


 VAR_11 = FUNC_1(VAR_4->regs->cfg_stat);
 FUNC_2(VAR_4->regs->cfg_stat, (VAR_11 & ~(0xf << 23)) | (VAR_5 << 23));


 VAR_9 = (u32 *) (VAR_4->pci_conf | (VAR_6 << 8) | (VAR_7 & 0xfc));
 VAR_10 = FUNC_0(VAR_9);


 if (FUNC_1(VAR_4->regs->cfg_stat) & VAR_0) {
  *VAR_8 = 0xffffffff;

  VAR_10 = FUNC_1(VAR_4->regs->stat_cmd);
  FUNC_3(VAR_4, VAR_3, 0, VAR_2, VAR_10);
 } else {

  *VAR_8 = FUNC_4(VAR_10);
 }

 return 0;
}
