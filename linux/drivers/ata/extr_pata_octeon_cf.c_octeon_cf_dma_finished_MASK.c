
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int done; } ;
union cvmx_mio_boot_dma_intx {scalar_t__ u64; TYPE_3__ s; } ;
struct TYPE_7__ {int size; } ;
union cvmx_mio_boot_dma_cfgx {scalar_t__ u64; TYPE_2__ s; } ;
typedef int u8 ;
struct octeon_cf_port {scalar_t__ dma_base; } ;
struct TYPE_10__ {scalar_t__ protocol; } ;
struct ata_queued_cmd {TYPE_5__ tf; int err_mask; } ;
struct ata_eh_info {int dummy; } ;
struct TYPE_6__ {struct ata_eh_info eh_info; } ;
struct ata_port {scalar_t__ hsm_task_state; TYPE_4__* ops; int print_id; struct octeon_cf_port* private_data; TYPE_1__ link; } ;
struct TYPE_9__ {int (* sff_check_status ) (struct ata_port*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct ata_eh_info*,char*,int ) ;
 int FUNC_2 (struct ata_port*,struct ata_queued_cmd*,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (struct ata_port*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static unsigned int FUNC_7(struct ata_port *VAR_7,
     struct ata_queued_cmd *VAR_8)
{
 struct ata_eh_info *VAR_9 = &VAR_7->link.eh_info;
 struct octeon_cf_port *VAR_10 = VAR_7->private_data;
 union cvmx_mio_boot_dma_cfgx VAR_11;
 union cvmx_mio_boot_dma_intx VAR_12;
 u8 VAR_13;

 FUNC_0("ata%u: protocol %d task_state %d\n",
  VAR_7->print_id, VAR_8->tf.protocol, VAR_7->hsm_task_state);


 if (VAR_7->hsm_task_state != VAR_6)
  return 0;

 VAR_11.u64 = FUNC_3(VAR_10->dma_base + VAR_2);
 if (VAR_11.s.size != 0xfffff) {

  VAR_8->err_mask |= VAR_0;
  VAR_7->hsm_task_state = VAR_5;
 }


 VAR_11.u64 = 0;
 VAR_11.s.size = -1;
 FUNC_4(VAR_10->dma_base + VAR_2, VAR_11.u64);


 VAR_12.u64 = 0;
 FUNC_4(VAR_10->dma_base + VAR_4, VAR_12.u64);


 VAR_12.s.done = 1;
 FUNC_4(VAR_10->dma_base + VAR_3, VAR_12.u64);

 VAR_13 = VAR_7->ops->sff_check_status(VAR_7);

 FUNC_2(VAR_7, VAR_8, VAR_13, 0);

 if (FUNC_6(VAR_8->err_mask) && (VAR_8->tf.protocol == VAR_1))
  FUNC_1(VAR_9, "DMA stat 0x%x", VAR_13);

 return 1;
}
