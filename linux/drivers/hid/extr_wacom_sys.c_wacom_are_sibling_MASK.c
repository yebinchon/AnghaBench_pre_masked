
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_features {scalar_t__ oVid; scalar_t__ oPid; scalar_t__ type; int device_type; } ;
struct TYPE_2__ {struct wacom_features features; } ;
struct wacom {TYPE_1__ wacom_wac; } ;
struct hid_device {scalar_t__ vendor; scalar_t__ product; } ;
typedef scalar_t__ __u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hid_device*,struct hid_device*,char) ;
 struct wacom* FUNC_1 (struct hid_device*) ;

__attribute__((used)) static bool FUNC_2(struct hid_device *VAR_5,
  struct hid_device *VAR_6)
{
 struct wacom *VAR_7 = FUNC_1(VAR_5);
 struct wacom_features *VAR_8 = &VAR_7->wacom_wac.features;
 struct wacom *VAR_9 = FUNC_1(VAR_6);
 struct wacom_features *VAR_10 = &VAR_9->wacom_wac.features;
 __u32 VAR_11 = VAR_8->oVid ? VAR_8->oVid : VAR_5->vendor;
 __u32 VAR_12 = VAR_8->oPid ? VAR_8->oPid : VAR_5->product;


 if (VAR_8->oVid != VAR_0 && VAR_6->vendor != VAR_11)
  return 0;
 if (VAR_8->oPid != VAR_0 && VAR_6->product != VAR_12)
  return 0;






 if (VAR_5->vendor == VAR_6->vendor && VAR_5->product == VAR_6->product) {
  if (!FUNC_0(VAR_5, VAR_6, '/'))
   return 0;
 } else {
  if (!FUNC_0(VAR_5, VAR_6, '.'))
   return 0;
 }


 if (VAR_8->type != VAR_1)
  return 1;





 if ((VAR_8->device_type & VAR_2) &&
     !(VAR_10->device_type & VAR_2))
  return 0;





 if (!(VAR_8->device_type & VAR_2) &&
     (VAR_10->device_type & VAR_2))
  return 0;


 if ((VAR_8->device_type & VAR_3) &&
     !(VAR_10->device_type & VAR_4))
  return 0;


 if ((VAR_8->device_type & VAR_4) &&
     !(VAR_10->device_type & VAR_3))
  return 0;





 return 1;
}
