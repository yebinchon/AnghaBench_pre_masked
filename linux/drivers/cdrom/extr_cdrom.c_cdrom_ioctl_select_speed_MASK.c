
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdrom_device_info {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* select_speed ) (struct cdrom_device_info*,unsigned long) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct cdrom_device_info*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct cdrom_device_info *VAR_3,
  unsigned long VAR_4)
{
 FUNC_1(VAR_1, "entering CDROM_SELECT_SPEED\n");

 if (!FUNC_0(VAR_0))
  return -VAR_2;
 return VAR_3->ops->select_speed(VAR_3, VAR_4);
}
