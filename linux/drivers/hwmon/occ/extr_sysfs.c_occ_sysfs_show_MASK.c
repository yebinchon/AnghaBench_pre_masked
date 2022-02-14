
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sensor_device_attribute {int index; } ;
struct occ_poll_response_header {int status; int ext_status; int occ_state; int occs_present; } ;
struct TYPE_2__ {scalar_t__ data; } ;
struct occ {TYPE_1__ resp; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct occ* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct occ*) ;
 int FUNC_3 (char*,scalar_t__,char*,int) ;
 struct sensor_device_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_8,
         struct device_attribute *VAR_9, char *VAR_10)
{
 int VAR_11;
 int VAR_12 = 0;
 struct occ *VAR_13 = FUNC_0(VAR_8);
 struct occ_poll_response_header *VAR_14;
 struct sensor_device_attribute *VAR_15 = FUNC_4(VAR_9);

 VAR_11 = FUNC_2(VAR_13);
 if (VAR_11)
  return VAR_11;

 VAR_14 = (struct occ_poll_response_header *)VAR_13->resp.data;

 switch (VAR_15->index) {
 case 0:
  VAR_12 = !!(VAR_14->status & VAR_6);
  break;
 case 1:
  VAR_12 = !!(VAR_14->status & VAR_5);
  break;
 case 2:
  VAR_12 = !!(VAR_14->ext_status & VAR_1);
  break;
 case 3:
  VAR_12 = !!(VAR_14->ext_status & VAR_2);
  break;
 case 4:
  VAR_12 = !!(VAR_14->ext_status & VAR_3);
  break;
 case 5:
  VAR_12 = !!(VAR_14->ext_status & VAR_4);
  break;
 case 6:
  VAR_12 = VAR_14->occ_state;
  break;
 case 7:
  if (VAR_14->status & VAR_6)
   VAR_12 = FUNC_1(VAR_14->occs_present);
  else
   VAR_12 = 1;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_3(VAR_10, VAR_7 - 1, "%d\n", VAR_12);
}
