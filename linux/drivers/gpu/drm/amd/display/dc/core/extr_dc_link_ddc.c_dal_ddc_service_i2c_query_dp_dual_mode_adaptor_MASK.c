
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int type2_dongle_buf ;
struct dp_hdmi_dongle_signature_data {scalar_t__ eot; scalar_t__* id; } ;
struct display_sink_capability {int dongle_type; int max_hdmi_pixel_clock; } ;
struct ddc_service {int link; } ;
typedef enum display_dongle_type { ____Placeholder_display_dongle_type } display_dongle_type ;


 int FUNC_0 (int ,scalar_t__*,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__* VAR_14 ;
 scalar_t__ FUNC_1 (struct ddc_service*,int ,scalar_t__*,int) ;

void FUNC_2(
 struct ddc_service *VAR_15,
 struct display_sink_capability *VAR_16)
{
 uint8_t VAR_17;
 bool VAR_18;
 enum display_dongle_type *VAR_19 = &VAR_16->dongle_type;
 uint8_t VAR_20[VAR_11];
 bool VAR_21 = 0;
 int VAR_22 = 2;
 struct dp_hdmi_dongle_signature_data *VAR_23;


 *VAR_19 = VAR_3;
 VAR_16->max_hdmi_pixel_clock = VAR_5;


 if (!FUNC_1(
  VAR_15,
  VAR_12,
  VAR_20,
  sizeof(VAR_20))) {

  while (VAR_22 > 0) {
   if (FUNC_1(VAR_15,
    VAR_12,
    VAR_20,
    sizeof(VAR_20)))
    break;
   VAR_22--;
  }
  if (VAR_22 == 0) {
   *VAR_19 = VAR_0;
   VAR_16->max_hdmi_pixel_clock = VAR_4;

   FUNC_0(VAR_15->link, VAR_20, sizeof(VAR_20),
     "DP-DVI passive dongle %dMhz: ",
     VAR_4 / 1000);
   return;
  }
 }


 if (VAR_20[VAR_9] == VAR_6)
  VAR_21 = 1;

 VAR_23 =
  (struct dp_hdmi_dongle_signature_data *)VAR_20;

 VAR_18 = 1;


 if (VAR_23->eot != VAR_13) {
  VAR_18 = 0;
 }


 for (VAR_17 = 0; VAR_17 < sizeof(VAR_23->id); ++VAR_17) {


  if (VAR_23->id[VAR_17] !=
   VAR_14[VAR_17] && VAR_17 != 3) {

   if (VAR_21) {
    VAR_18 = 0;
    break;
   }

  }
 }

 if (VAR_21) {
  uint32_t VAR_24 =
   VAR_20[VAR_10];

  VAR_24 = VAR_24 * 2 + VAR_24 / 2;

  if (0 == VAR_24 ||
    VAR_24 < VAR_8 ||
    VAR_24 > VAR_7) {
   *VAR_19 = VAR_0;

   FUNC_0(VAR_15->link, VAR_20,
     sizeof(VAR_20),
     "DP-DVI passive dongle %dMhz: ",
     VAR_4 / 1000);
  } else {
   if (VAR_18 == 1) {
    *VAR_19 = VAR_1;

    FUNC_0(VAR_15->link, VAR_20,
      sizeof(VAR_20),
      "Type 2 DP-HDMI passive dongle %dMhz: ",
      VAR_24);
   } else {
    *VAR_19 = VAR_2;

    FUNC_0(VAR_15->link, VAR_20,
      sizeof(VAR_20),
      "Type 2 DP-HDMI passive dongle (no signature) %dMhz: ",
      VAR_24);

   }


   VAR_16->max_hdmi_pixel_clock =
    VAR_24 * 1000;
  }

 } else {
  if (VAR_18 == 1) {
   *VAR_19 = VAR_1;

   FUNC_0(VAR_15->link, VAR_20,
     sizeof(VAR_20),
     "Type 1 DP-HDMI passive dongle %dMhz: ",
     VAR_16->max_hdmi_pixel_clock / 1000);
  } else {
   *VAR_19 = VAR_2;

   FUNC_0(VAR_15->link, VAR_20,
     sizeof(VAR_20),
     "Type 1 DP-HDMI passive dongle (no signature) %dMhz: ",
     VAR_16->max_hdmi_pixel_clock / 1000);
  }
 }

 return;
}
