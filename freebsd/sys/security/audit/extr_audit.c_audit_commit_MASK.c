
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct au_mask {int dummy; } ;
struct TYPE_3__ {int ar_errno; int ar_retval; scalar_t__ ar_subj_auid; int ar_event; int ar_arg_svipc_which; int ar_arg_cmd; int ar_valid_arg; int ar_arg_ctlname; int ar_arg_fflags; struct au_mask ar_subj_amask; int ar_endtime; } ;
struct kaudit_record {int k_ar_commit; TYPE_1__ k_ar; } ;
typedef scalar_t__ au_id_t ;
typedef int au_event_t ;
typedef int au_class_t ;
struct TYPE_4__ {scalar_t__ aq_hiwater; } ;


 int FUNC_0 (struct kaudit_record*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,struct kaudit_record*,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int ,struct au_mask*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct kaudit_record*) ;
 int FUNC_8 (int ) ;
 int VAR_10 ;
 struct au_mask VAR_11 ;
 scalar_t__ FUNC_9 (scalar_t__,int,int ,int,int) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 TYPE_2__ VAR_15 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *) ;
 scalar_t__ FUNC_15 (struct kaudit_record*,scalar_t__,int,int ,int) ;
 int VAR_20 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

void
FUNC_19(struct kaudit_record *VAR_21, int VAR_22, int VAR_23)
{
 au_event_t VAR_24;
 au_class_t VAR_25;
 au_id_t VAR_26;
 int VAR_27;
 struct au_mask *VAR_28;

 if (VAR_21 == ((void*)0))
  return;

 VAR_21->k_ar.ar_errno = VAR_22;
 VAR_21->k_ar.ar_retval = VAR_23;
 FUNC_18(&VAR_21->k_ar.ar_endtime);





 if (VAR_21->k_ar.ar_subj_auid == VAR_7)
  VAR_28 = &VAR_11;
 else
  VAR_28 = &VAR_21->k_ar.ar_subj_amask;

 if (VAR_22)
  VAR_27 = VAR_8;
 else
  VAR_27 = VAR_9;






 switch(VAR_21->k_ar.ar_event) {
 case 131:
  VAR_21->k_ar.ar_event = FUNC_6(
      VAR_21->k_ar.ar_arg_fflags, VAR_22);
  break;

 case 132:
  VAR_21->k_ar.ar_event = FUNC_5(
      VAR_21->k_ar.ar_arg_fflags, VAR_22);
  break;

 case 128:
  VAR_21->k_ar.ar_event = FUNC_4(
      VAR_21->k_ar.ar_arg_ctlname, VAR_21->k_ar.ar_valid_arg);
  break;

 case 134:

  VAR_21->k_ar.ar_event = FUNC_12(VAR_21->k_ar.ar_arg_cmd);
  break;

 case 133:
  if (FUNC_0(VAR_21, VAR_0))
   VAR_21->k_ar.ar_event =
       FUNC_8(VAR_21->k_ar.ar_arg_svipc_which);
  break;

 case 130:
  if (FUNC_0(VAR_21, VAR_0))
   VAR_21->k_ar.ar_event =
       FUNC_10(VAR_21->k_ar.ar_arg_svipc_which);
  break;

 case 129:
  if (FUNC_0(VAR_21, VAR_0))
   VAR_21->k_ar.ar_event =
       FUNC_11(VAR_21->k_ar.ar_arg_svipc_which);
  break;
 }

 VAR_26 = VAR_21->k_ar.ar_subj_auid;
 VAR_24 = VAR_21->k_ar.ar_event;
 VAR_25 = FUNC_2(VAR_24);

 VAR_21->k_ar_commit |= VAR_1;
 if (FUNC_3(VAR_24, VAR_25, VAR_28, VAR_27) != 0)
  VAR_21->k_ar_commit |= VAR_4;
 if (FUNC_9(VAR_26, VAR_24, VAR_25, VAR_27,
     VAR_21->k_ar_commit & VAR_4) != 0)
  VAR_21->k_ar_commit |= VAR_3;
 if ((VAR_21->k_ar_commit & (VAR_4 | VAR_3 |
     VAR_6 | VAR_5 |
     VAR_2)) == 0) {
  FUNC_16(&VAR_10);
  VAR_12--;
  FUNC_17(&VAR_10);
  FUNC_7(VAR_21);
  return;
 }
 FUNC_16(&VAR_10);
 if (VAR_17 || !VAR_16) {
  VAR_12--;
  FUNC_17(&VAR_10);
  FUNC_7(VAR_21);
  return;
 }





 while (VAR_14 >= VAR_15.aq_hiwater)
  FUNC_14(&VAR_18, &VAR_10);

 FUNC_1(&VAR_13, VAR_21, VAR_20);
 VAR_14++;
 VAR_12--;
 FUNC_13(&VAR_19);
 FUNC_17(&VAR_10);
}
