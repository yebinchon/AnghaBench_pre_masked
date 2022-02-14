
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {int hid; } ;
struct hid_input {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int* VAR_7 ;
 unsigned int* VAR_8 ;
 int FUNC_1 (struct hid_input*,struct hid_usage*,unsigned long**,int*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_9, struct hid_input *VAR_10,
         struct hid_field *VAR_11, struct hid_usage *VAR_12,
         unsigned long **VAR_13, int *VAR_14)
{
 if ((VAR_12->hid & VAR_6) == VAR_3) {
  unsigned int VAR_15 = VAR_12->hid & VAR_5;

  if (VAR_15 >= FUNC_0(VAR_8))
   return -1;

  VAR_15 = VAR_8[VAR_15];
  FUNC_1(VAR_10, VAR_12, VAR_13, VAR_14, VAR_1, VAR_15);
  return 1;
 } else if ((VAR_12->hid & VAR_6) == VAR_4) {
  unsigned int VAR_16 = VAR_12->hid & VAR_5;


  if (VAR_12->hid == VAR_2)
   return 0;

  if (VAR_16 >= FUNC_0(VAR_7))
   return -1;

  VAR_16 = VAR_7[VAR_16];
  FUNC_1(VAR_10, VAR_12, VAR_13, VAR_14, VAR_0, VAR_16);
  return 1;
 }

 return 0;
}
