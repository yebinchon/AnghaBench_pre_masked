
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {scalar_t__ defer_bits; } ;
struct nv_swncq_port_priv {int ncq_flags; int dhfis_bits; int dmafis_bits; int last_issue_tag; TYPE_2__ defer_queue; int sactive_block; int qc_active; } ;
struct ata_queued_cmd {int dummy; } ;
struct ata_eh_info {int action; int err_mask; int serror; } ;
struct TYPE_7__ {struct ata_eh_info eh_info; } ;
struct ata_port {int pflags; TYPE_1__* ops; int print_id; TYPE_3__ link; struct nv_swncq_port_priv* private_data; } ;
struct TYPE_5__ {int (* sff_check_status ) (struct ata_port*) ;int (* scr_write ) (TYPE_3__*,int ,int ) ;scalar_t__ (* scr_read ) (TYPE_3__*,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct ata_eh_info*) ;
 int FUNC_2 (struct ata_eh_info*,char*,...) ;
 int FUNC_3 (struct ata_port*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (struct ata_port*) ;
 int FUNC_5 (struct ata_port*,int) ;
 int FUNC_6 (struct ata_port*,int) ;
 int FUNC_7 (struct ata_port*,struct ata_queued_cmd*) ;
 struct ata_queued_cmd* FUNC_8 (struct ata_port*) ;
 scalar_t__ FUNC_9 (struct ata_port*) ;
 int FUNC_10 (struct ata_port*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct ata_port*) ;
 scalar_t__ FUNC_13 (TYPE_3__*,int ,int *) ;
 int FUNC_14 (TYPE_3__*,int ,int ) ;
 int FUNC_15 (struct ata_port*) ;

__attribute__((used)) static void FUNC_16(struct ata_port *VAR_16, u16 VAR_17)
{
 struct nv_swncq_port_priv *VAR_18 = VAR_16->private_data;
 struct ata_queued_cmd *VAR_19;
 struct ata_eh_info *VAR_20 = &VAR_16->link.eh_info;
 u32 VAR_21;
 u8 VAR_22;

 VAR_22 = VAR_16->ops->sff_check_status(VAR_16);
 FUNC_6(VAR_16, VAR_17);
 if (!VAR_17)
  return;

 if (VAR_16->pflags & VAR_5)
  return;

 if (VAR_17 & VAR_9) {
  FUNC_5(VAR_16, VAR_17);
  return;
 }

 if (!VAR_18->qc_active)
  return;

 if (VAR_16->ops->scr_read(&VAR_16->link, VAR_11, &VAR_21))
  return;
 VAR_16->ops->scr_write(&VAR_16->link, VAR_11, VAR_21);

 if (VAR_22 & VAR_4) {
  FUNC_1(VAR_20);
  FUNC_2(VAR_20, "Ata error. fis:0x%X", VAR_17);
  VAR_20->err_mask |= VAR_0;
  VAR_20->serror |= VAR_21;
  VAR_20->action |= VAR_3;
  FUNC_3(VAR_16);
  return;
 }

 if (VAR_17 & VAR_6) {



  VAR_18->ncq_flags |= VAR_12;
 }

 if (VAR_17 & VAR_10) {
  VAR_18->ncq_flags |= VAR_15;
  FUNC_0("id 0x%x SWNCQ: qc_active 0x%X "
   "dhfis 0x%X dmafis 0x%X sactive 0x%X\n",
   VAR_16->print_id, VAR_18->qc_active, VAR_18->dhfis_bits,
   VAR_18->dmafis_bits, FUNC_11(VAR_18->sactive_block));
  if (FUNC_9(VAR_16) < 0)
   goto irq_error;
 }

 if (VAR_17 & VAR_7) {



  VAR_18->dhfis_bits |= (0x1 << VAR_18->last_issue_tag);
  VAR_18->ncq_flags |= VAR_13;
  if (VAR_18->ncq_flags & (VAR_15 | VAR_12)) {
   FUNC_2(VAR_20, "illegal fis transaction");
   VAR_20->err_mask |= VAR_1;
   VAR_20->action |= VAR_3;
   goto irq_error;
  }

  if (!(VAR_17 & VAR_8) &&
      !(VAR_18->ncq_flags & VAR_14)) {
   VAR_22 = VAR_16->ops->sff_check_status(VAR_16);
   if (VAR_22 & VAR_2)
    goto irq_exit;

   if (VAR_18->defer_queue.defer_bits) {
    FUNC_0("send next command\n");
    VAR_19 = FUNC_8(VAR_16);
    FUNC_7(VAR_16, VAR_19);
   }
  }
 }

 if (VAR_17 & VAR_8) {



  VAR_18->dmafis_bits |= (0x1 << FUNC_10(VAR_16));
  VAR_18->ncq_flags |= VAR_14;
  FUNC_4(VAR_16);
 }

irq_exit:
 return;
irq_error:
 FUNC_2(VAR_20, "fis:0x%x", VAR_17);
 FUNC_3(VAR_16);
 return;
}
