
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fw_cdev_get_info {scalar_t__ rom; size_t rom_length; scalar_t__ bus_reset; int bus_reset_closure; int card; int version; } ;
union ioctl_arg {struct fw_cdev_get_info get_info; } ;
struct fw_cdev_event_bus_reset {int dummy; } ;
struct client {TYPE_2__* device; int link; int bus_reset_closure; int version; } ;
struct TYPE_4__ {int config_rom_length; int client_list_mutex; int client_list; struct fw_cdev_event_bus_reset* config_rom; TYPE_1__* card; } ;
struct TYPE_3__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ,struct fw_cdev_event_bus_reset*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fw_cdev_event_bus_reset*,struct client*) ;
 int VAR_2 ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (size_t,size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct client *VAR_3, union ioctl_arg *VAR_4)
{
 struct fw_cdev_get_info *VAR_5 = &VAR_4->get_info;
 struct fw_cdev_event_bus_reset VAR_6;
 unsigned long VAR_7 = 0;

 VAR_3->version = VAR_5->version;
 VAR_5->version = VAR_1;
 VAR_5->card = VAR_3->device->card->index;

 FUNC_1(&VAR_2);

 if (VAR_5->rom != 0) {
  size_t VAR_8 = VAR_5->rom_length;
  size_t VAR_9 = VAR_3->device->config_rom_length * 4;

  VAR_7 = FUNC_0(FUNC_8(VAR_5->rom),
       VAR_3->device->config_rom, FUNC_5(VAR_8, VAR_9));
 }
 VAR_5->rom_length = VAR_3->device->config_rom_length * 4;

 FUNC_9(&VAR_2);

 if (VAR_7 != 0)
  return -VAR_0;

 FUNC_6(&VAR_3->device->client_list_mutex);

 VAR_3->bus_reset_closure = VAR_5->bus_reset_closure;
 if (VAR_5->bus_reset != 0) {
  FUNC_2(&VAR_6, VAR_3);

  VAR_7 = FUNC_0(FUNC_8(VAR_5->bus_reset), &VAR_6, 36);
 }
 if (VAR_7 == 0 && FUNC_4(&VAR_3->link))
  FUNC_3(&VAR_3->link, &VAR_3->device->client_list);

 FUNC_7(&VAR_3->device->client_list_mutex);

 return VAR_7 ? -VAR_0 : 0;
}
