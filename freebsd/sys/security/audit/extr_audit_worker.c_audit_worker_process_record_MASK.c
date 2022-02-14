
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ar_errno; int ar_event; int ar_subj_auid; } ;
struct kaudit_record {int k_ar_commit; TYPE_1__ k_ar; int k_ulen; int k_udata; } ;
struct au_record {int len; int data; } ;
typedef int au_id_t ;
typedef int au_event_t ;
typedef int au_class_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_7 ;
 int VAR_8 ;



 int FUNC_3 (int ) ;
 int VAR_9 ;
 int FUNC_4 (int ,int ,int ,int,int,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int VAR_10 ;
 int FUNC_7 (struct kaudit_record*,int ,int ,int ,int,int ,int ) ;
 int FUNC_8 (struct au_record*) ;
 int FUNC_9 (struct kaudit_record*,struct au_record**) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void
FUNC_12(struct kaudit_record *VAR_11)
{
 struct au_record *VAR_12;
 au_class_t VAR_13;
 au_event_t VAR_14;
 au_id_t VAR_15;
 int VAR_16, VAR_17;
 int VAR_18;






 if (((VAR_11->k_ar_commit & VAR_1) &&
     (VAR_11->k_ar_commit & VAR_6)) ||
     (VAR_11->k_ar_commit & VAR_4)) {
  FUNC_0();
  VAR_18 = 1;
 } else
  VAR_18 = 0;





 if ((VAR_11->k_ar_commit & VAR_1) &&
     (VAR_11->k_ar_commit & VAR_6)) {
  FUNC_1();
  FUNC_6(VAR_10, VAR_9, VAR_11->k_udata,
      VAR_11->k_ulen);
 }

 if ((VAR_11->k_ar_commit & VAR_1) &&
     (VAR_11->k_ar_commit & VAR_5))
  FUNC_5(VAR_11->k_udata, VAR_11->k_ulen);

 if (!(VAR_11->k_ar_commit & VAR_0) ||
     ((VAR_11->k_ar_commit & VAR_3) == 0 &&
     (VAR_11->k_ar_commit & VAR_4) == 0 &&
     (VAR_11->k_ar_commit & VAR_2) == 0))
  goto out;

 VAR_15 = VAR_11->k_ar.ar_subj_auid;
 VAR_14 = VAR_11->k_ar.ar_event;
 VAR_13 = FUNC_3(VAR_14);
 if (VAR_11->k_ar.ar_errno == 0)
  VAR_17 = VAR_8;
 else
  VAR_17 = VAR_7;

 VAR_16 = FUNC_9(VAR_11, &VAR_12);
 switch (VAR_16) {
 case 129:
  goto out;

 case 130:
  FUNC_11("audit_worker_process_record: BSM_FAILURE\n");
  goto out;

 case 128:
  break;

 default:
  FUNC_10("kaudit_to_bsm returned %d", VAR_16);
 }

 if (VAR_11->k_ar_commit & VAR_4) {
  FUNC_1();
  FUNC_6(VAR_10, VAR_9, VAR_12->data, VAR_12->len);
 }

 if (VAR_11->k_ar_commit & VAR_3)
  FUNC_4(VAR_15, VAR_14, VAR_13, VAR_17,
      VAR_11->k_ar_commit & VAR_4, VAR_12->data,
      VAR_12->len);
 FUNC_8(VAR_12);
out:
 if (VAR_18)
  FUNC_2();
}
