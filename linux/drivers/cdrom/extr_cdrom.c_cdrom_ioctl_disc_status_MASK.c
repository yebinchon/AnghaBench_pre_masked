
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error; scalar_t__ audio; scalar_t__ data; scalar_t__ cdi; scalar_t__ xa; } ;
typedef TYPE_1__ tracktype ;
struct cdrom_device_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct cdrom_device_info*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct cdrom_device_info *VAR_8)
{
 tracktype VAR_9;

 FUNC_0(VAR_6, "entering CDROM_DISC_STATUS\n");

 FUNC_1(VAR_8, &VAR_9);
 if (VAR_9.error)
  return VAR_9.error;


 if (VAR_9.audio > 0) {
  if (!VAR_9.data && !VAR_9.cdi && !VAR_9.xa)
   return VAR_0;
  else
   return VAR_2;
 }

 if (VAR_9.cdi > 0)
  return VAR_5;
 if (VAR_9.xa > 0)
  return VAR_4;
 if (VAR_9.data > 0)
  return VAR_1;


 FUNC_0(VAR_7, "This disc doesn't have any tracks I recognize!\n");
 return VAR_3;
}
