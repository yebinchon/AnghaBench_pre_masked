
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wacom_features {int quirks; } ;
struct wacom_wac {unsigned int* serial; unsigned int* id; int pen_fifo; struct wacom_features features; } ;
struct wacom {struct wacom_wac wacom_wac; } ;
struct hid_usage {int hid; } ;
struct hid_report {int maxfield; struct hid_field** field; } ;
struct hid_field {int maxusage; unsigned int report_offset; unsigned int report_size; struct hid_usage* usage; } ;
struct hid_device {int dummy; } ;
typedef int __u64 ;


 unsigned int VAR_0 ;



 int VAR_1 ;
 unsigned int FUNC_0 (struct hid_device*,int *,unsigned int,unsigned int) ;
 struct wacom* FUNC_1 (struct hid_device*) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct hid_device*,int *) ;
 int FUNC_4 (struct hid_device*,int *,int *,int) ;

__attribute__((used)) static int FUNC_5(struct hid_device *VAR_2,
  struct hid_report *VAR_3, u8 *VAR_4, int VAR_5)
{
 struct wacom *VAR_6 = FUNC_1(VAR_2);
 struct wacom_wac *VAR_7 = &VAR_6->wacom_wac;
 struct wacom_features *VAR_8 = &VAR_7->features;
 bool VAR_9 = 0;
 bool VAR_10 = 0;
 int VAR_11, VAR_12;

 if (VAR_7->serial[0] || !(VAR_8->quirks & VAR_1))
  return 0;


 for (VAR_11 = 0; VAR_11 < VAR_3->maxfield; VAR_11++) {
  for (VAR_12 = 0; VAR_12 < VAR_3->field[VAR_11]->maxusage; VAR_12++) {
   struct hid_field *VAR_13 = VAR_3->field[VAR_11];
   struct hid_usage *VAR_14 = &VAR_13->usage[VAR_12];
   unsigned int VAR_15 = FUNC_2(VAR_14->hid);
   unsigned int VAR_16;
   unsigned int VAR_17;
   unsigned int VAR_18;

   if (VAR_15 != VAR_0 &&
       VAR_15 != 130 &&
       VAR_15 != 129 &&
       VAR_15 != 128)
    continue;

   VAR_16 = VAR_13->report_offset;
   VAR_17 = VAR_13->report_size;
   VAR_18 = FUNC_0(VAR_2, VAR_4+1, VAR_16 + VAR_12 * VAR_17, VAR_17);


   if (VAR_15 == VAR_0)
    VAR_18 = !VAR_18;

   if (VAR_18) {
    VAR_9 = 1;
    switch (VAR_15) {
    case 130:
     VAR_7->serial[0] = VAR_18;
     break;

    case 129:
     VAR_7->serial[0] |= ((__u64)VAR_18) << 32;
     break;

    case 128:
     VAR_7->id[0] = VAR_18;
     break;
    }
   }
   else {
    VAR_10 = 1;
   }
  }
 }

 if (VAR_9)
  FUNC_3(VAR_2, &VAR_7->pen_fifo);
 else if (VAR_10)
  FUNC_4(VAR_2, &VAR_7->pen_fifo,
           VAR_4, VAR_5);

 return VAR_10 && !VAR_9;
}
