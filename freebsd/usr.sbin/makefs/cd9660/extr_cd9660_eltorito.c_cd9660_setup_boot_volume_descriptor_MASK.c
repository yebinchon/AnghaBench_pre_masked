
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ volumeDescriptorData; } ;
typedef TYPE_1__ volume_descriptor ;
struct TYPE_7__ {TYPE_3__* boot_descriptor; } ;
typedef TYPE_2__ iso9660_disk ;
struct TYPE_8__ {int* version; int identifier; int boot_system_identifier; int * boot_record_indicator; } ;
typedef TYPE_3__ boot_volume_descriptor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

int
FUNC_1(iso9660_disk *VAR_3,
    volume_descriptor *VAR_4)
{
 boot_volume_descriptor *VAR_5 =
     (boot_volume_descriptor*)VAR_4->volumeDescriptorData;

 VAR_5->boot_record_indicator[0] = VAR_1;
 FUNC_0(VAR_5->identifier, VAR_2, 5);
 VAR_5->version[0] = 1;
 FUNC_0(VAR_5->boot_system_identifier, VAR_0, 23);
 FUNC_0(VAR_5->identifier, VAR_2, 5);
 VAR_3->boot_descriptor =
     (boot_volume_descriptor*) VAR_4->volumeDescriptorData;
 return 1;
}
