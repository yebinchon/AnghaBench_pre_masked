
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidpp_device {int quirks; } ;
struct hid_usage {scalar_t__ type; scalar_t__ code; } ;
struct hid_input {int dummy; } ;
struct hid_field {int application; } ;
struct hid_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct hidpp_device* FUNC_0 (struct hid_device*) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_7, struct hid_input *VAR_8,
  struct hid_field *VAR_9, struct hid_usage *VAR_10,
  unsigned long **VAR_11, int *VAR_12)
{
 struct hidpp_device *VAR_13 = FUNC_0(VAR_7);

 if (!VAR_13)
  return 0;


 if (VAR_13->quirks & VAR_5) {
  if (VAR_10->type == VAR_4 && (VAR_10->code == VAR_1 ||
    VAR_10->code == VAR_2 || VAR_10->code == VAR_3 ||
    VAR_10->code == VAR_0)) {
   VAR_9->application = VAR_6;
  }
 }

 return 0;
}
