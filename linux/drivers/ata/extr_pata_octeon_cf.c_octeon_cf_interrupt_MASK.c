
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int done; } ;
union cvmx_mio_boot_dma_intx {void* u64; TYPE_5__ s; } ;
struct TYPE_8__ {int en; } ;
union cvmx_mio_boot_dma_cfgx {TYPE_3__ s; void* u64; } ;
typedef int u8 ;
struct octeon_cf_port {int dma_finished; int delayed_finish; scalar_t__ dma_base; } ;
struct TYPE_7__ {int flags; } ;
struct ata_queued_cmd {int cursg; TYPE_2__ tf; } ;
struct TYPE_9__ {int altstatus_addr; } ;
struct TYPE_6__ {int active_tag; } ;
struct ata_port {TYPE_4__ ioaddr; TYPE_1__ link; struct octeon_cf_port* private_data; } ;
struct ata_host {int n_ports; int lock; struct ata_port** ports; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int FUNC_1 (unsigned int) ;
 int VAR_6 ;
 struct ata_queued_cmd* FUNC_2 (struct ata_port*,int ) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,void*) ;
 int FUNC_5 (int *,int ,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 unsigned int FUNC_8 (struct ata_port*,struct ata_queued_cmd*) ;
 int FUNC_9 (struct ata_queued_cmd*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_14(int VAR_7, void *VAR_8)
{
 struct ata_host *VAR_9 = VAR_8;
 struct octeon_cf_port *VAR_10;
 int VAR_11;
 unsigned int VAR_12 = 0;
 unsigned long VAR_13;

 FUNC_12(&VAR_9->lock, VAR_13);

 FUNC_0("ENTER\n");
 for (VAR_11 = 0; VAR_11 < VAR_9->n_ports; VAR_11++) {
  u8 VAR_14;
  struct ata_port *VAR_15;
  struct ata_queued_cmd *VAR_16;
  union cvmx_mio_boot_dma_intx VAR_17;
  union cvmx_mio_boot_dma_cfgx VAR_18;

  VAR_15 = VAR_9->ports[VAR_11];
  VAR_10 = VAR_15->private_data;

  VAR_17.u64 = FUNC_3(VAR_10->dma_base + VAR_4);
  VAR_18.u64 = FUNC_3(VAR_10->dma_base + VAR_3);

  VAR_16 = FUNC_2(VAR_15, VAR_15->link.active_tag);

  if (!VAR_16 || (VAR_16->tf.flags & VAR_2))
   continue;

  if (VAR_17.s.done && !VAR_18.s.en) {
   if (!FUNC_10(VAR_16->cursg)) {
    VAR_16->cursg = FUNC_11(VAR_16->cursg);
    VAR_12 = 1;
    FUNC_9(VAR_16);
    continue;
   } else {
    VAR_10->dma_finished = 1;
   }
  }
  if (!VAR_10->dma_finished)
   continue;
  VAR_14 = FUNC_6(VAR_15->ioaddr.altstatus_addr);
  if (VAR_14 & (VAR_0 | VAR_1)) {







   VAR_17.u64 = 0;
   VAR_17.s.done = 1;
   FUNC_4(VAR_10->dma_base + VAR_4,
           VAR_17.u64);
   FUNC_5(&VAR_10->delayed_finish,
            FUNC_7(VAR_6),
            VAR_6 / 5,
            VAR_5);
   VAR_12 = 1;
  } else {
   VAR_12 |= FUNC_8(VAR_15, VAR_16);
  }
 }
 FUNC_13(&VAR_9->lock, VAR_13);
 FUNC_0("EXIT\n");
 return FUNC_1(VAR_12);
}
