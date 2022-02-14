
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ms_data {unsigned long quirks; } ;
struct hid_usage {int dummy; } ;
struct hid_input {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 struct ms_data* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_input*,struct hid_usage*,unsigned long**,int*) ;
 scalar_t__ FUNC_2 (struct hid_input*,struct hid_usage*,unsigned long**,int*) ;
 int FUNC_3 (struct hid_input*,struct hid_field*,struct hid_usage*,unsigned long**,int*) ;

__attribute__((used)) static int FUNC_4(struct hid_device *VAR_3, struct hid_input *VAR_4,
  struct hid_field *VAR_5, struct hid_usage *VAR_6,
  unsigned long **VAR_7, int *VAR_8)
{
 struct ms_data *VAR_9 = FUNC_0(VAR_3);
 unsigned long VAR_10 = VAR_9->quirks;

 if (VAR_10 & VAR_0) {
  int VAR_11 = FUNC_1(VAR_4, VAR_6, VAR_7, VAR_8);
  if (VAR_11)
   return VAR_11;
 }

 if ((VAR_10 & VAR_1) &&
   FUNC_2(VAR_4, VAR_6, VAR_7, VAR_8))
  return 1;

 if (VAR_10 & VAR_2) {
  int VAR_12 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);

  if (VAR_12)
   return VAR_12;
 }

 return 0;
}
