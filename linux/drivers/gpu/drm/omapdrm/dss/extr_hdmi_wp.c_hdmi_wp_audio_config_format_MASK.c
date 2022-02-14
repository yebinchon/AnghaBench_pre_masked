
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdmi_wp_data {int version; int base; } ;
struct hdmi_audio_format {int sample_size; int samples_per_word; int sample_order; int justification; int type; int en_sig_blk_strt_end; int active_chnnls_msk; int stereo_channels; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

void FUNC_4(struct hdmi_wp_data *VAR_1,
  struct hdmi_audio_format *VAR_2)
{
 u32 VAR_3;

 FUNC_0("Enter hdmi_wp_audio_config_format\n");

 VAR_3 = FUNC_2(VAR_1->base, VAR_0);
 if (VAR_1->version == 4) {
  VAR_3 = FUNC_1(VAR_3, VAR_2->stereo_channels, 26, 24);
  VAR_3 = FUNC_1(VAR_3, VAR_2->active_chnnls_msk, 23, 16);
 }
 VAR_3 = FUNC_1(VAR_3, VAR_2->en_sig_blk_strt_end, 5, 5);
 VAR_3 = FUNC_1(VAR_3, VAR_2->type, 4, 4);
 VAR_3 = FUNC_1(VAR_3, VAR_2->justification, 3, 3);
 VAR_3 = FUNC_1(VAR_3, VAR_2->sample_order, 2, 2);
 VAR_3 = FUNC_1(VAR_3, VAR_2->samples_per_word, 1, 1);
 VAR_3 = FUNC_1(VAR_3, VAR_2->sample_size, 0, 0);
 FUNC_3(VAR_1->base, VAR_0, VAR_3);
}
