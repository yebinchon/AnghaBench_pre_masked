
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long ramdisk_image; unsigned long ramdisk_size; } ;
struct boot_params {unsigned long ext_ramdisk_image; unsigned long ext_ramdisk_size; TYPE_1__ hdr; } ;



__attribute__((used)) static int FUNC_0(struct boot_params *VAR_0,
  unsigned long VAR_1, unsigned long VAR_2)
{
 VAR_0->hdr.ramdisk_image = VAR_1 & 0xffffffffUL;
 VAR_0->hdr.ramdisk_size = VAR_2 & 0xffffffffUL;

 VAR_0->ext_ramdisk_image = VAR_1 >> 32;
 VAR_0->ext_ramdisk_size = VAR_2 >> 32;

 return 0;
}
