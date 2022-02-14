
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mem_ctl_info {int pdev; struct cell_edac_priv* pvt_info; } ;
struct cell_edac_priv {int prev_fir; int chanmask; TYPE_1__* regs; } ;
struct TYPE_2__ {int mic_fir; int mic_df_ecc_address_1; int mic_df_ecc_address_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct mem_ctl_info*,int,int) ;
 int FUNC_1 (struct mem_ctl_info*,int,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6(struct mem_ctl_info *VAR_11)
{
 struct cell_edac_priv *VAR_12 = VAR_11->pvt_info;
 u64 VAR_13, VAR_14, VAR_15 = 0;

 VAR_13 = FUNC_3(&VAR_12->regs->mic_fir);






 if ((VAR_12->chanmask & 0x1) && (VAR_13 & VAR_7)) {
  VAR_14 = FUNC_3(&VAR_12->regs->mic_df_ecc_address_0);
  VAR_15 |= VAR_8;
  FUNC_0(VAR_11, 0, VAR_14);
 }
 if ((VAR_12->chanmask & 0x2) && (VAR_13 & VAR_9)) {
  VAR_14 = FUNC_3(&VAR_12->regs->mic_df_ecc_address_1);
  VAR_15 |= VAR_10;
  FUNC_0(VAR_11, 1, VAR_14);
 }
 if ((VAR_12->chanmask & 0x1) && (VAR_13 & VAR_1)) {
  VAR_14 = FUNC_3(&VAR_12->regs->mic_df_ecc_address_0);
  VAR_15 |= VAR_2;
  FUNC_1(VAR_11, 0, VAR_14);
 }
 if ((VAR_12->chanmask & 0x2) && (VAR_13 & VAR_3)) {
  VAR_14 = FUNC_3(&VAR_12->regs->mic_df_ecc_address_1);
  VAR_15 |= VAR_4;
  FUNC_1(VAR_11, 1, VAR_14);
 }


 if (VAR_15) {
  VAR_13 &= ~(VAR_0 | VAR_6);
  VAR_13 |= VAR_5;
  VAR_13 &= ~VAR_15;
  FUNC_5(&VAR_12->regs->mic_fir, VAR_13);
  (void)FUNC_3(&VAR_12->regs->mic_fir);

  FUNC_4();




 }
}
