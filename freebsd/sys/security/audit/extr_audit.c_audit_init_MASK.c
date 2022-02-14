
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct kaudit_record {int dummy; } ;
struct TYPE_10__ {scalar_t__ af_currsz; scalar_t__ af_filesz; } ;
struct TYPE_6__ {int * at_addr; int at_type; } ;
struct TYPE_9__ {TYPE_1__ ai_termid; } ;
struct TYPE_8__ {scalar_t__ am_failure; scalar_t__ am_success; } ;
struct TYPE_7__ {int aq_minfree; int aq_bufsz; int aq_lowater; int aq_hiwater; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int VAR_5 ;
 int FUNC_1 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_5__ VAR_13 ;
 scalar_t__ VAR_14 ;
 TYPE_4__ VAR_15 ;
 int VAR_16 ;
 TYPE_3__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 TYPE_2__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_3 () ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_4 () ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_5 () ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,char*,int *,int ) ;
 int VAR_32 ;
 int FUNC_9 (char*,int,int ,int ,int *,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_10(void)
{

 VAR_28 = 0;
 VAR_29 = 0;
 VAR_27 = 0;
 VAR_18 = 0;
 VAR_12 = 0;
 VAR_14 = 0;
 VAR_10 = 0;
 VAR_9 = 0;

 VAR_13.af_filesz = 0;
 VAR_13.af_currsz = 0;
 VAR_17.am_success = 0;
 VAR_17.am_failure = 0;

 FUNC_2(&VAR_20);
 VAR_21 = 0;
 VAR_19 = 0;
 VAR_22.aq_hiwater = VAR_1;
 VAR_22.aq_lowater = VAR_2;
 VAR_22.aq_bufsz = VAR_0;
 VAR_22.aq_minfree = VAR_3;

 VAR_15.ai_termid.at_type = VAR_4;
 VAR_15.ai_termid.at_addr[0] = VAR_5;

 FUNC_8(&VAR_16, "audit_mtx", ((void*)0), VAR_6);
 FUNC_1();
 FUNC_6(&VAR_31, "audit_worker_cv");
 FUNC_6(&VAR_30, "audit_watermark_cv");
 FUNC_6(&VAR_11, "audit_fail_cv");

 VAR_25 = FUNC_9("audit_record",
     sizeof(struct kaudit_record), VAR_23,
     VAR_24, ((void*)0), ((void*)0), VAR_8, 0);


 FUNC_3();


 FUNC_7();

 FUNC_4();


 FUNC_0(VAR_32, VAR_26, ((void*)0),
     VAR_7);


 FUNC_5();
}
