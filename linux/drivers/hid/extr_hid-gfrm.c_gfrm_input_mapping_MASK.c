
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {int hid; } ;
struct hid_input {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_input*,struct hid_usage*,unsigned long**,int*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_5, struct hid_input *VAR_6,
  struct hid_field *VAR_7, struct hid_usage *VAR_8,
  unsigned long **VAR_9, int *VAR_10)
{
 unsigned long VAR_11 = (unsigned long) FUNC_0(VAR_5);

 if (VAR_11 == VAR_1) {
  if (VAR_8->hid == (VAR_2 | 0x4)) {

   FUNC_1(VAR_6, VAR_8, VAR_9, VAR_10, VAR_0, VAR_3);
   return 1;
  }

  if (VAR_8->hid == (VAR_2 | 0x41)) {

   FUNC_1(VAR_6, VAR_8, VAR_9, VAR_10, VAR_0, VAR_4);
   return 1;
  }
 }

 return 0;
}
