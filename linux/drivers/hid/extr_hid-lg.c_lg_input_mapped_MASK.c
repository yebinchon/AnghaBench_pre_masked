
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lg_drv_data {int quirks; } ;
struct hid_usage {scalar_t__ type; scalar_t__ code; } ;
struct hid_input {int dummy; } ;
struct hid_field {int flags; int application; } ;
struct hid_device {int product; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (scalar_t__,unsigned long*) ;
 struct lg_drv_data* FUNC_1 (struct hid_device*) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_11, struct hid_input *VAR_12,
  struct hid_field *VAR_13, struct hid_usage *VAR_14,
  unsigned long **VAR_15, int *VAR_16)
{
 struct lg_drv_data *VAR_17 = FUNC_1(VAR_11);

 if ((VAR_17->quirks & VAR_9) && VAR_14->type == VAR_5 &&
   (VAR_13->flags & VAR_8))
  VAR_13->flags &= ~VAR_8;

 if ((VAR_17->quirks & VAR_10) && (VAR_14->type == VAR_5 ||
    VAR_14->type == VAR_6 || VAR_14->type == VAR_4))
  FUNC_0(VAR_14->code, *VAR_15);


 if (VAR_14->type == VAR_4 && (VAR_14->code == VAR_1 ||
   VAR_14->code == VAR_2 || VAR_14->code == VAR_3 ||
   VAR_14->code == VAR_0)) {
  switch (VAR_11->product) {
  case 135:
  case 128:
  case 129:
  case 131:
  case 134:
  case 138:
  case 137:
  case 139:
  case 136:
  case 130:
  case 133:
  case 132:
   VAR_13->application = VAR_7;
   break;
  default:
   break;
  }
 }

 return 0;
}
