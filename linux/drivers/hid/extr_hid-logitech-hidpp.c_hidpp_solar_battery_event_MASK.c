
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int funcindex_clientid; scalar_t__ feature_index; int* params; } ;
struct hidpp_report {TYPE_1__ fap; } ;
struct TYPE_4__ {scalar_t__ solar_feature_index; int capacity; int online; int status; scalar_t__ ps; } ;
struct hidpp_device {TYPE_2__ battery; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct hidpp_device *VAR_4,
         u8 *VAR_5, int VAR_6)
{
 struct hidpp_report *VAR_7 = (struct hidpp_report *)VAR_5;
 int VAR_8, VAR_9, VAR_10;
 u8 VAR_11;

 VAR_11 = VAR_7->fap.funcindex_clientid;


 if (VAR_7->fap.feature_index != VAR_4->battery.solar_feature_index ||
     !(VAR_11 == VAR_0 ||
       VAR_11 == 129 ||
       VAR_11 == 128))
  return 0;

 VAR_8 = VAR_7->fap.params[0];

 switch (VAR_11) {
 case 129:
  VAR_9 = (VAR_7->fap.params[1] << 8) | VAR_7->fap.params[2];
  if (VAR_9 > 200)
   VAR_10 = VAR_1;
  else
   VAR_10 = VAR_2;
  break;
 case 128:
 default:
  if (VAR_8 < VAR_4->battery.capacity)
   VAR_10 = VAR_2;
  else
   VAR_10 = VAR_1;

 }

 if (VAR_8 == 100)
  VAR_10 = VAR_3;

 VAR_4->battery.online = 1;
 if (VAR_8 != VAR_4->battery.capacity ||
     VAR_10 != VAR_4->battery.status) {
  VAR_4->battery.capacity = VAR_8;
  VAR_4->battery.status = VAR_10;
  if (VAR_4->battery.ps)
   FUNC_0(VAR_4->battery.ps);
 }

 return 0;
}
