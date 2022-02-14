
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdrom_device_info {unsigned int vfs_events; } ;


 int FUNC_0 (struct cdrom_device_info*,unsigned int) ;

unsigned int FUNC_1(struct cdrom_device_info *VAR_0,
    unsigned int VAR_1)
{
 unsigned int VAR_2;

 FUNC_0(VAR_0, VAR_1);
 VAR_2 = VAR_0->vfs_events;
 VAR_0->vfs_events = 0;
 return VAR_2;
}
