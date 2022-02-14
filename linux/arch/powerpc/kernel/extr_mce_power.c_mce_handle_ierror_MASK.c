
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct pt_regs {int msr; int nip; } ;
struct mce_ierror_table {int srr1_mask; int srr1_value; int error_type; int sync_error; scalar_t__ nip_valid; int initiator; int severity; int error_subtype; int error_class; } ;
struct TYPE_4__ {int link_error_type; int ra_error_type; int user_error_type; int tlb_error_type; int erat_error_type; int slb_error_type; int ue_error_type; } ;
struct mce_error_info {int error_type; int sync_error; int initiator; int severity; int error_class; TYPE_1__ u; } ;
struct TYPE_6__ {scalar_t__ in_mce; } ;
struct TYPE_5__ {int in_mce; int mce_faulty_slbs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long FUNC_0 (struct pt_regs*,int) ;
 TYPE_3__* FUNC_1 () ;
 TYPE_2__* VAR_10 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct pt_regs *VAR_11,
  const struct mce_ierror_table VAR_12[],
  struct mce_error_info *VAR_13, uint64_t *VAR_14,
  uint64_t *VAR_15)
{
 uint64_t VAR_16 = VAR_11->msr;
 int VAR_17 = 0;
 int VAR_18;

 *VAR_14 = 0;

 for (VAR_18 = 0; VAR_12[VAR_18].srr1_mask; VAR_18++) {
  if ((VAR_16 & VAR_12[VAR_18].srr1_mask) != VAR_12[VAR_18].srr1_value)
   continue;


  switch (VAR_12[VAR_18].error_type) {
  case 131:
   if (VAR_10->in_mce == 1)
    FUNC_3(VAR_10->mce_faulty_slbs);
   VAR_17 = FUNC_2(VAR_4);
   break;
  case 134:
   VAR_17 = FUNC_2(VAR_3);
   break;
  case 130:
   VAR_17 = FUNC_2(VAR_5);
   break;
  }


  VAR_13->error_type = VAR_12[VAR_18].error_type;
  VAR_13->error_class = VAR_12[VAR_18].error_class;
  switch (VAR_12[VAR_18].error_type) {
  case 129:
   VAR_13->u.ue_error_type = VAR_12[VAR_18].error_subtype;
   break;
  case 131:
   VAR_13->u.slb_error_type = VAR_12[VAR_18].error_subtype;
   break;
  case 134:
   VAR_13->u.erat_error_type = VAR_12[VAR_18].error_subtype;
   break;
  case 130:
   VAR_13->u.tlb_error_type = VAR_12[VAR_18].error_subtype;
   break;
  case 128:
   VAR_13->u.user_error_type = VAR_12[VAR_18].error_subtype;
   break;
  case 132:
   VAR_13->u.ra_error_type = VAR_12[VAR_18].error_subtype;
   break;
  case 133:
   VAR_13->u.link_error_type = VAR_12[VAR_18].error_subtype;
   break;
  }
  VAR_13->sync_error = VAR_12[VAR_18].sync_error;
  VAR_13->severity = VAR_12[VAR_18].severity;
  VAR_13->initiator = VAR_12[VAR_18].initiator;
  if (VAR_12[VAR_18].nip_valid) {
   *VAR_14 = VAR_11->nip;
   if (VAR_13->sync_error &&
    VAR_12[VAR_18].error_type == 129) {
    unsigned long VAR_19;

    if (FUNC_1()->in_mce < VAR_0) {
     VAR_19 = FUNC_0(VAR_11, VAR_11->nip);
     if (VAR_19 != VAR_9) {
      *VAR_15 =
       (VAR_19 << VAR_8);
     }
    }
   }
  }
  return VAR_17;
 }

 VAR_13->error_type = VAR_2;
 VAR_13->error_class = VAR_1;
 VAR_13->severity = VAR_7;
 VAR_13->initiator = VAR_6;
 VAR_13->sync_error = 1;

 return 0;
}
