
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int discards_failed; int writes_failed; int reads_failed; int reads_retried; int soft_errors; int hard_errors; int crc_errors; } ;
struct rsxx_dma_ctrl {TYPE_2__* card; TYPE_1__ stats; } ;
struct rsxx_dma {int cmd; int laddr; } ;
struct TYPE_4__ {int scrub_hard; } ;


 int FUNC_0 (TYPE_2__*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int,int ,int) ;
 int FUNC_2 (int ,char*,int,int ,int) ;
 int FUNC_3 (struct rsxx_dma_ctrl*,struct rsxx_dma*,unsigned int) ;
 int FUNC_4 (struct rsxx_dma_ctrl*,struct rsxx_dma*) ;

__attribute__((used)) static void FUNC_5(struct rsxx_dma_ctrl *VAR_6,
          struct rsxx_dma *VAR_7,
          u8 VAR_8)
{
 unsigned int VAR_9 = 0;
 int VAR_10 = 0;

 FUNC_1(FUNC_0(VAR_6->card),
  "Handling DMA error(cmd x%02x, laddr x%08x st:x%02x)\n",
  VAR_7->cmd, VAR_7->laddr, VAR_8);

 if (VAR_8 & VAR_2)
  VAR_6->stats.crc_errors++;
 if (VAR_8 & VAR_4)
  VAR_6->stats.hard_errors++;
 if (VAR_8 & VAR_5)
  VAR_6->stats.soft_errors++;

 switch (VAR_7->cmd) {
 case 130:
  if (VAR_8 & (VAR_2 | VAR_4)) {
   if (VAR_6->card->scrub_hard) {
    VAR_7->cmd = 129;
    VAR_10 = 1;
    VAR_6->stats.reads_retried++;
   } else {
    VAR_9 |= VAR_0;
    VAR_6->stats.reads_failed++;
   }
  } else if (VAR_8 & VAR_3) {
   VAR_9 |= VAR_0;
   VAR_6->stats.reads_failed++;
  }

  break;
 case 129:
  if (VAR_8 & (VAR_2 | VAR_4)) {

   VAR_9 |= VAR_0;
   VAR_6->stats.reads_failed++;
  }

  break;
 case 128:
  VAR_9 |= VAR_0;
  VAR_6->stats.writes_failed++;

  break;
 case 131:
  VAR_9 |= VAR_0;
  VAR_6->stats.discards_failed++;

  break;
 default:
  FUNC_2(FUNC_0(VAR_6->card),
   "Unknown command in DMA!(cmd: x%02x "
      "laddr x%08x st: x%02x\n",
      VAR_7->cmd, VAR_7->laddr, VAR_8);
  VAR_9 |= VAR_1;

  break;
 }

 if (VAR_10)
  FUNC_4(VAR_6, VAR_7);
 else
  FUNC_3(VAR_6, VAR_7, VAR_9);
}
