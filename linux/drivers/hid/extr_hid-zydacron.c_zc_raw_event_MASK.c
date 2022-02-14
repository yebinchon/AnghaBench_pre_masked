
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zc_device {unsigned int* last_key; int input_ep81; } ;
struct hid_report {int id; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct zc_device* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (int ,int ,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_5, struct hid_report *VAR_6,
  u8 *VAR_7, int VAR_8)
{
 struct zc_device *VAR_9 = FUNC_0(VAR_5);
 int VAR_10 = 0;
 unsigned VAR_11;
 unsigned short VAR_12;

 if (VAR_6->id == VAR_7[0]) {


  for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
   VAR_11 = VAR_9->last_key[VAR_12];
   if (VAR_11) {
    FUNC_1(VAR_9->input_ep81, VAR_0, VAR_11, 0);
    VAR_9->last_key[VAR_12] = 0;
   }
  }

  VAR_11 = 0;
  switch (VAR_6->id) {
  case 0x02:
  case 0x03:
   switch (VAR_7[1]) {
   case 0x10:
    VAR_11 = VAR_2;
    VAR_12 = 0;
    break;
   case 0x30:
    VAR_11 = VAR_4;
    VAR_12 = 1;
    break;
   case 0x70:
    VAR_11 = VAR_1;
    VAR_12 = 2;
    break;
   case 0x04:
    VAR_11 = VAR_3;
    VAR_12 = 3;
    break;
   }

   if (VAR_11) {
    FUNC_1(VAR_9->input_ep81, VAR_0, VAR_11, 1);
    VAR_9->last_key[VAR_12] = VAR_11;
   }

   VAR_10 = 1;
   break;
  }
 }

 return VAR_10;
}
