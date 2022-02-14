
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ata_eh_context {int** cmd_timeout_idx; } ;
struct ata_device {size_t devno; TYPE_1__* link; } ;
struct TYPE_4__ {unsigned long* timeouts; } ;
struct TYPE_3__ {struct ata_eh_context eh_context; } ;


 unsigned long VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int ) ;

unsigned long FUNC_1(struct ata_device *VAR_2, u8 VAR_3)
{
 struct ata_eh_context *VAR_4 = &VAR_2->link->eh_context;
 int VAR_5 = FUNC_0(VAR_3);
 int VAR_6;

 if (VAR_5 < 0)
  return VAR_0;

 VAR_6 = VAR_4->cmd_timeout_idx[VAR_2->devno][VAR_5];
 return VAR_1[VAR_5].timeouts[VAR_6];
}
