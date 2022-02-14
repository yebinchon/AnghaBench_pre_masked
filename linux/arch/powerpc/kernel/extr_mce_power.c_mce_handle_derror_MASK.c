
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct pt_regs {int dsisr; int dar; } ;
struct TYPE_4__ {int link_error_type; int ra_error_type; int user_error_type; int tlb_error_type; int erat_error_type; int slb_error_type; int ue_error_type; } ;
struct mce_error_info {int error_type; int sync_error; int initiator; int severity; int error_class; TYPE_1__ u; } ;
struct mce_derror_table {int dsisr_value; int error_type; int sync_error; scalar_t__ dar_valid; int initiator; int severity; int error_subtype; int error_class; } ;
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
 TYPE_3__* FUNC_0 () ;
 TYPE_2__* VAR_8 ;
 int FUNC_1 (struct pt_regs*,int*,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct pt_regs *VAR_9,
  const struct mce_derror_table VAR_10[],
  struct mce_error_info *VAR_11, uint64_t *VAR_12,
  uint64_t *VAR_13)
{
 uint64_t VAR_14 = VAR_9->dsisr;
 int VAR_15 = 0;
 int VAR_16 = 0;
 int VAR_17;

 *VAR_12 = 0;

 for (VAR_17 = 0; VAR_10[VAR_17].dsisr_value; VAR_17++) {
  if (!(VAR_14 & VAR_10[VAR_17].dsisr_value))
   continue;


  switch (VAR_10[VAR_17].error_type) {
  case 131:
   if (VAR_8->in_mce == 1)
    FUNC_3(VAR_8->mce_faulty_slbs);
   if (FUNC_2(VAR_4))
    VAR_15 = 1;
   break;
  case 134:
   if (FUNC_2(VAR_3))
    VAR_15 = 1;
   break;
  case 130:
   if (FUNC_2(VAR_5))
    VAR_15 = 1;
   break;
  }






  if (VAR_16)
   continue;


  VAR_11->error_type = VAR_10[VAR_17].error_type;
  VAR_11->error_class = VAR_10[VAR_17].error_class;
  switch (VAR_10[VAR_17].error_type) {
  case 129:
   VAR_11->u.ue_error_type = VAR_10[VAR_17].error_subtype;
   break;
  case 131:
   VAR_11->u.slb_error_type = VAR_10[VAR_17].error_subtype;
   break;
  case 134:
   VAR_11->u.erat_error_type = VAR_10[VAR_17].error_subtype;
   break;
  case 130:
   VAR_11->u.tlb_error_type = VAR_10[VAR_17].error_subtype;
   break;
  case 128:
   VAR_11->u.user_error_type = VAR_10[VAR_17].error_subtype;
   break;
  case 132:
   VAR_11->u.ra_error_type = VAR_10[VAR_17].error_subtype;
   break;
  case 133:
   VAR_11->u.link_error_type = VAR_10[VAR_17].error_subtype;
   break;
  }
  VAR_11->sync_error = VAR_10[VAR_17].sync_error;
  VAR_11->severity = VAR_10[VAR_17].severity;
  VAR_11->initiator = VAR_10[VAR_17].initiator;
  if (VAR_10[VAR_17].dar_valid)
   *VAR_12 = VAR_9->dar;
  else if (VAR_11->sync_error &&
    VAR_10[VAR_17].error_type == 129) {




   if (FUNC_0()->in_mce < VAR_0)
    FUNC_1(VAR_9, VAR_12,
          VAR_13);
  }
  VAR_16 = 1;
 }

 if (VAR_16)
  return VAR_15;

 VAR_11->error_type = VAR_2;
 VAR_11->error_class = VAR_1;
 VAR_11->severity = VAR_7;
 VAR_11->initiator = VAR_6;
 VAR_11->sync_error = 1;

 return 0;
}
