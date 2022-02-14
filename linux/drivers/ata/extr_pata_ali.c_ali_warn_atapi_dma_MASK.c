
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct ata_eh_context {TYPE_2__ i; } ;
struct ata_device {scalar_t__ class; TYPE_1__* link; } ;
struct TYPE_3__ {struct ata_eh_context eh_context; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ata_device*,char*) ;

__attribute__((used)) static void FUNC_1(struct ata_device *VAR_3)
{
 struct ata_eh_context *VAR_4 = &VAR_3->link->eh_context;
 int VAR_5 = VAR_4->i.flags & VAR_1;

 if (VAR_5 && VAR_3->class == VAR_0 && !VAR_2) {
  FUNC_0(VAR_3,
        "WARNING: ATAPI DMA disabled for reliability issues.  It can be enabled\n");
  FUNC_0(VAR_3,
        "WARNING: via pata_ali.atapi_dma modparam or corresponding sysfs node.\n");
 }
}
