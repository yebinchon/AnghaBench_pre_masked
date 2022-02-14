
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int usb_complete_t ;
struct hfcsusb {scalar_t__ cfg_used; TYPE_1__* fifos; } ;
struct TYPE_3__ {scalar_t__ active; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;




 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int) ;
 int VAR_14 ;

__attribute__((used)) static void
FUNC_2(struct hfcsusb *VAR_15, int VAR_16)
{

 if ((VAR_16 == 129) && (VAR_15->fifos[VAR_8].active))
  return;
 if ((VAR_16 == 131) && (VAR_15->fifos[VAR_4].active))
  return;
 if ((VAR_16 == 130) && (VAR_15->fifos[VAR_6].active))
  return;
 if ((VAR_16 == 128) && (VAR_15->fifos[VAR_10].active))
  return;


 if (VAR_15->cfg_used == VAR_0 || VAR_15->cfg_used == VAR_2)
  FUNC_0(VAR_15->fifos + VAR_16 * 2 + 1);


 if (VAR_15->cfg_used == VAR_1 || VAR_15->cfg_used == VAR_3) {
  switch (VAR_16) {
  case 129:
   FUNC_1(VAR_15->fifos + VAR_8,
      VAR_12,
      (usb_complete_t)VAR_13,
      16);
   break;
  case 128:
   FUNC_1(VAR_15->fifos + VAR_10,
      VAR_12,
      (usb_complete_t)VAR_13,
      16);
   break;
  case 131:
   FUNC_1(VAR_15->fifos + VAR_4,
      VAR_11,
      (usb_complete_t)VAR_13,
      16);
   break;
  case 130:
   FUNC_1(VAR_15->fifos + VAR_6,
      VAR_11,
      (usb_complete_t)VAR_13,
      16);
   break;
  }
 }


 switch (VAR_16) {
 case 129:
  FUNC_1(VAR_15->fifos + VAR_9,
     VAR_11,
     (usb_complete_t)VAR_14, 1);
  break;
 case 131:
  FUNC_1(VAR_15->fifos + VAR_5,
     VAR_12,
     (usb_complete_t)VAR_14, 1);
  break;
 case 130:
  FUNC_1(VAR_15->fifos + VAR_7,
     VAR_11,
     (usb_complete_t)VAR_14, 1);
  break;
 }
}
