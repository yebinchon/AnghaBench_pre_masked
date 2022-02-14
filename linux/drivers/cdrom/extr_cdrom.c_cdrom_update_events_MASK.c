
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdrom_device_info {unsigned int vfs_events; unsigned int ioctl_events; TYPE_1__* ops; } ;
struct TYPE_2__ {unsigned int (* check_events ) (struct cdrom_device_info*,unsigned int,int ) ;} ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct cdrom_device_info*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_1(struct cdrom_device_info *VAR_1,
    unsigned int VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = VAR_1->ops->check_events(VAR_1, VAR_2, VAR_0);
 VAR_1->vfs_events |= VAR_3;
 VAR_1->ioctl_events |= VAR_3;
}
