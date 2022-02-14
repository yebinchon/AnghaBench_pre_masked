
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidpp_event {int* params; } ;
struct hid_device {int dummy; } ;
struct dj_workitem {int device_type; int quad_id_msb; int quad_id_lsb; int reports_supported; int type; } ;
struct dj_receiver_dev {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct dj_receiver_dev* FUNC_0 (struct hid_device*) ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_1(struct hid_device *VAR_12,
         struct hidpp_event *VAR_13,
         struct dj_workitem *VAR_14)
{
 struct dj_receiver_dev *VAR_15 = FUNC_0(VAR_12);

 VAR_14->type = VAR_10;
 VAR_14->device_type = VAR_13->params[VAR_2] &
    VAR_1;
 VAR_14->quad_id_msb = VAR_13->params[VAR_4];
 VAR_14->quad_id_lsb = VAR_13->params[VAR_3];
 switch (VAR_14->device_type) {
 case 129:
  VAR_14->reports_supported |= VAR_8 | VAR_6 |
            VAR_7 | VAR_5 |
            VAR_0;
  break;
 case 128:
  VAR_14->reports_supported |= VAR_9 | VAR_0;
  if (VAR_15->type == VAR_11)
   VAR_14->reports_supported |= VAR_6;
  break;
 }
}
