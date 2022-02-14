
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct packet_command {int dummy; } ;
struct cdrom_device_info {int dummy; } ;
struct cdrom_info {struct cdrom_device_info devinfo; } ;
struct TYPE_3__ {int atapi_flags; struct cdrom_info* driver_data; } ;
typedef TYPE_1__ ide_drive_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cdrom_device_info*,struct packet_command*,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct packet_command*,int *,int,int ) ;

int FUNC_3(ide_drive_t *VAR_6, u8 *VAR_7)
{
 struct cdrom_info *VAR_8 = VAR_6->driver_data;
 struct cdrom_device_info *VAR_9 = &VAR_8->devinfo;
 struct packet_command VAR_10;
 int VAR_11, VAR_12 = 3, VAR_13 = VAR_1;

 FUNC_1(VAR_5, "enter");

 if ((VAR_6->atapi_flags & VAR_4) == 0)
  VAR_13 -= VAR_0;

 FUNC_2(&VAR_10, VAR_7, VAR_13, VAR_2);
 do {

  VAR_11 = FUNC_0(VAR_9, &VAR_10, VAR_3, 0);
  if (!VAR_11)
   break;
 } while (--VAR_12);
 return VAR_11;
}
