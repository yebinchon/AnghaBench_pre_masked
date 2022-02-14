
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ata_eh_context {int** cmd_timeout_idx; } ;
struct ata_device {size_t devno; TYPE_1__* link; } ;
struct TYPE_4__ {scalar_t__* timeouts; } ;
struct TYPE_3__ {struct ata_eh_context eh_context; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct ata_device *VAR_2, u8 VAR_3)
{
 struct ata_eh_context *VAR_4 = &VAR_2->link->eh_context;
 int VAR_5 = FUNC_0(VAR_3);
 int VAR_6;

 if (VAR_5 < 0)
  return;

 VAR_6 = VAR_4->cmd_timeout_idx[VAR_2->devno][VAR_5];
 if (VAR_1[VAR_5].timeouts[VAR_6 + 1] != VAR_0)
  VAR_4->cmd_timeout_idx[VAR_2->devno][VAR_5]++;
}
