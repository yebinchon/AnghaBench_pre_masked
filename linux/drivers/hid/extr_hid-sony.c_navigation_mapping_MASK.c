
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {int hid; int usage_index; } ;
struct hid_input {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct hid_input*,struct hid_usage*,unsigned long**,int*,int ,unsigned int) ;
 unsigned int* VAR_8 ;
 unsigned int* VAR_9 ;
 unsigned int* VAR_10 ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_11, struct hid_input *VAR_12,
     struct hid_field *VAR_13, struct hid_usage *VAR_14,
     unsigned long **VAR_15, int *VAR_16)
{
 if ((VAR_14->hid & VAR_7) == VAR_4) {
  unsigned int VAR_17 = VAR_14->hid & VAR_6;

  if (VAR_17 >= FUNC_0(VAR_10))
   return -1;

  VAR_17 = VAR_9[VAR_17];
  if (!VAR_17)
   return -1;

  FUNC_1(VAR_12, VAR_14, VAR_15, VAR_16, VAR_1, VAR_17);
  return 1;
 } else if (VAR_14->hid == VAR_2) {





  switch (VAR_14->usage_index) {
  case 8:
   VAR_14->hid = VAR_3;
   break;
  default:
   return -1;
  }

  FUNC_1(VAR_12, VAR_14, VAR_15, VAR_16, VAR_0, VAR_14->hid & 0xf);
  return 1;
 } else if ((VAR_14->hid & VAR_7) == VAR_5) {
  unsigned int VAR_18 = VAR_14->hid & VAR_6;

  if (VAR_18 >= FUNC_0(VAR_8))
   return -1;

  VAR_18 = VAR_8[VAR_18];

  FUNC_1(VAR_12, VAR_14, VAR_15, VAR_16, VAR_0, VAR_18);
  return 1;
 }

 return -1;
}
