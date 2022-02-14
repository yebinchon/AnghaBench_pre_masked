
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mxt_data {int T100_reportid_min; size_t t100_aux_vect; size_t t100_aux_area; size_t t100_aux_ampl; int update_input; struct input_dev* input_dev; TYPE_1__* client; } ;
struct input_dev {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


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
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (struct input_dev*,int,int) ;
 int FUNC_3 (struct input_dev*,int) ;
 int FUNC_4 (struct input_dev*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct mxt_data *VAR_14, u8 *VAR_15)
{
 struct device *VAR_16 = &VAR_14->client->dev;
 struct input_dev *VAR_17 = VAR_14->input_dev;
 int VAR_18;
 u8 VAR_19;
 u8 VAR_20 = 0;
 u16 VAR_21;
 u16 VAR_22;
 int VAR_23 = 0;
 int VAR_24 = 0;
 u8 VAR_25 = 0;
 u8 VAR_26 = 0;
 u8 VAR_27 = 0;

 VAR_18 = VAR_15[0] - VAR_14->T100_reportid_min - 2;


 if (VAR_18 < 0)
  return;

 VAR_19 = VAR_15[1];
 VAR_21 = FUNC_1(&VAR_15[2]);
 VAR_22 = FUNC_1(&VAR_15[4]);

 if (VAR_19 & VAR_11) {
  VAR_20 = (VAR_19 & VAR_12) >> 4;

  switch (VAR_20) {
  case 130:
   VAR_24 = VAR_6;
   VAR_23 = VAR_9;

   if (VAR_14->t100_aux_vect)
    VAR_27 = VAR_15[VAR_14->t100_aux_vect];

   break;

  case 132:
  case 131:
   VAR_24 = VAR_6;
   VAR_23 = VAR_8;

   if (VAR_14->t100_aux_area)
    VAR_25 = VAR_15[VAR_14->t100_aux_area];

   if (VAR_14->t100_aux_ampl)
    VAR_26 = VAR_15[VAR_14->t100_aux_ampl];

   if (VAR_14->t100_aux_vect)
    VAR_27 = VAR_15[VAR_14->t100_aux_vect];

   break;

  case 128:
   VAR_24 = VAR_7;





   VAR_25 = VAR_13;

   if (VAR_14->t100_aux_ampl)
    VAR_26 = VAR_15[VAR_14->t100_aux_ampl];

   break;

  case 129:

   break;

  default:
   FUNC_0(VAR_16, "Unexpected T100 type\n");
   return;
  }
 }





 if (!VAR_26 && VAR_20 != 130)
  VAR_26 = VAR_10;

 FUNC_3(VAR_17, VAR_18);

 if (VAR_19 & VAR_11) {
  FUNC_0(VAR_16, "[%u] type:%u x:%u y:%u a:%02X p:%02X v:%02X\n",
   VAR_18, VAR_20, VAR_21, VAR_22, VAR_25, VAR_26, VAR_27);

  FUNC_2(VAR_17, VAR_24, 1);
  FUNC_4(VAR_17, VAR_2, VAR_21);
  FUNC_4(VAR_17, VAR_3, VAR_22);
  FUNC_4(VAR_17, VAR_5, VAR_25);
  FUNC_4(VAR_17, VAR_4, VAR_26);
  FUNC_4(VAR_17, VAR_0, VAR_23);
  FUNC_4(VAR_17, VAR_1, VAR_27);
 } else {
  FUNC_0(VAR_16, "[%u] release\n", VAR_18);


  FUNC_2(VAR_17, 0, 0);
 }

 VAR_14->update_input = 1;
}
