
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct picolcd_data {int opmode_delay; int status; int lock; int hdev; } ;
struct hid_report {int maxfield; int * field; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct picolcd_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,struct hid_report*,int ) ;
 int FUNC_2 (int ,int,int) ;
 struct hid_report* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_5,
  struct device_attribute *VAR_6, const char *VAR_7, size_t VAR_8)
{
 struct picolcd_data *VAR_9 = FUNC_0(VAR_5);
 struct hid_report *VAR_10 = ((void*)0);
 int VAR_11 = VAR_9->opmode_delay;
 unsigned long VAR_12;

 if (FUNC_6(VAR_7, "lcd")) {
  if (VAR_9->status & VAR_2)
   VAR_10 = FUNC_3(VAR_3, VAR_9->hdev);
 } else if (FUNC_6(VAR_7, "bootloader")) {
  if (!(VAR_9->status & VAR_2))
   VAR_10 = FUNC_3(VAR_4, VAR_9->hdev);
 } else {
  return -VAR_0;
 }

 if (!VAR_10 || VAR_10->maxfield != 1)
  return -VAR_0;

 FUNC_4(&VAR_9->lock, VAR_12);
 FUNC_2(VAR_10->field[0], 0, VAR_11 & 0xff);
 FUNC_2(VAR_10->field[0], 1, (VAR_11 >> 8) & 0xff);
 FUNC_1(VAR_9->hdev, VAR_10, VAR_1);
 FUNC_5(&VAR_9->lock, VAR_12);
 return VAR_8;
}
