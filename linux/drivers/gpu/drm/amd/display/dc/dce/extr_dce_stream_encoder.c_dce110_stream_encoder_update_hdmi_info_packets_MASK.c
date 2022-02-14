
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct stream_encoder {int dummy; } ;
struct TYPE_4__ {int hb1; int * sb; scalar_t__ valid; } ;
struct encoder_info_frame {TYPE_2__ hdrsmd; TYPE_2__ spd; TYPE_2__ gamut; TYPE_2__ vendor; TYPE_2__ avi; } ;
struct dce110_stream_encoder {TYPE_1__* se_mask; } ;
struct TYPE_3__ {scalar_t__ HDMI_DB_DISABLE; scalar_t__ HDMI_AVI_INFO_SEND; scalar_t__ HDMI_AVI_INFO_CONT; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct dce110_stream_encoder* FUNC_0 (struct stream_encoder*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,int ,int) ;
 int FUNC_4 (int ,int const) ;
 int VAR_14 ;
 int FUNC_5 (struct dce110_stream_encoder*,int,TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(
 struct stream_encoder *VAR_15,
 const struct encoder_info_frame *VAR_16)
{
 struct dce110_stream_encoder *VAR_17 = FUNC_0(VAR_15);

 if (VAR_17->se_mask->HDMI_AVI_INFO_CONT &&
   VAR_17->se_mask->HDMI_AVI_INFO_SEND) {

  if (VAR_16->avi.valid) {
   const uint32_t *VAR_18 =
    (const uint32_t *) &VAR_16->avi.sb[0];

   if (FUNC_1(VAR_6))
    FUNC_2(VAR_6, VAR_0, 1);

   FUNC_4(VAR_1, VAR_18[0]);

   FUNC_4(VAR_2, VAR_18[1]);

   FUNC_4(VAR_3, VAR_18[2]);

   FUNC_4(VAR_4, VAR_18[3]);

   FUNC_2(VAR_4, VAR_5,
      VAR_16->avi.hb1);

   FUNC_3(VAR_12,
     VAR_9, 1,
     VAR_7, 1);

   FUNC_2(VAR_13, VAR_8,
       VAR_14 + 2);

  } else {
   FUNC_3(VAR_12,
    VAR_9, 0,
    VAR_7, 0);
  }
 }

 if (VAR_17->se_mask->HDMI_AVI_INFO_CONT &&
   VAR_17->se_mask->HDMI_AVI_INFO_SEND) {
  FUNC_5(VAR_17, 0, &VAR_16->vendor);
  FUNC_5(VAR_17, 1, &VAR_16->gamut);
  FUNC_5(VAR_17, 2, &VAR_16->spd);
  FUNC_5(VAR_17, 3, &VAR_16->hdrsmd);
 }
}
