
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcd_unit {int changed; } ;
struct cdrom_device_info {struct pcd_unit* handle; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(struct cdrom_device_info *VAR_1,
         unsigned int VAR_2, int VAR_3)
{
 struct pcd_unit *VAR_4 = VAR_1->handle;
 int VAR_5 = VAR_4->changed;
 if (VAR_5)
  VAR_4->changed = 0;
 return VAR_5 ? VAR_0 : 0;
}
