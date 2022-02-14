
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int sub_id; int* params; } ;
struct hidpp_report {scalar_t__ report_id; int * rawbytes; TYPE_1__ rap; } ;
struct TYPE_4__ {int capacity; int level; int status; int online; scalar_t__ ps; } ;
struct hidpp_device {TYPE_2__ battery; } ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct hidpp_device *VAR_3, u8 *VAR_4, int VAR_5)
{
 struct hidpp_report *VAR_6 = (struct hidpp_report *)VAR_4;
 int VAR_7, VAR_8, VAR_9;
 bool VAR_10;

 if (VAR_6->report_id != VAR_2)
  return 0;

 switch (VAR_6->rap.sub_id) {
 case 128:
  VAR_8 = VAR_3->battery.capacity;
  VAR_9 = FUNC_1(VAR_6->rawbytes[1]);
  VAR_7 = FUNC_2(VAR_6->rawbytes[2]);
  break;
 case 129:
  VAR_8 = VAR_6->rap.params[0];
  VAR_9 = VAR_3->battery.level;
  VAR_7 = FUNC_0(VAR_6->rawbytes[3]);
  break;
 default:
  return 0;
 }

 VAR_10 = VAR_8 != VAR_3->battery.capacity ||
    VAR_9 != VAR_3->battery.level ||
    VAR_7 != VAR_3->battery.status;


 VAR_3->battery.online = VAR_7 == VAR_0 ||
    VAR_7 == VAR_1;

 if (VAR_10) {
  VAR_3->battery.level = VAR_9;
  VAR_3->battery.status = VAR_7;
  if (VAR_3->battery.ps)
   FUNC_3(VAR_3->battery.ps);
 }

 return 0;
}
