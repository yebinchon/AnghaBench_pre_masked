
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct synps_edac_priv {int message; TYPE_1__* p_data; } ;
struct ecc_error_info {int row; int bank; int col; int bitpos; int data; int bankgrpnr; int blknr; } ;
struct synps_ecc_status {scalar_t__ ue_cnt; struct ecc_error_info ueinfo; scalar_t__ ce_cnt; struct ecc_error_info ceinfo; } ;
struct mem_ctl_info {struct synps_edac_priv* pvt_info; } ;
struct TYPE_2__ {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct mem_ctl_info*,scalar_t__,int ,int ,int ,int ,int ,int,int ,char*) ;
 int FUNC_1 (struct synps_ecc_status*,int ,int) ;
 int FUNC_2 (int ,int ,char*,...) ;

__attribute__((used)) static void FUNC_3(struct mem_ctl_info *VAR_3, struct synps_ecc_status *VAR_4)
{
 struct synps_edac_priv *VAR_5 = VAR_3->pvt_info;
 struct ecc_error_info *VAR_6;

 if (VAR_4->ce_cnt) {
  VAR_6 = &VAR_4->ceinfo;
  if (!VAR_5->p_data->quirks) {
   FUNC_2(VAR_5->message, VAR_2,
     "DDR ECC error type:%s Row %d Bank %d Col %d ",
      "CE", VAR_6->row, VAR_6->bank, VAR_6->col);
   FUNC_2(VAR_5->message, VAR_2,
     "Bit Position: %d Data: 0x%08x\n",
     VAR_6->bitpos, VAR_6->data);
  } else {
   FUNC_2(VAR_5->message, VAR_2,
     "DDR ECC error type:%s Row %d Bank %d Col %d ",
      "CE", VAR_6->row, VAR_6->bank, VAR_6->col);
   FUNC_2(VAR_5->message, VAR_2,
     "BankGroup Number %d Block Number %d ",
     VAR_6->bankgrpnr, VAR_6->blknr);
   FUNC_2(VAR_5->message, VAR_2,
     "Bit Position: %d Data: 0x%08x\n",
     VAR_6->bitpos, VAR_6->data);
  }

  FUNC_0(VAR_0, VAR_3,
         VAR_4->ce_cnt, 0, 0, 0, 0, 0, -1,
         VAR_5->message, "");
 }

 if (VAR_4->ue_cnt) {
  VAR_6 = &VAR_4->ueinfo;
  if (!VAR_5->p_data->quirks) {
   FUNC_2(VAR_5->message, VAR_2,
     "DDR ECC error type :%s Row %d Bank %d Col %d ",
    "UE", VAR_6->row, VAR_6->bank, VAR_6->col);
  } else {
   FUNC_2(VAR_5->message, VAR_2,
     "DDR ECC error type :%s Row %d Bank %d Col %d ",
     "UE", VAR_6->row, VAR_6->bank, VAR_6->col);
   FUNC_2(VAR_5->message, VAR_2,
     "BankGroup Number %d Block Number %d",
     VAR_6->bankgrpnr, VAR_6->blknr);
  }

  FUNC_0(VAR_1, VAR_3,
         VAR_4->ue_cnt, 0, 0, 0, 0, 0, -1,
         VAR_5->message, "");
 }

 FUNC_1(VAR_4, 0, sizeof(*VAR_4));
}
