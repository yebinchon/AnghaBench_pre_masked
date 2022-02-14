
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdrom_device_info {int handle; } ;


 int FUNC_0 (int ,char*,int ,int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct cdrom_device_info *VAR_1, int VAR_2)
{
 char VAR_3[12] = { 0x1b, 0, 0, 0, 3 - VAR_2, 0, 0, 0, 0, 0, 0, 0 };

 return FUNC_0(VAR_1->handle, VAR_3, 0, VAR_0,
    VAR_2 ? "eject" : "close tray");
}
