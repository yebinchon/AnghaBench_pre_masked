
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
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct hid_input*,struct hid_usage*,unsigned long**,int*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_9,
     struct hid_input *VAR_10,
     struct hid_field *VAR_11,
     struct hid_usage *VAR_12, unsigned long **VAR_13,
     int *VAR_14)
{
 int VAR_15;

 if ((VAR_12->hid & VAR_5) != VAR_3)
  return 0;

 VAR_15 = FUNC_0(VAR_12->hid & VAR_4);
 if (VAR_15 != 0) {
  FUNC_1(VAR_10, VAR_12, VAR_13, VAR_14, VAR_2,
        VAR_6[VAR_15 - 1]);
  return 1;
 }
 if ((VAR_12->hid & VAR_4) >= VAR_1 &&
     (VAR_12->hid & VAR_4) <= VAR_0) {
  switch (VAR_12->hid & VAR_4) {
  case 129:
   FUNC_1(VAR_10, VAR_12, VAR_13, VAR_14, VAR_2,
         VAR_8[0]);
   return 1;

  case 128:
   FUNC_1(VAR_10, VAR_12, VAR_13, VAR_14, VAR_2,
         VAR_8[1]);
   return 1;

  case 132:
   FUNC_1(VAR_10, VAR_12, VAR_13, VAR_14, VAR_2,
         VAR_7[0]);
   return 1;

  case 131:
   FUNC_1(VAR_10, VAR_12, VAR_13, VAR_14, VAR_2,
         VAR_7[1]);
   return 1;

  case 130:
   FUNC_1(VAR_10, VAR_12, VAR_13, VAR_14, VAR_2,
         VAR_7[2]);
   return 1;

  default:
   return -1;
  }
 }

 return 0;
}
