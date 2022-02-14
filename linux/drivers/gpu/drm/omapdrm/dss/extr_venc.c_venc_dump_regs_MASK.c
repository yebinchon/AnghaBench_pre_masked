
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_device {int dummy; } ;
struct seq_file {struct venc_device* private; } ;


 int FUNC_0 (struct venc_device*,int ) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 scalar_t__ FUNC_1 (struct venc_device*) ;
 int FUNC_2 (struct venc_device*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_41, void *VAR_42)
{
 struct venc_device *VAR_43 = VAR_41->private;




 if (FUNC_1(VAR_43))
  return 0;

 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_F_CONTROL", FUNC_0(VAR_43, VAR_12));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_VIDOUT_CTRL", FUNC_0(VAR_43, VAR_34));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_SYNC_CTRL", FUNC_0(VAR_43, VAR_30));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_LLEN", FUNC_0(VAR_43, VAR_24));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_FLENS", FUNC_0(VAR_43, VAR_10));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_HFLTR_CTRL", FUNC_0(VAR_43, VAR_17));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_CC_CARR_WSS_CARR", FUNC_0(VAR_43, VAR_5));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_C_PHASE", FUNC_0(VAR_43, VAR_6));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_GAIN_U", FUNC_0(VAR_43, VAR_13));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_GAIN_V", FUNC_0(VAR_43, VAR_14));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_GAIN_Y", FUNC_0(VAR_43, VAR_15));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_BLACK_LEVEL", FUNC_0(VAR_43, VAR_2));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_BLANK_LEVEL", FUNC_0(VAR_43, VAR_3));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_X_COLOR", FUNC_0(VAR_43, VAR_40));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_M_CONTROL", FUNC_0(VAR_43, VAR_26));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_BSTAMP_WSS_DATA", FUNC_0(VAR_43, VAR_4));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_S_CARR", FUNC_0(VAR_43, VAR_31));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_LINE21", FUNC_0(VAR_43, VAR_23));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_LN_SEL", FUNC_0(VAR_43, VAR_25));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_L21__WC_CTL", FUNC_0(VAR_43, VAR_21));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_HTRIGGER_VTRIGGER", FUNC_0(VAR_43, VAR_20));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_SAVID__EAVID", FUNC_0(VAR_43, VAR_29));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_FLEN__FAL", FUNC_0(VAR_43, VAR_11));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_LAL__PHASE_RESET", FUNC_0(VAR_43, VAR_22));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_HS_INT_START_STOP_X", FUNC_0(VAR_43, VAR_19));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_HS_EXT_START_STOP_X", FUNC_0(VAR_43, VAR_18));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_VS_INT_START_X", FUNC_0(VAR_43, VAR_37));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_VS_INT_STOP_X__VS_INT_START_Y", FUNC_0(VAR_43, VAR_38));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_VS_INT_STOP_Y__VS_EXT_START_X", FUNC_0(VAR_43, VAR_39));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_VS_EXT_STOP_X__VS_EXT_START_Y", FUNC_0(VAR_43, VAR_35));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_VS_EXT_STOP_Y", FUNC_0(VAR_43, VAR_36));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_AVID_START_STOP_X", FUNC_0(VAR_43, VAR_0));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_AVID_START_STOP_Y", FUNC_0(VAR_43, VAR_1));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_FID_INT_START_X__FID_INT_START_Y", FUNC_0(VAR_43, VAR_9));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_FID_INT_OFFSET_Y__FID_EXT_START_X", FUNC_0(VAR_43, VAR_8));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_FID_EXT_START_Y__FID_EXT_OFFSET_Y", FUNC_0(VAR_43, VAR_7));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_TVDETGP_INT_START_STOP_X", FUNC_0(VAR_43, VAR_32));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_TVDETGP_INT_START_STOP_Y", FUNC_0(VAR_43, VAR_33));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_GEN_CTRL", FUNC_0(VAR_43, VAR_16));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_OUTPUT_CONTROL", FUNC_0(VAR_43, VAR_27));
 FUNC_0(VAR_41, "%-35s %08x\n", "VENC_OUTPUT_TEST", FUNC_0(VAR_43, VAR_28));

 FUNC_2(VAR_43);


 return 0;
}
