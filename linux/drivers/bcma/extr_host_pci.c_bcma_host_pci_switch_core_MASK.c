
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; } ;
struct bcma_device {TYPE_1__ id; TYPE_2__* bus; int wrap; int addr; } ;
struct TYPE_4__ {struct bcma_device* mapped_core; int host_pci; scalar_t__ host_is_pcie2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static void FUNC_2(struct bcma_device *VAR_3)
{
 int VAR_4 = VAR_3->bus->host_is_pcie2 ?
  VAR_0 : VAR_2;

 FUNC_1(VAR_3->bus->host_pci, VAR_1,
          VAR_3->addr);
 FUNC_1(VAR_3->bus->host_pci, VAR_4, VAR_3->wrap);
 VAR_3->bus->mapped_core = VAR_3;
 FUNC_0(VAR_3->bus, "Switched to core: 0x%X\n", VAR_3->id.id);
}
