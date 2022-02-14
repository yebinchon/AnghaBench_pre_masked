
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct pt_regs {int msr; int * gpr; } ;
struct mce_error_info {int ignore_event; int error_class; int sync_error; int severity; int initiator; } ;
struct TYPE_16__ {int effective_address_provided; int physical_address_provided; int ignore_event; scalar_t__ physical_address; scalar_t__ effective_address; } ;
struct TYPE_15__ {int effective_address_provided; scalar_t__ effective_address; } ;
struct TYPE_14__ {int effective_address_provided; scalar_t__ effective_address; } ;
struct TYPE_13__ {int effective_address_provided; scalar_t__ effective_address; } ;
struct TYPE_12__ {int effective_address_provided; scalar_t__ effective_address; } ;
struct TYPE_11__ {int effective_address_provided; scalar_t__ effective_address; } ;
struct TYPE_10__ {int effective_address_provided; scalar_t__ effective_address; } ;
struct TYPE_17__ {TYPE_7__ ue_error; TYPE_6__ link_error; TYPE_5__ ra_error; TYPE_4__ user_error; TYPE_3__ erat_error; TYPE_2__ slb_error; TYPE_1__ tlb_error; } ;
struct machine_check_event {int srr1; int in_use; scalar_t__ error_type; TYPE_8__ u; int error_class; int sync_error; int severity; int initiator; int disposition; int cpu; int gpr3; scalar_t__ srr0; int version; } ;
struct TYPE_18__ {int paca_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int ) ;
 TYPE_9__* FUNC_1 () ;
 int FUNC_2 (struct machine_check_event*) ;
 int * VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct machine_check_event*,struct mce_error_info*) ;
 struct machine_check_event* FUNC_4 (int *) ;

void FUNC_5(struct pt_regs *VAR_15, long VAR_16,
      struct mce_error_info *VAR_17,
      uint64_t VAR_18, uint64_t VAR_19, uint64_t VAR_20)
{
 int VAR_21 = FUNC_0(VAR_14) - 1;
 struct machine_check_event *VAR_22 = FUNC_4(&VAR_13[VAR_21]);






 if (VAR_21 >= VAR_0)
  return;


 VAR_22->version = VAR_10;
 VAR_22->srr0 = VAR_18;
 VAR_22->srr1 = VAR_15->msr;
 VAR_22->gpr3 = VAR_15->gpr[3];
 VAR_22->in_use = 1;
 VAR_22->cpu = FUNC_1()->paca_index;


 if (VAR_16 && (VAR_15->msr & VAR_11))
  VAR_22->disposition = VAR_2;
 else
  VAR_22->disposition = VAR_1;

 VAR_22->initiator = VAR_17->initiator;
 VAR_22->severity = VAR_17->severity;
 VAR_22->sync_error = VAR_17->sync_error;
 VAR_22->error_class = VAR_17->error_class;




 FUNC_3(VAR_22, VAR_17);

 if (!VAR_19)
  return;

 if (VAR_22->error_type == VAR_7) {
  VAR_22->u.tlb_error.effective_address_provided = 1;
  VAR_22->u.tlb_error.effective_address = VAR_19;
 } else if (VAR_22->error_type == VAR_6) {
  VAR_22->u.slb_error.effective_address_provided = 1;
  VAR_22->u.slb_error.effective_address = VAR_19;
 } else if (VAR_22->error_type == VAR_3) {
  VAR_22->u.erat_error.effective_address_provided = 1;
  VAR_22->u.erat_error.effective_address = VAR_19;
 } else if (VAR_22->error_type == VAR_9) {
  VAR_22->u.user_error.effective_address_provided = 1;
  VAR_22->u.user_error.effective_address = VAR_19;
 } else if (VAR_22->error_type == VAR_5) {
  VAR_22->u.ra_error.effective_address_provided = 1;
  VAR_22->u.ra_error.effective_address = VAR_19;
 } else if (VAR_22->error_type == VAR_4) {
  VAR_22->u.link_error.effective_address_provided = 1;
  VAR_22->u.link_error.effective_address = VAR_19;
 } else if (VAR_22->error_type == VAR_8) {
  VAR_22->u.ue_error.effective_address_provided = 1;
  VAR_22->u.ue_error.effective_address = VAR_19;
  if (VAR_20 != VAR_12) {
   VAR_22->u.ue_error.physical_address_provided = 1;
   VAR_22->u.ue_error.physical_address = VAR_20;
   VAR_22->u.ue_error.ignore_event = VAR_17->ignore_event;
   FUNC_2(VAR_22);
  }
 }
 return;
}
