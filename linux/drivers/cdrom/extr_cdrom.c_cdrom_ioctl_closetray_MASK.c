
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdrom_device_info {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* tray_move ) (struct cdrom_device_info*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct cdrom_device_info*,int ) ;

__attribute__((used)) static int FUNC_3(struct cdrom_device_info *VAR_3)
{
 FUNC_1(VAR_1, "entering CDROMCLOSETRAY\n");

 if (!FUNC_0(VAR_0))
  return -VAR_2;
 return VAR_3->ops->tray_move(VAR_3, 0);
}
