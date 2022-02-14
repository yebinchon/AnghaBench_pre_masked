
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {scalar_t__ type; scalar_t__ code; int hid; } ;
struct hid_input {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;
struct a4tech_sc {int quirks; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct a4tech_sc* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (int ,unsigned long*) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_5, struct hid_input *VAR_6,
  struct hid_field *VAR_7, struct hid_usage *VAR_8,
  unsigned long **VAR_9, int *VAR_10)
{
 struct a4tech_sc *VAR_11 = FUNC_0(VAR_5);

 if (VAR_8->type == VAR_1 && VAR_8->code == VAR_4) {
  FUNC_1(VAR_2, *VAR_9);
  FUNC_1(VAR_3, *VAR_9);
 }

 if ((VAR_11->quirks & VAR_0) && VAR_8->hid == 0x00090007)
  return -1;

 return 0;
}
