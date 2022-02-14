
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mt_class {int sn_move; int sn_width; int sn_height; int sn_pressure; int name; } ;
struct mt_device {int inputmode_value; struct mt_class mtclass; } ;
struct mt_application {int quirks; int scantime_logical_max; int have_contact_count; int * raw_cc; int * scantime; int touches_by_report; int buttons_count; int mt_flags; } ;
struct hid_usage {int hid; int usage_index; } ;
struct hid_input {TYPE_1__* input; } ;
struct hid_field {scalar_t__ application; int logical_maximum; int * value; struct hid_usage* usage; } ;
struct hid_device {int dummy; } ;
struct TYPE_4__ {int absbit; int propbit; } ;


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
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;

 scalar_t__ VAR_17 ;





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
 int FUNC_0 (int ) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_1 (int ,int ) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 struct mt_device* FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_input*,struct hid_usage*,unsigned long**,int*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int ,int,int,int,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_6 (TYPE_1__*,int,struct hid_field*,int) ;
 int FUNC_7 (int ,int ) ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;

__attribute__((used)) static int FUNC_8(struct hid_device *VAR_45, struct hid_input *VAR_46,
  struct hid_field *VAR_47, struct hid_usage *VAR_48,
  unsigned long **VAR_49, int *VAR_50, struct mt_application *VAR_51)
{
 struct mt_device *VAR_52 = FUNC_2(VAR_45);
 struct mt_class *VAR_53 = &VAR_52->mtclass;
 int VAR_54;
 struct hid_usage *VAR_55 = ((void*)0);




 if (VAR_47->application == VAR_16 &&
     (VAR_48->hid & VAR_19) == 130) {
  VAR_51->mt_flags |= VAR_20;
  VAR_52->inputmode_value = VAR_25;
 }


 if ((VAR_48->hid & VAR_19) == 130)
  VAR_51->buttons_count++;

 if (VAR_48->usage_index)
  VAR_55 = &VAR_47->usage[VAR_48->usage_index - 1];

 switch (VAR_48->hid & VAR_19) {

 case 128:
  switch (VAR_48->hid) {
  case 132:
   if (VAR_55 && (VAR_55->hid == VAR_48->hid)) {
    VAR_54 = VAR_6;
    FUNC_0(VAR_36);
   } else {
    VAR_54 = VAR_2;
    FUNC_0(VAR_43);
   }

   FUNC_6(VAR_46->input, VAR_54, VAR_47, VAR_53->sn_move);





   if (VAR_47->application == VAR_17) {
    FUNC_1(VAR_21,
       VAR_46->input->propbit);
    FUNC_4(VAR_46->input,
           VAR_5,
           VAR_30,
           VAR_30, 0, 0);
   }

   return 1;
  case 131:
   if (VAR_55 && (VAR_55->hid == VAR_48->hid)) {
    VAR_54 = VAR_7;
    FUNC_0(VAR_37);
   } else {
    VAR_54 = VAR_3;
    FUNC_0(VAR_44);
   }

   FUNC_6(VAR_46->input, VAR_54, VAR_47, VAR_53->sn_move);

   return 1;
  }
  return 0;

 case 129:
  switch (VAR_48->hid) {
  case 138:
   if (VAR_51->quirks & VAR_27) {
    FUNC_4(VAR_46->input,
     VAR_0, 0, 1, 0, 0);
   }
   FUNC_0(VAR_39);
   return 1;
  case 143:
   if ((VAR_53->name == VAR_23 ||
    VAR_53->name == VAR_24) &&
    (VAR_47->application == VAR_15 ||
     VAR_47->application == VAR_16))
    VAR_51->quirks |= VAR_26;

   if (VAR_51->quirks & VAR_26)
    FUNC_4(VAR_46->input,
           VAR_5,
           VAR_31,
           VAR_32, 0, 0);

   FUNC_0(VAR_34);
   return 1;
  case 135:
   if (VAR_47->application != VAR_17)
    FUNC_5(VAR_46->input,
           VAR_13, VAR_12);
   FUNC_0(VAR_41);
   return 1;
  case 141:
   FUNC_0(VAR_35);
   VAR_51->touches_by_report++;
   return 1;
  case 133:
   if (!(VAR_51->quirks & VAR_28))
    FUNC_6(VAR_46->input, VAR_8, VAR_47,
     VAR_53->sn_width);
   FUNC_0(VAR_42);
   return 1;
  case 139:
   if (!(VAR_51->quirks & VAR_28)) {
    FUNC_6(VAR_46->input, VAR_9, VAR_47,
     VAR_53->sn_height);





    if (!FUNC_7(VAR_1,
      VAR_46->input->absbit))
     FUNC_4(VAR_46->input,
      VAR_1, 0, 1, 0, 0);
   }
   FUNC_0(VAR_38);
   return 1;
  case 136:
   FUNC_6(VAR_46->input, VAR_4, VAR_47,
    VAR_53->sn_pressure);
   FUNC_0(VAR_40);
   return 1;
  case 137:
   FUNC_5(VAR_46->input, VAR_14, VAR_22);
   VAR_51->scantime = &VAR_47->value[VAR_48->usage_index];
   VAR_51->scantime_logical_max = VAR_47->logical_maximum;
   return 1;
  case 142:
   VAR_51->have_contact_count = 1;
   VAR_51->raw_cc = &VAR_47->value[VAR_48->usage_index];
   return 1;
  case 144:





   FUNC_4(VAR_46->input, VAR_1,
    -VAR_47->logical_maximum / 4,
    VAR_47->logical_maximum / 4,
    VAR_53->sn_move ?
    VAR_47->logical_maximum / VAR_53->sn_move : 0, 0);
   FUNC_0(VAR_33);
   return 1;
  case 140:

   return -1;
  case 134:


   return -1;
  }

  return 0;

 case 130:
  VAR_54 = VAR_11 + ((VAR_48->hid - 1) & VAR_18);




  if ((VAR_51->quirks & VAR_29) &&
      VAR_47->application == VAR_15 &&
      (VAR_48->hid & VAR_18) > 1)
   VAR_54--;

  if (VAR_47->application == VAR_17)
   VAR_54 = VAR_10 + ((VAR_48->hid - 1) & VAR_18);

  FUNC_3(VAR_46, VAR_48, VAR_49, VAR_50, VAR_13, VAR_54);
  FUNC_5(VAR_46->input, VAR_13, VAR_54);
  return 1;

 case 0xff000000:

  return -1;
 }

 return 0;
}
