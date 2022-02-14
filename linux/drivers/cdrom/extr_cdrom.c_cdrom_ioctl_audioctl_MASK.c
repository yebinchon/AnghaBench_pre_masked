
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdrom_device_info {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* audio_ioctl ) (struct cdrom_device_info*,unsigned int,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct cdrom_device_info*,TYPE_1__*) ;
 int FUNC_3 (struct cdrom_device_info*,unsigned int,int *) ;

__attribute__((used)) static int FUNC_4(struct cdrom_device_info *VAR_3,
  unsigned int VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_1, "doing audio ioctl (start/stop/pause/resume)\n");

 if (!FUNC_0(VAR_0))
  return -VAR_2;
 VAR_5 = FUNC_2(VAR_3, VAR_3->ops);
 if (VAR_5)
  return VAR_5;
 return VAR_3->ops->audio_ioctl(VAR_3, VAR_4, ((void*)0));
}
