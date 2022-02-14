
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt_usages {int* inrange_state; int* tip_state; int* confidence_state; scalar_t__* w; scalar_t__* h; int* a; int* x; int* y; int* cx; int* cy; int* p; } ;
struct mt_device {int maxcontacts; int mt_io_flags; } ;
struct mt_application {int quirks; scalar_t__ num_received; scalar_t__ num_expected; scalar_t__ application; int * pending_palm_slots; } ;
struct input_mt_slot {int dummy; } ;
struct input_mt {struct input_mt_slot* slots; } ;
struct input_dev {struct input_mt* mt; } ;
typedef int __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
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
 int FUNC_0 (struct input_dev*,int ) ;
 int FUNC_1 (struct input_dev*,int ,int ,int) ;
 scalar_t__ FUNC_2 (struct input_mt_slot*) ;
 scalar_t__ FUNC_3 (struct input_mt*,struct input_mt_slot*) ;
 int FUNC_4 (struct input_dev*,int,int) ;
 int FUNC_5 (struct input_dev*,int) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (struct mt_device*,struct mt_application*,struct mt_usages*,struct input_dev*) ;
 int FUNC_9 (int,int *) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct mt_device *VAR_27, struct input_dev *VAR_28,
       struct mt_application *VAR_29,
       struct mt_usages *VAR_30)
{
 struct input_mt *VAR_31 = VAR_28->mt;
 __s32 VAR_32 = VAR_29->quirks;
 bool VAR_33 = 1;
 bool VAR_34 = 1;
 bool VAR_35 = 0;
 int VAR_36;
 int VAR_37;
 int VAR_38 = VAR_25;

 if (!VAR_30)
  return -VAR_11;

 if ((VAR_32 & VAR_17) &&
     VAR_29->num_received >= VAR_29->num_expected)
  return -VAR_10;

 if (!(VAR_32 & VAR_15)) {
  if (VAR_32 & VAR_23)
   VAR_33 = *VAR_30->inrange_state;
  if (VAR_32 & VAR_20)
   VAR_33 = *VAR_30->tip_state;
  if (VAR_32 & VAR_22)
   VAR_33 = *VAR_30->confidence_state;

  if (!VAR_33)
   return 0;
 }

 VAR_37 = FUNC_8(VAR_27, VAR_29, VAR_30, VAR_28);
 if (VAR_37 < 0 || VAR_37 >= VAR_27->maxcontacts)
  return 0;

 if ((VAR_32 & VAR_19) && VAR_31) {
  struct input_mt_slot *VAR_39 = &VAR_31->slots[VAR_37];

  if (FUNC_2(VAR_39) &&
      FUNC_3(VAR_31, VAR_39))
   return -VAR_10;
 }

 if (VAR_32 & VAR_16)
  VAR_34 = *VAR_30->confidence_state;

 if (VAR_32 & VAR_18)
  VAR_35 = *VAR_30->inrange_state;

 VAR_36 = *VAR_30->tip_state || VAR_35;

 if (VAR_29->application == VAR_13)
  VAR_38 = VAR_24;
 else if (FUNC_10(!VAR_34)) {
  VAR_38 = VAR_26;
  if (!VAR_36 &&
      FUNC_2(&VAR_31->slots[VAR_37])) {
   VAR_36 = 1;
   FUNC_9(VAR_37, VAR_29->pending_palm_slots);
  }
 }

 FUNC_5(VAR_28, VAR_37);
 FUNC_4(VAR_28, VAR_38, VAR_36);
 if (VAR_36) {

  int VAR_40 = (*VAR_30->w > *VAR_30->h);
  int VAR_41 = FUNC_6(*VAR_30->w, *VAR_30->h);
  int VAR_42 = FUNC_7(*VAR_30->w, *VAR_30->h);
  int VAR_43 = VAR_40;
  int VAR_44;
  int VAR_45;

  if (VAR_30->a != VAR_9) {
   VAR_45 = *VAR_30->a;
   VAR_44 = FUNC_0(VAR_28,
       VAR_1);
   if (VAR_45 > VAR_44 * 2)
    VAR_45 -= VAR_44 * 4;
   VAR_43 = -VAR_45;
  }

  if (VAR_32 & VAR_21) {




   VAR_41 = VAR_41 >> 1;
   VAR_42 = VAR_42 >> 1;
  }

  FUNC_1(VAR_28, VAR_12, VAR_2, *VAR_30->x);
  FUNC_1(VAR_28, VAR_12, VAR_3, *VAR_30->y);
  FUNC_1(VAR_28, VAR_12, VAR_5, *VAR_30->cx);
  FUNC_1(VAR_28, VAR_12, VAR_6, *VAR_30->cy);
  FUNC_1(VAR_28, VAR_12, VAR_0, !*VAR_30->tip_state);
  FUNC_1(VAR_28, VAR_12, VAR_1, VAR_43);
  FUNC_1(VAR_28, VAR_12, VAR_4, *VAR_30->p);
  FUNC_1(VAR_28, VAR_12, VAR_7, VAR_41);
  FUNC_1(VAR_28, VAR_12, VAR_8, VAR_42);

  FUNC_9(VAR_14, &VAR_27->mt_io_flags);
 }

 return 0;
}
