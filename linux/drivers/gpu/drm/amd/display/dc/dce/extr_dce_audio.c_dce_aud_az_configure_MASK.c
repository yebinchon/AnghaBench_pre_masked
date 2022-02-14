
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int RATE_192; } ;
union audio_sample_rates {int all; TYPE_3__ rate; } ;
typedef int uint8_t ;
typedef int uint32_t ;
struct dce_audio {int dummy; } ;
struct audio_mode {int max_bit_rate; int channel_count; int sample_size; int vendor_specific; union audio_sample_rates sample_rates; } ;
struct TYPE_4__ {int ALLSPEAKERS; } ;
struct TYPE_5__ {TYPE_1__ info; } ;
struct audio_info {int manufacture_id; int product_id; char* display_name; int* port_id; int audio_latency; int video_latency; struct audio_mode* modes; TYPE_2__ flags; } ;
struct audio_crtc_info {int dummy; } ;
struct audio {int inst; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;
typedef enum audio_format_code { ____Placeholder_audio_format_code } audio_format_code ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int VAR_16 ;
 struct dce_audio* FUNC_3 (struct audio*) ;
 int FUNC_4 (char*,int ,int,char*) ;
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
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int FUNC_5 (int ,int) ;




 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int FUNC_6 (struct audio_crtc_info const*,int,int,union audio_sample_rates*) ;
 int FUNC_7 (int,int,int ) ;
 scalar_t__ FUNC_8 (struct audio_info const*,int,int*) ;
 int FUNC_9 (struct audio*,int ) ;
 int FUNC_10 (struct audio*,int) ;
 int FUNC_11 (int,int,int,int ) ;
 int FUNC_12 (struct audio*,int ) ;

void FUNC_13(
 struct audio *VAR_50,
 enum signal_type VAR_51,
 const struct audio_crtc_info *VAR_52,
 const struct audio_info *VAR_53)
{
 struct dce_audio *VAR_54 = FUNC_3(VAR_50);

 uint32_t VAR_55 = VAR_53->flags.info.ALLSPEAKERS;
 uint32_t VAR_56;
 uint32_t VAR_57 = 0;
 enum audio_format_code VAR_58;
 uint32_t VAR_59;
 uint32_t VAR_60;
 bool VAR_61 = 0;
 union audio_sample_rates VAR_62;
 uint32_t VAR_63 = 0;
 VAR_56 = FUNC_0(VAR_6);
 FUNC_11(VAR_56, 1,
   VAR_6,
   VAR_16);
 FUNC_1(VAR_6, VAR_56);





 VAR_56 = FUNC_0(VAR_5);

 FUNC_11(VAR_56,
  VAR_55,
  VAR_5,
  VAR_47);







 FUNC_11(VAR_56,
  0,
  VAR_5,
  VAR_39);




 FUNC_11(VAR_56,
  0,
  VAR_5,
  VAR_38);

 FUNC_11(VAR_56,
  0,
  VAR_5,
  VAR_36);

 VAR_57 = FUNC_7(VAR_56,
   VAR_5,
   VAR_37);

 VAR_57 &= ~0x1;

 FUNC_11(VAR_56,
  VAR_57,
  VAR_5,
  VAR_37);


 switch (VAR_51) {
 case 128:
  FUNC_11(VAR_56,
   1,
   VAR_5,
   VAR_38);

  break;

 case 129:
 case 131:
 case 130:
  FUNC_11(VAR_56,
   1,
   VAR_5,
   VAR_36);
  break;
 default:
  FUNC_2();
  break;
 }

 FUNC_1(VAR_5, VAR_56);



 for (VAR_59 = 0; VAR_59 < VAR_1;
   VAR_59++) {
  VAR_58 =
   (VAR_2 + VAR_59);


  if (VAR_58 == VAR_0 ||
   VAR_58 == 136)
   continue;

  VAR_56 = 0;


  if (FUNC_8(
    VAR_53, VAR_58, &VAR_60)) {
   const struct audio_mode *VAR_64 =
     &VAR_53->modes[VAR_60];
   union audio_sample_rates VAR_65 =
     VAR_64->sample_rates;
   uint8_t VAR_66 = VAR_64->max_bit_rate;


   switch (VAR_58) {
   case 134: {
    FUNC_6(
     VAR_52,
     VAR_64->channel_count,
     VAR_51,
     &VAR_65);

    VAR_66 = VAR_64->sample_size;

    FUNC_11(VAR_56,
      VAR_65.all,
      VAR_4,
      VAR_49);
    }
    break;
   case 138:
    VAR_61 = 1;
    break;
   case 137:
   case 135:
   case 133:
   case 136:
   case 132:
    VAR_66 = VAR_64->vendor_specific;
    break;
   default:
    break;
   }


   FUNC_11(VAR_56,
     VAR_64->channel_count - 1,
     VAR_4,
     VAR_41);

   FUNC_11(VAR_56,
     VAR_65.all,
     VAR_4,
     VAR_48);

   FUNC_11(VAR_56,
     VAR_66,
     VAR_4,
     VAR_35);
  }

  FUNC_1(
    VAR_4 + VAR_59,
    VAR_56);
 }

 if (VAR_61)

  FUNC_5(VAR_3,
    0x05);


 VAR_62.all = 0;
 VAR_62.rate.RATE_192 = 1;

 FUNC_6(
  VAR_52,
  8,
  VAR_51,
  &VAR_62);

 FUNC_10(VAR_50, VAR_62.rate.RATE_192);


 FUNC_12(VAR_50, VAR_53->video_latency);
 FUNC_9(VAR_50, VAR_53->audio_latency);

 VAR_56 = 0;
 FUNC_11(VAR_56, VAR_53->manufacture_id,
  VAR_7,
  VAR_40);

 FUNC_11(VAR_56, VAR_53->product_id,
  VAR_7,
  VAR_45);

 FUNC_1(VAR_7,
  VAR_56);

 VAR_56 = 0;


 while (VAR_53->display_name[VAR_63++] != '\0') {
  if (VAR_63 >=
  VAR_42)
   break;
  }
 FUNC_11(VAR_56, VAR_63,
  VAR_8,
  VAR_46);

 FUNC_1(VAR_8,
  VAR_56);
 FUNC_4("\n\tAUDIO:az_configure: index: %u data, 0x%x, displayName %s: \n",
  VAR_50->inst, VAR_56, VAR_53->display_name);
 VAR_56 = 0;

 FUNC_11(VAR_56, VAR_53->port_id[0],
  VAR_9,
  VAR_43);

 FUNC_1(VAR_9, VAR_56);

 VAR_56 = 0;
 FUNC_11(VAR_56, VAR_53->port_id[1],
  VAR_10,
  VAR_44);

 FUNC_1(VAR_10, VAR_56);



 VAR_56 = 0;
 FUNC_11(VAR_56, VAR_53->display_name[0],
  VAR_11,
  VAR_17);

 FUNC_11(VAR_56, VAR_53->display_name[1],
  VAR_11,
  VAR_18);

 FUNC_11(VAR_56, VAR_53->display_name[2],
  VAR_11,
  VAR_27);

 FUNC_11(VAR_56, VAR_53->display_name[3],
  VAR_11,
  VAR_28);

 FUNC_1(VAR_11, VAR_56);

 VAR_56 = 0;
 FUNC_11(VAR_56, VAR_53->display_name[4],
  VAR_12,
  VAR_29);

 FUNC_11(VAR_56, VAR_53->display_name[5],
  VAR_12,
  VAR_30);

 FUNC_11(VAR_56, VAR_53->display_name[6],
  VAR_12,
  VAR_31);

 FUNC_11(VAR_56, VAR_53->display_name[7],
  VAR_12,
  VAR_32);

 FUNC_1(VAR_12, VAR_56);

 VAR_56 = 0;
 FUNC_11(VAR_56, VAR_53->display_name[8],
  VAR_13,
  VAR_33);

 FUNC_11(VAR_56, VAR_53->display_name[9],
  VAR_13,
  VAR_34);

 FUNC_11(VAR_56, VAR_53->display_name[10],
  VAR_13,
  VAR_19);

 FUNC_11(VAR_56, VAR_53->display_name[11],
  VAR_13,
  VAR_20);

 FUNC_1(VAR_13, VAR_56);

 VAR_56 = 0;
 FUNC_11(VAR_56, VAR_53->display_name[12],
  VAR_14,
  VAR_21);

 FUNC_11(VAR_56, VAR_53->display_name[13],
  VAR_14,
  VAR_22);

 FUNC_11(VAR_56, VAR_53->display_name[14],
  VAR_14,
  VAR_23);

 FUNC_11(VAR_56, VAR_53->display_name[15],
  VAR_14,
  VAR_24);

 FUNC_1(VAR_14, VAR_56);

 VAR_56 = 0;
 FUNC_11(VAR_56, VAR_53->display_name[16],
  VAR_15,
  VAR_25);

 FUNC_11(VAR_56, VAR_53->display_name[17],
  VAR_15,
  VAR_26);

 FUNC_1(VAR_15, VAR_56);
 VAR_56 = FUNC_0(VAR_6);
 FUNC_11(VAR_56, 0,
   VAR_6,
   VAR_16);
 FUNC_1(VAR_6, VAR_56);
}
