
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cdrom_device_info {TYPE_1__* handle; } ;
struct TYPE_3__ {int dev_flags; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *) ;

unsigned int FUNC_1(struct cdrom_device_info *VAR_3,
      unsigned int VAR_4, int VAR_5)
{
 ide_drive_t *VAR_6 = VAR_3->handle;
 int VAR_7;

 if (VAR_5 == VAR_0) {
  (void) FUNC_0(VAR_6, ((void*)0));
  VAR_7 = (VAR_6->dev_flags & VAR_2) ? 1 : 0;
  VAR_6->dev_flags &= ~VAR_2;
  return VAR_7 ? VAR_1 : 0;
 } else {
  return 0;
 }
}
