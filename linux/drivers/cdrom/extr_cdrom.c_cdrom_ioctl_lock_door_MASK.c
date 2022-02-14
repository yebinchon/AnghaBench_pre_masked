
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdrom_device_info {int keeplocked; int use_count; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* lock_door ) (struct cdrom_device_info*,unsigned long) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (struct cdrom_device_info*,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct cdrom_device_info *VAR_5,
  unsigned long VAR_6)
{
 FUNC_2(VAR_2, "%socking door\n", VAR_6 ? "L" : "Unl");

 if (!FUNC_0(VAR_1))
  return -VAR_4;

 VAR_5->keeplocked = VAR_6 ? 1 : 0;





 if (VAR_5->use_count != 1 && !VAR_6 && !FUNC_1(VAR_0))
  return -VAR_3;
 return VAR_5->ops->lock_door(VAR_5, VAR_6);
}
