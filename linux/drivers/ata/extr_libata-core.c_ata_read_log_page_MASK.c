
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct ata_taskfile {unsigned int nsect; unsigned int hob_nsect; int flags; void* lbam; void* lbal; int protocol; int command; } ;
struct ata_device {int horkage; int id; scalar_t__ dma_mode; TYPE_2__* link; } ;
struct TYPE_4__ {TYPE_1__* ap; } ;
struct TYPE_3__ {unsigned long flags; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*,unsigned int,...) ;
 int FUNC_1 (struct ata_device*,char*) ;
 unsigned int FUNC_2 (struct ata_device*,struct ata_taskfile*,int *,int ,void*,unsigned int,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct ata_device*,struct ata_taskfile*) ;

unsigned int FUNC_5(struct ata_device *VAR_12, u8 VAR_13,
          u8 VAR_14, void *VAR_15, unsigned int VAR_16)
{
 unsigned long VAR_17 = VAR_12->link->ap->flags;
 struct ata_taskfile VAR_18;
 unsigned int VAR_19;
 bool VAR_20 = 0;

 FUNC_0("read log page - log 0x%x, page 0x%x\n", VAR_13, VAR_14);





 if (VAR_17 & VAR_3)
  return VAR_0;

retry:
 FUNC_4(VAR_12, &VAR_18);
 if (VAR_12->dma_mode && FUNC_3(VAR_12->id) &&
     !(VAR_12->horkage & VAR_4)) {
  VAR_18.command = VAR_1;
  VAR_18.protocol = VAR_5;
  VAR_20 = 1;
 } else {
  VAR_18.command = VAR_2;
  VAR_18.protocol = VAR_6;
  VAR_20 = 0;
 }
 VAR_18.lbal = VAR_13;
 VAR_18.lbam = VAR_14;
 VAR_18.nsect = VAR_16;
 VAR_18.hob_nsect = VAR_16 >> 8;
 VAR_18.flags |= VAR_9 | VAR_10 | VAR_8;

 VAR_19 = FUNC_2(VAR_12, &VAR_18, ((void*)0), VAR_11,
         VAR_15, VAR_16 * VAR_7, 0);

 if (VAR_19 && VAR_20) {
  VAR_12->horkage |= VAR_4;
  FUNC_1(VAR_12, "READ LOG DMA EXT failed, trying PIO\n");
  goto retry;
 }

 FUNC_0("EXIT, err_mask=%x\n", VAR_19);
 return VAR_19;
}
