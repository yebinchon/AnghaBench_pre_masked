
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ata_device {TYPE_1__* link; } ;
struct acpi_device {int hp; } ;
struct TYPE_4__ {struct ata_device* dev; } ;
struct TYPE_3__ {int ap; } ;


 int FUNC_0 (int ,struct ata_device*,int ) ;
 TYPE_2__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct acpi_device *VAR_0, u32 VAR_1)
{
 struct ata_device *VAR_2 = FUNC_1(VAR_0->hp).dev;
 FUNC_0(VAR_2->link->ap, VAR_2, VAR_1);
 return 0;
}
