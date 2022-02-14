
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct grpci2_priv {unsigned int pci_conf; TYPE_1__* regs; } ;
struct TYPE_2__ {int sts_cap; int ctrl; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct grpci2_priv *VAR_5, unsigned int VAR_6,
    unsigned int VAR_7, int VAR_8, u32 *VAR_9)
{
 unsigned int *VAR_10;
 unsigned long VAR_11;
 u32 VAR_12;

 if (VAR_8 & 0x3)
  return -VAR_0;

 if (VAR_6 == 0) {
  VAR_7 += (0x8 * 6);
 } else if (VAR_6 == VAR_3) {
  VAR_6 = 0;
  VAR_7 = 0;
 }


 FUNC_3(&VAR_4, VAR_11);
 FUNC_2(VAR_5->regs->ctrl, (FUNC_1(VAR_5->regs->ctrl) & ~(0xff << 16)) |
       (VAR_6 << 16));
 FUNC_4(&VAR_4, VAR_11);


 FUNC_2(VAR_5->regs->sts_cap, (VAR_1 | VAR_2));

 VAR_10 = (unsigned int *) (VAR_5->pci_conf |
      (VAR_7 << 8) | (VAR_8 & 0xfc));
 VAR_12 = FUNC_0(VAR_10);




 while ((FUNC_1(VAR_5->regs->sts_cap) & VAR_2) == 0)
  ;

 if (FUNC_1(VAR_5->regs->sts_cap) & VAR_1) {
  *VAR_9 = 0xffffffff;
 } else {

  *VAR_9 = FUNC_5(VAR_12);
 }

 return 0;
}
