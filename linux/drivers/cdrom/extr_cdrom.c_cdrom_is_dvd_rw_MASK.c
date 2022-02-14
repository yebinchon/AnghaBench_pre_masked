
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdrom_device_info {int mmc3_profile; } ;



__attribute__((used)) static int FUNC_0(struct cdrom_device_info *VAR_0)
{
 switch (VAR_0->mmc3_profile) {
 case 0x12:
 case 0x1A:
 case 0x43:
  return 0;
 default:
  return 1;
 }
}
