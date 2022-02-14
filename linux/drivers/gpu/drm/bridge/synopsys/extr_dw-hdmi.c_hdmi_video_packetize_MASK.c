
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct hdmi_data_info {unsigned int pix_repet_factor; int enc_out_bus_format; } ;
struct dw_hdmi {struct hdmi_data_info hdmi_data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 unsigned int VAR_33 ;
 int VAR_34 ;
 unsigned int VAR_35 ;
 int VAR_36 ;
 unsigned int VAR_37 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct dw_hdmi*,unsigned int,int,int ) ;
 int FUNC_6 (struct dw_hdmi*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_7(struct dw_hdmi *VAR_38)
{
 unsigned int VAR_39 = 0;
 unsigned int VAR_40 = VAR_26;
 unsigned int VAR_41 = VAR_9;
 struct hdmi_data_info *VAR_42 = &VAR_38->hdmi_data;
 u8 VAR_43, VAR_44;

 if (FUNC_1(VAR_38->hdmi_data.enc_out_bus_format) ||
     FUNC_4(VAR_38->hdmi_data.enc_out_bus_format) ||
     FUNC_2(VAR_38->hdmi_data.enc_out_bus_format)) {
  switch (FUNC_0(
     VAR_38->hdmi_data.enc_out_bus_format)) {
  case 8:
   VAR_39 = 4;
   VAR_41 = VAR_7;
   break;
  case 10:
   VAR_39 = 5;
   break;
  case 12:
   VAR_39 = 6;
   break;
  case 16:
   VAR_39 = 7;
   break;
  default:
   VAR_41 = VAR_7;
  }
 } else if (FUNC_3(VAR_38->hdmi_data.enc_out_bus_format)) {
  switch (FUNC_0(
     VAR_38->hdmi_data.enc_out_bus_format)) {
  case 0:
  case 8:
   VAR_40 = VAR_26;
   break;
  case 10:
   VAR_40 = VAR_27;
   break;
  case 12:
   VAR_40 = VAR_28;
   break;

  default:
   return;
  }
  VAR_41 = VAR_10;
 } else {
  return;
 }


 VAR_43 = ((VAR_39 << VAR_22) &
  VAR_21) |
  ((VAR_42->pix_repet_factor <<
  VAR_24) &
  VAR_23);
 FUNC_6(VAR_38, VAR_43, VAR_20);

 FUNC_5(VAR_38, VAR_35,
    VAR_34, VAR_29);


 if (VAR_42->pix_repet_factor > 1) {
  VAR_44 = VAR_15 |
     VAR_5;
 } else {
  VAR_44 = VAR_14 |
     VAR_6;
 }

 FUNC_5(VAR_38, VAR_44,
    VAR_16 |
    VAR_4, VAR_0);

 FUNC_5(VAR_38, 1 << VAR_31,
    VAR_30, VAR_29);

 FUNC_6(VAR_38, VAR_40, VAR_25);

 if (VAR_41 == VAR_9) {
  VAR_44 = VAR_1 |
     VAR_12 |
     VAR_17;
 } else if (VAR_41 == VAR_10) {
  VAR_44 = VAR_1 |
     VAR_11 |
     VAR_18;
 } else if (VAR_41 == VAR_7) {
  VAR_44 = VAR_2 |
     VAR_11 |
     VAR_17;
 } else {
  return;
 }

 FUNC_5(VAR_38, VAR_44,
    VAR_3 | VAR_13 |
    VAR_19, VAR_0);

 FUNC_5(VAR_38, VAR_33 |
   VAR_37,
    VAR_32 |
    VAR_36, VAR_29);

 FUNC_5(VAR_38, VAR_41, VAR_8,
    VAR_0);
}
