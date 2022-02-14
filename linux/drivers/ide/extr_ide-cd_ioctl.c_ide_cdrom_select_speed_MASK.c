
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct cdrom_info {int current_speed; } ;
struct cdrom_device_info {int mask; int speed; TYPE_1__* handle; } ;
struct TYPE_5__ {struct cdrom_info* driver_data; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_0 (TYPE_1__*,unsigned char*,int ,int *,int *,int *,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (unsigned char*,int ,int) ;

int FUNC_4(struct cdrom_device_info *VAR_6, int VAR_7)
{
 ide_drive_t *VAR_8 = VAR_6->handle;
 struct cdrom_info *VAR_9 = VAR_8->driver_data;
 u8 VAR_10[VAR_0];
 int VAR_11;
 unsigned char VAR_12[VAR_1];

 if (VAR_7 == 0)
  VAR_7 = 0xffff;
 else
  VAR_7 *= 177;

 FUNC_3(VAR_12, 0, VAR_1);

 VAR_12[0] = VAR_5;

 VAR_12[2] = (VAR_7 >> 8) & 0xff;
 VAR_12[3] = VAR_7 & 0xff;
 if ((VAR_6->mask & (VAR_2 | VAR_3 | VAR_4)) !=
     (VAR_2 | VAR_3 | VAR_4)) {

  VAR_12[4] = (VAR_7 >> 8) & 0xff;
  VAR_12[5] = VAR_7 & 0xff;
 }

 VAR_11 = FUNC_0(VAR_8, VAR_12, 0, ((void*)0), ((void*)0), ((void*)0), 0, 0);

 if (!FUNC_1(VAR_8, VAR_10)) {
  FUNC_2(VAR_8, VAR_10);
  VAR_6->speed = VAR_9->current_speed;
 }

 return 0;
}
