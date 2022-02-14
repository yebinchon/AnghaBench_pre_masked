
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hid_device {int dummy; } ;
struct dj_report {int device_index; int* report_params; int report_type; int report_id; } ;
struct dj_receiver_dev {scalar_t__ type; struct hid_device* hidpp; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct hid_device*,int,int*,int ,int ,int ) ;
 int FUNC_1 (struct dj_report*) ;
 struct dj_report* FUNC_2 (int,int ) ;
 int FUNC_3 (struct dj_receiver_dev*,struct dj_report*) ;
 int FUNC_4 (int*,int ,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int FUNC_6(struct dj_receiver_dev *VAR_11,
       unsigned VAR_12)
{
 struct hid_device *VAR_13 = VAR_11->hidpp;
 struct dj_report *VAR_14;
 u8 *VAR_15;
 int VAR_16 = 0;

 VAR_14 = FUNC_2(sizeof(struct dj_report), VAR_3);
 if (!VAR_14)
  return -VAR_2;

 if (VAR_11->type == VAR_10) {
  VAR_14->report_id = VAR_7;
  VAR_14->device_index = 0xFF;
  VAR_14->report_type = VAR_9;
  VAR_14->report_params[VAR_0] = 0x3F;
  VAR_14->report_params[VAR_1] =
        (u8)VAR_12;

  VAR_16 = FUNC_3(VAR_11, VAR_14);







  FUNC_5(50);
 }
 VAR_15 = (u8 *)VAR_14;

 FUNC_4(VAR_15, 0, VAR_4);

 VAR_15[0] = VAR_8;
 VAR_15[1] = 0xFF;
 VAR_15[2] = 0x80;
 VAR_15[3] = 0x00;
 VAR_15[4] = 0x00;
 VAR_15[5] = 0x09;
 VAR_15[6] = 0x00;

 FUNC_0(VAR_13, VAR_8, VAR_15,
   VAR_4, VAR_5,
   VAR_6);

 FUNC_1(VAR_14);
 return VAR_16;
}
