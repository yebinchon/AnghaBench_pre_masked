
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct wacom_wac {size_t mode_report; size_t mode_value; } ;
struct hid_report_enum {struct hid_report** report_id_hash; } ;
struct hid_report {int dummy; } ;
struct hid_device {struct hid_report_enum* report_enum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t* FUNC_0 (struct hid_report*,int ) ;
 int FUNC_1 (struct hid_report*) ;
 int FUNC_2 (size_t*) ;
 int FUNC_3 (struct hid_device*,size_t,size_t*,int ,int) ;
 int FUNC_4 (struct hid_device*,size_t,size_t*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct hid_device *VAR_5,
     struct wacom_wac *VAR_6)
{
 u8 *VAR_7;
 struct hid_report *VAR_8;
 struct hid_report_enum *VAR_9;
 u32 VAR_10;
 int VAR_11 = -VAR_1, VAR_12 = 0;

 if (VAR_6->mode_report < 0)
  return 0;

 VAR_9 = &(VAR_5->report_enum[VAR_3]);
 VAR_8 = VAR_9->report_id_hash[VAR_6->mode_report];
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_8, VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_10 = FUNC_1(VAR_8);

 do {
  VAR_7[0] = VAR_6->mode_report;
  VAR_7[1] = VAR_6->mode_value;

  VAR_11 = FUNC_4(VAR_5, VAR_3, VAR_7,
      VAR_10, 1);
  if (VAR_11 >= 0)
   VAR_11 = FUNC_3(VAR_5, VAR_3,
                            VAR_7, VAR_10, 1);
 } while (VAR_11 >= 0 &&
   VAR_7[1] != VAR_6->mode_report &&
   VAR_12++ < VAR_4);

 FUNC_2(VAR_7);

 return VAR_11 < 0 ? VAR_11 : 0;
}
