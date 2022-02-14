
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sony_sc {int quirks; } ;
struct hid_usage {unsigned int hid; int collection_index; } ;
struct hid_input {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int* VAR_9 ;
 int FUNC_1 (struct hid_device*,struct hid_input*,struct hid_field*,struct hid_usage*,unsigned long**,int*) ;
 struct sony_sc* FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_input*,struct hid_usage*,unsigned long**,int*,int ,unsigned int) ;
 int FUNC_4 (struct hid_device*,struct hid_input*,struct hid_field*,struct hid_usage*,unsigned long**,int*) ;
 int FUNC_5 (struct hid_device*,struct hid_input*,struct hid_field*,struct hid_usage*,unsigned long**,int*) ;
 int FUNC_6 (struct hid_device*,struct hid_input*,struct hid_field*,struct hid_usage*,unsigned long**,int*) ;

__attribute__((used)) static int FUNC_7(struct hid_device *VAR_10, struct hid_input *VAR_11,
   struct hid_field *VAR_12, struct hid_usage *VAR_13,
   unsigned long **VAR_14, int *VAR_15)
{
 struct sony_sc *VAR_16 = FUNC_2(VAR_10);

 if (VAR_16->quirks & VAR_0) {
  unsigned int VAR_17 = VAR_13->hid & VAR_4;

  if ((VAR_13->hid & VAR_5) != VAR_3)
   return -1;

  switch (VAR_13->collection_index) {
  case 1:
   if (VAR_17 >= FUNC_0(VAR_9))
    return -1;

   VAR_17 = VAR_9[VAR_17];
   if (!VAR_17)
    return -1;
   break;
  default:
   return -1;
  }

  FUNC_3(VAR_11, VAR_13, VAR_14, VAR_15, VAR_2, VAR_17);
  return 1;
 }

 if (VAR_16->quirks & VAR_7)
  return FUNC_5(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);

 if (VAR_16->quirks & VAR_6)
  return FUNC_4(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);

 if (VAR_16->quirks & VAR_8)
  return FUNC_6(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);

 if (VAR_16->quirks & VAR_1)
  return FUNC_1(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);



 return 0;
}
