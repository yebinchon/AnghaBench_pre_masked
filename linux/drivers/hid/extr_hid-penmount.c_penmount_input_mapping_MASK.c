
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {int hid; } ;
struct hid_input {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hid_input*,struct hid_usage*,unsigned long**,int*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_5,
  struct hid_input *VAR_6, struct hid_field *VAR_7,
  struct hid_usage *VAR_8, unsigned long **VAR_9, int *VAR_10)
{
 if ((VAR_8->hid & VAR_4) == VAR_2) {
  if (((VAR_8->hid - 1) & VAR_3) == 0) {
   FUNC_0(VAR_6, VAR_8, VAR_9, VAR_10, VAR_1, VAR_0);
   return 1;
  } else {
   return -1;
  }
 }

 return 0;
}
