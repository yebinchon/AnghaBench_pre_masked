
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdrom_device_info {int name; int (* exit ) (struct cdrom_device_info*) ;int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cdrom_device_info*) ;

void FUNC_5(struct cdrom_device_info *VAR_3)
{
 FUNC_0(VAR_0, "entering unregister_cdrom\n");

 FUNC_2(&VAR_2);
 FUNC_1(&VAR_3->list);
 FUNC_3(&VAR_2);

 if (VAR_3->exit)
  VAR_3->exit(VAR_3);

 FUNC_0(VAR_1, "drive \"/dev/%s\" unregistered\n", VAR_3->name);
}
