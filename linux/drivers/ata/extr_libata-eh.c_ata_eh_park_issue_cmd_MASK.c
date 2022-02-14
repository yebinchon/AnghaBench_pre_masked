
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_taskfile {int feature; int lbal; int lbam; int lbah; int flags; int protocol; int command; } ;
struct ata_eh_context {int unloaded_mask; } ;
struct ata_device {int devno; TYPE_1__* link; } ;
struct TYPE_2__ {struct ata_eh_context eh_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ata_device*,char*) ;
 unsigned int FUNC_1 (struct ata_device*,struct ata_taskfile*,int *,int ,int *,int ,int ) ;
 int FUNC_2 (struct ata_device*,struct ata_taskfile*) ;

__attribute__((used)) static void FUNC_3(struct ata_device *VAR_6, int VAR_7)
{
 struct ata_eh_context *VAR_8 = &VAR_6->link->eh_context;
 struct ata_taskfile VAR_9;
 unsigned int VAR_10;

 FUNC_2(VAR_6, &VAR_9);
 if (VAR_7) {
  VAR_8->unloaded_mask |= 1 << VAR_6->devno;
  VAR_9.command = VAR_1;
  VAR_9.feature = 0x44;
  VAR_9.lbal = 0x4c;
  VAR_9.lbam = 0x4e;
  VAR_9.lbah = 0x55;
 } else {
  VAR_8->unloaded_mask &= ~(1 << VAR_6->devno);
  VAR_9.command = VAR_0;
 }

 VAR_9.flags |= VAR_3 | VAR_4;
 VAR_9.protocol = VAR_2;
 VAR_10 = FUNC_1(VAR_6, &VAR_9, ((void*)0), VAR_5, ((void*)0), 0, 0);
 if (VAR_7 && (VAR_10 || VAR_9.lbal != 0xc4)) {
  FUNC_0(VAR_6, "head unload failed!\n");
  VAR_8->unloaded_mask &= ~(1 << VAR_6->devno);
 }
}
