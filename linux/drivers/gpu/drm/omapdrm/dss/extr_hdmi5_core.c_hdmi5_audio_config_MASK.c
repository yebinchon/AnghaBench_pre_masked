
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct omap_dss_audio {TYPE_2__* cea; TYPE_1__* iec; } ;
struct hdmi_wp_data {int dummy; } ;
struct hdmi_core_data {int dummy; } ;
struct hdmi_core_audio_config {int n; int cts; int layout; TYPE_1__* iec60958_cfg; } ;
struct hdmi_audio_format {int en_sig_blk_strt_end; void* sample_order; int type; int justification; int sample_size; int samples_per_word; } ;
struct hdmi_audio_dma {int transfer_size; int block_size; int fifo_threshold; int mode; } ;
struct TYPE_4__ {int db1_ct_cc; } ;
struct TYPE_3__ {int* status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;







 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct hdmi_core_data*,struct hdmi_core_audio_config*) ;
 int FUNC_1 (struct hdmi_core_data*,TYPE_2__*) ;
 int FUNC_2 (int ,unsigned int,int*,int*) ;
 int FUNC_3 (struct hdmi_wp_data*,struct hdmi_audio_dma*) ;
 int FUNC_4 (struct hdmi_wp_data*,struct hdmi_audio_format*) ;

int FUNC_5(struct hdmi_core_data *VAR_15, struct hdmi_wp_data *VAR_16,
   struct omap_dss_audio *VAR_17, u32 VAR_18)
{
 struct hdmi_audio_format VAR_19;
 struct hdmi_audio_dma VAR_20;
 struct hdmi_core_audio_config VAR_21;
 int VAR_22, VAR_23, VAR_24, VAR_25;
 unsigned int VAR_26;
 bool VAR_27 = 0;

 if (!VAR_17 || !VAR_17->iec || !VAR_17->cea || !VAR_15)
  return -VAR_1;

 VAR_21.iec60958_cfg = VAR_17->iec;

 if (!(VAR_17->iec->status[4] & VAR_13) &&
  (VAR_17->iec->status[4] & VAR_14))
   VAR_27 = 1;


 if (!VAR_27)
  return -VAR_1;

 switch (VAR_17->iec->status[3] & VAR_12) {
 case 132:
  VAR_26 = 32000;
  break;
 case 131:
  VAR_26 = 44100;
  break;
 case 130:
  VAR_26 = 48000;
  break;
 case 129:
  VAR_26 = 88200;
  break;
 case 128:
  VAR_26 = 96000;
  break;
 case 134:
  VAR_26 = 176400;
  break;
 case 133:
  VAR_26 = 192000;
  break;
 default:
  return -VAR_1;
 }

 VAR_22 = FUNC_2(VAR_18, VAR_26, &VAR_23, &VAR_24);
 VAR_21.n = VAR_23;
 VAR_21.cts = VAR_24;


 VAR_25 = (VAR_17->cea->db1_ct_cc & VAR_0)
    + 1;

 if (VAR_25 == 2)
  VAR_21.layout = VAR_4;
 else if (VAR_25 == 6)
  VAR_21.layout = VAR_5;
 else
  VAR_21.layout = VAR_6;


 if (VAR_27)
  VAR_20.transfer_size = 0x10;
 else
  VAR_20.transfer_size = 0x20;
 VAR_20.block_size = 0xC0;
 VAR_20.mode = VAR_10;
 VAR_20.fifo_threshold = 0x20;


 VAR_19.samples_per_word = VAR_7;
 VAR_19.sample_size = VAR_8;
 VAR_19.justification = VAR_3;
 VAR_19.sample_order = VAR_9;


 VAR_19.type = VAR_11;


 VAR_19.sample_order = VAR_9;


 VAR_19.en_sig_blk_strt_end = VAR_2;


 FUNC_3(VAR_16, &VAR_20);
 FUNC_4(VAR_16, &VAR_19);


 FUNC_0(VAR_15, &VAR_21);


 FUNC_1(VAR_15, VAR_17->cea);

 return 0;
}
