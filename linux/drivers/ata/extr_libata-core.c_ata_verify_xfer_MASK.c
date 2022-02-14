
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int protocol; } ;
struct ata_queued_cmd {TYPE_1__ tf; struct ata_device* dev; } ;
struct ata_device {int flags; scalar_t__ udma_mask; scalar_t__ mwdma_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ata_queued_cmd *VAR_1)
{
 struct ata_device *VAR_2 = VAR_1->dev;

 if (!FUNC_0(VAR_1->tf.protocol))
  return;

 if ((VAR_2->mwdma_mask || VAR_2->udma_mask) && FUNC_1(VAR_1->tf.protocol))
  return;

 VAR_2->flags &= ~VAR_0;
}
