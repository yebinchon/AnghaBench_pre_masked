
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int machine; int port; } ;
struct TYPE_6__ {int am_failure; int am_success; } ;
struct TYPE_9__ {TYPE_3__ ar_arg_termid; TYPE_1__ ar_arg_amask; int ar_arg_asid; int ar_arg_auid; } ;
struct kaudit_record {TYPE_4__ k_ar; } ;
struct TYPE_10__ {int machine; int port; } ;
struct TYPE_7__ {int am_failure; int am_success; } ;
struct auditinfo {TYPE_5__ ai_termid; TYPE_2__ ai_mask; int ai_asid; int ai_auid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kaudit_record*,int) ;
 int VAR_3 ;
 struct kaudit_record* FUNC_1 () ;

void
FUNC_2(struct auditinfo *VAR_4)
{
 struct kaudit_record *VAR_5;

 VAR_5 = FUNC_1();
 if (VAR_5 == ((void*)0))
  return;

 VAR_5->k_ar.ar_arg_auid = VAR_4->ai_auid;
 VAR_5->k_ar.ar_arg_asid = VAR_4->ai_asid;
 VAR_5->k_ar.ar_arg_amask.am_success = VAR_4->ai_mask.am_success;
 VAR_5->k_ar.ar_arg_amask.am_failure = VAR_4->ai_mask.am_failure;
 VAR_5->k_ar.ar_arg_termid.port = VAR_4->ai_termid.port;
 VAR_5->k_ar.ar_arg_termid.machine = VAR_4->ai_termid.machine;
 FUNC_0(VAR_5, VAR_2 | VAR_1 | VAR_0 | VAR_3);
}
