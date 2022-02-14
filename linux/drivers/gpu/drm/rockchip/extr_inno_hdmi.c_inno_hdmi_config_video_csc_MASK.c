
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_data_info {scalar_t__ enc_in_format; scalar_t__ enc_out_format; scalar_t__ colorimetry; } ;
struct inno_hdmi {struct hdmi_data_info hdmi_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int** VAR_17 ;
 int FUNC_0 (struct inno_hdmi*,int ,int,int) ;
 int FUNC_1 (struct inno_hdmi*,scalar_t__,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct inno_hdmi *VAR_24)
{
 struct hdmi_data_info *VAR_25 = &VAR_24->hdmi_data;
 int VAR_26 = 0;
 int VAR_27 = 0;
 int VAR_28 = 0;
 int VAR_29 = 0;
 int VAR_30;
 int VAR_31;


 FUNC_1(VAR_24, VAR_11, VAR_22 |
      FUNC_7(VAR_16));


 VAR_30 = FUNC_5(VAR_15) |
  FUNC_8(0) |
  FUNC_6(0);
 FUNC_1(VAR_24, VAR_12, VAR_30);

 if (VAR_25->enc_in_format == VAR_25->enc_out_format) {
  if ((VAR_25->enc_in_format == VAR_8) ||
      (VAR_25->enc_in_format >= VAR_9)) {
   VAR_30 = VAR_23 | FUNC_2(1);
   FUNC_1(VAR_24, VAR_13, VAR_30);

   FUNC_0(VAR_24, VAR_10,
      VAR_18 | VAR_19,
      FUNC_3(VAR_0) |
      FUNC_4(VAR_2));
   return 0;
  }
 }

 if (VAR_25->colorimetry == VAR_7) {
  if ((VAR_25->enc_in_format == VAR_8) &&
      (VAR_25->enc_out_format == VAR_9)) {
   VAR_28 = VAR_5;
   VAR_29 = VAR_0;
   VAR_26 = VAR_2;
   VAR_27 = VAR_21;
  } else if ((VAR_25->enc_in_format == VAR_9) &&
      (VAR_25->enc_out_format == VAR_8)) {
   VAR_28 = VAR_3;
   VAR_29 = VAR_1;
   VAR_26 = VAR_2;
   VAR_27 = VAR_20;
  }
 } else {
  if ((VAR_25->enc_in_format == VAR_8) &&
      (VAR_25->enc_out_format == VAR_9)) {
   VAR_28 = VAR_6;
   VAR_29 = VAR_0;
   VAR_26 = VAR_2;
   VAR_27 = VAR_21;
  } else if ((VAR_25->enc_in_format == VAR_9) &&
      (VAR_25->enc_out_format == VAR_8)) {
   VAR_28 = VAR_4;
   VAR_29 = VAR_1;
   VAR_26 = VAR_2;
   VAR_27 = VAR_20;
  }
 }

 for (VAR_31 = 0; VAR_31 < 24; VAR_31++)
  FUNC_1(VAR_24, VAR_14 + VAR_31,
       VAR_17[VAR_28][VAR_31]);

 VAR_30 = VAR_23 | VAR_27 | FUNC_2(1);
 FUNC_1(VAR_24, VAR_13, VAR_30);
 FUNC_0(VAR_24, VAR_10, VAR_18 |
    VAR_19, FUNC_3(VAR_29) |
    FUNC_4(VAR_26));

 return 0;
}
