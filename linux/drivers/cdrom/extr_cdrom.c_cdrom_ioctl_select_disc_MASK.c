
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdrom_device_info {unsigned long capacity; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* select_disc ) (struct cdrom_device_info*,unsigned long) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct cdrom_device_info*,unsigned long) ;
 int FUNC_3 (struct cdrom_device_info*,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct cdrom_device_info *VAR_7,
  unsigned long VAR_8)
{
 FUNC_1(VAR_4, "entering CDROM_SELECT_DISC\n");

 if (!FUNC_0(VAR_0))
  return -VAR_6;

 if (VAR_8 != VAR_1 && VAR_8 != VAR_2) {
  if (VAR_8 >= VAR_7->capacity)
   return -VAR_5;
 }






 if (VAR_7->ops->select_disc)
  return VAR_7->ops->select_disc(VAR_7, VAR_8);

 FUNC_1(VAR_3, "Using generic cdrom_select_disc()\n");
 return FUNC_2(VAR_7, VAR_8);
}
