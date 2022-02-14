
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int action; unsigned int* dev_action; } ;
struct ata_eh_context {TYPE_2__ i; } ;
struct ata_device {size_t devno; TYPE_1__* link; } ;
struct TYPE_3__ {struct ata_eh_context eh_context; } ;



__attribute__((used)) static unsigned int FUNC_0(struct ata_device *VAR_0)
{
 struct ata_eh_context *VAR_1 = &VAR_0->link->eh_context;

 return VAR_1->i.action | VAR_1->i.dev_action[VAR_0->devno];
}
