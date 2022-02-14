
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hid_report_enum {scalar_t__ numbered; } ;
struct hid_report {int size; unsigned int maxfield; int * field; int id; } ;
struct hid_driver {int (* report ) (struct hid_device*,struct hid_report*) ;} ;
struct hid_device {int claimed; struct hid_driver* driver; int (* hiddev_report_event ) (struct hid_device*,struct hid_report*) ;struct hid_report_enum* report_enum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int,int) ;
 struct hid_report* FUNC_1 (struct hid_report_enum*,int *) ;
 int FUNC_2 (struct hid_device*,int ,int *,int) ;
 int FUNC_3 (struct hid_device*,struct hid_report*) ;
 int FUNC_4 (struct hid_device*,int *,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct hid_device*,struct hid_report*) ;
 int FUNC_7 (struct hid_device*,struct hid_report*) ;

int FUNC_8(struct hid_device *VAR_4, int VAR_5, u8 *VAR_6, u32 VAR_7,
  int VAR_8)
{
 struct hid_report_enum *VAR_9 = VAR_4->report_enum + VAR_5;
 struct hid_report *VAR_10;
 struct hid_driver *VAR_11;
 unsigned int VAR_12;
 u32 VAR_13, VAR_14 = VAR_7;
 u8 *VAR_15 = VAR_6;
 int VAR_16 = 0;

 VAR_10 = FUNC_1(VAR_9, VAR_6);
 if (!VAR_10)
  goto out;

 if (VAR_9->numbered) {
  VAR_15++;
  VAR_14--;
 }

 VAR_13 = ((VAR_10->size - 1) >> 3) + 1;

 if (VAR_13 > VAR_3)
  VAR_13 = VAR_3;

 if (VAR_14 < VAR_13) {
  FUNC_0("report %d is too short, (%d < %d)\n", VAR_10->id,
    VAR_14, VAR_13);
  FUNC_5(VAR_15 + VAR_14, 0, VAR_13 - VAR_14);
 }

 if ((VAR_4->claimed & VAR_0) && VAR_4->hiddev_report_event)
  VAR_4->hiddev_report_event(VAR_4, VAR_10);
 if (VAR_4->claimed & VAR_1) {
  VAR_16 = FUNC_4(VAR_4, VAR_6, VAR_7);
  if (VAR_16)
   goto out;
 }

 if (VAR_4->claimed != VAR_1 && VAR_10->maxfield) {
  for (VAR_12 = 0; VAR_12 < VAR_10->maxfield; VAR_12++)
   FUNC_2(VAR_4, VAR_10->field[VAR_12], VAR_15, VAR_8);
  VAR_11 = VAR_4->driver;
  if (VAR_11 && VAR_11->report)
   VAR_11->report(VAR_4, VAR_10);
 }

 if (VAR_4->claimed & VAR_2)
  FUNC_3(VAR_4, VAR_10);
out:
 return VAR_16;
}
