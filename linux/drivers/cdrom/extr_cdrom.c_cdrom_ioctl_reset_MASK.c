
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdrom_device_info {TYPE_1__* ops; } ;
struct block_device {int dummy; } ;
struct TYPE_2__ {int (* reset ) (struct cdrom_device_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct block_device*) ;
 int FUNC_4 (struct cdrom_device_info*) ;

__attribute__((used)) static int FUNC_5(struct cdrom_device_info *VAR_5,
  struct block_device *VAR_6)
{
 FUNC_2(VAR_2, "entering CDROM_RESET\n");

 if (!FUNC_1(VAR_0))
  return -VAR_3;
 if (!FUNC_0(VAR_1))
  return -VAR_4;
 FUNC_3(VAR_6);
 return VAR_5->ops->reset(VAR_5);
}
