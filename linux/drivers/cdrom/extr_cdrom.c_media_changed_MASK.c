
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdrom_device_info {unsigned int mc_flags; int ioctl_events; scalar_t__ media_written; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* media_changed ) (struct cdrom_device_info*,int ) ;scalar_t__ check_events; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct cdrom_device_info*,int) ;
 int FUNC_3 (struct cdrom_device_info*,int ) ;

__attribute__((used)) static
int FUNC_4(struct cdrom_device_info *VAR_3, int VAR_4)
{
 unsigned int VAR_5 = (1 << (VAR_4 & 1));
 int VAR_6 = !!(VAR_3->mc_flags & VAR_5);
 bool VAR_7;

 if (!FUNC_1(VAR_0))
  return VAR_6;


 if (VAR_3->ops->check_events) {
  FUNC_0(!VAR_4);
  FUNC_2(VAR_3, VAR_2);
  VAR_7 = VAR_3->ioctl_events & VAR_2;
  VAR_3->ioctl_events = 0;
 } else
  VAR_7 = VAR_3->ops->media_changed(VAR_3, VAR_1);

 if (VAR_7) {
  VAR_3->mc_flags = 0x3;
  VAR_6 |= 1;
  VAR_3->media_written = 0;
 }

 VAR_3->mc_flags &= ~VAR_5;
 return VAR_6;
}
