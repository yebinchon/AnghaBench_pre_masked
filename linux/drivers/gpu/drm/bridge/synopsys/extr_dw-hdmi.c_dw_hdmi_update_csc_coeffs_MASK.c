
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ enc_out_encoding; int enc_in_bus_format; int enc_out_bus_format; } ;
struct dw_hdmi {TYPE_1__ hdmi_data; } ;


 unsigned int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int** VAR_9 ;
 int** VAR_10 ;
 int** VAR_11 ;
 int** VAR_12 ;
 int** VAR_13 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct dw_hdmi*,int,int ,int ) ;
 int FUNC_3 (struct dw_hdmi*,int,scalar_t__) ;
 scalar_t__ FUNC_4 (struct dw_hdmi*) ;

__attribute__((used)) static void FUNC_5(struct dw_hdmi *VAR_14)
{
 const u16 (*VAR_15)[3][4] = &VAR_9;
 unsigned VAR_16;
 u32 VAR_17 = 1;

 if (FUNC_4(VAR_14)) {
  if (FUNC_1(VAR_14->hdmi_data.enc_out_bus_format)) {
   if (VAR_14->hdmi_data.enc_out_encoding ==
      VAR_8)
    VAR_15 = &VAR_12;
   else
    VAR_15 = &VAR_13;
  } else if (FUNC_1(
     VAR_14->hdmi_data.enc_in_bus_format)) {
   if (VAR_14->hdmi_data.enc_out_encoding ==
      VAR_8)
    VAR_15 = &VAR_10;
   else
    VAR_15 = &VAR_11;
   VAR_17 = 0;
  }
 }


 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_9[0]); VAR_16++) {
  u16 VAR_18 = (*VAR_15)[0][VAR_16];
  u16 VAR_19 = (*VAR_15)[1][VAR_16];
  u16 VAR_20 = (*VAR_15)[2][VAR_16];

  FUNC_3(VAR_14, VAR_18 & 0xff, VAR_0 + VAR_16 * 2);
  FUNC_3(VAR_14, VAR_18 >> 8, VAR_1 + VAR_16 * 2);
  FUNC_3(VAR_14, VAR_19 & 0xff, VAR_2 + VAR_16 * 2);
  FUNC_3(VAR_14, VAR_19 >> 8, VAR_3 + VAR_16 * 2);
  FUNC_3(VAR_14, VAR_20 & 0xff, VAR_4 + VAR_16 * 2);
  FUNC_3(VAR_14, VAR_20 >> 8, VAR_5 + VAR_16 * 2);
 }

 FUNC_2(VAR_14, VAR_17, VAR_7,
    VAR_6);
}
