
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {unsigned int hid; int collection_index; } ;
struct hid_input {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct hid_input*,struct hid_usage*,unsigned long**,int*,int ,unsigned int) ;
 unsigned int* VAR_4 ;
 unsigned int* VAR_5 ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_6, struct hid_input *VAR_7,
        struct hid_field *VAR_8, struct hid_usage *VAR_9,
        unsigned long **VAR_10, int *VAR_11)
{
 unsigned int VAR_12 = VAR_9->hid & VAR_2;

 if ((VAR_9->hid & VAR_3) != VAR_1)
  return -1;

 switch (VAR_9->collection_index) {
 case 1:
  if (VAR_12 >= FUNC_0(VAR_4))
   return -1;

  VAR_12 = VAR_4[VAR_12];
  if (!VAR_12)
   return -1;
  break;
 case 2:
  if (VAR_12 >= FUNC_0(VAR_5))
   return -1;

  VAR_12 = VAR_5[VAR_12];
  if (!VAR_12)
   return -1;
  break;
 default:
  return -1;
 }

 FUNC_1(VAR_7, VAR_9, VAR_10, VAR_11, VAR_0, VAR_12);
 return 1;
}
