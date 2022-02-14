
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_20__ {int af_filesz; } ;
struct TYPE_18__ {int am_failure; int am_success; } ;
struct TYPE_19__ {TYPE_7__ ap_mask; } ;
struct TYPE_17__ {int ec_class; int ec_number; } ;
struct TYPE_15__ {int am_failure; int am_success; } ;
struct TYPE_16__ {TYPE_4__ ai_mask; } ;
struct TYPE_14__ {int aq_minfree; int aq_delay; int aq_bufsz; int aq_lowater; int aq_hiwater; } ;
struct TYPE_13__ {int aq64_minfree; int aq64_delay; int aq64_bufsz; int aq64_lowater; int aq64_hiwater; } ;
struct TYPE_12__ {int am_failure; int am_success; } ;
struct TYPE_11__ {TYPE_9__ au_fstat; TYPE_8__ au_aupinfo; TYPE_6__ au_evclass; int au_cond; int au_cond64; TYPE_5__ au_auinfo; TYPE_3__ au_qctrl; TYPE_2__ au_qctrl64; TYPE_1__ au_mask; int au_policy; int au_policy64; } ;
struct audit_record {int ar_arg_cmd; TYPE_10__ ar_arg_auditon; int ar_arg_len; } ;
struct au_token {int dummy; } ;
struct au_record {int dummy; } ;
typedef int int64_t ;
typedef int au_qctrl64_t ;
 struct au_token* FUNC_0 (int,char*,int ) ;
 struct au_token* FUNC_1 (int,char*,int ) ;
 int FUNC_2 (struct au_record*,struct au_token*) ;

__attribute__((used)) static void
FUNC_3(struct audit_record *VAR_0, struct au_record *VAR_1)
{
 struct au_token *VAR_2;

 VAR_2 = FUNC_0(3, "length", VAR_0->ar_arg_len);
 FUNC_2(VAR_1, VAR_2);
 switch (VAR_0->ar_arg_cmd) {
 case 138:
  if ((size_t)VAR_0->ar_arg_len == sizeof(int64_t)) {
   VAR_2 = FUNC_1(2, "policy",
       VAR_0->ar_arg_auditon.au_policy64);
   FUNC_2(VAR_1, VAR_2);
   break;
  }


 case 131:
  VAR_2 = FUNC_0(2, "policy", VAR_0->ar_arg_auditon.au_policy);
  FUNC_2(VAR_1, VAR_2);
  break;

 case 133:
  VAR_2 = FUNC_0(2, "setkmask:as_success",
      VAR_0->ar_arg_auditon.au_mask.am_success);
  FUNC_2(VAR_1, VAR_2);
  VAR_2 = FUNC_0(2, "setkmask:as_failure",
      VAR_0->ar_arg_auditon.au_mask.am_failure);
  FUNC_2(VAR_1, VAR_2);
  break;

 case 137:
  if ((size_t)VAR_0->ar_arg_len == sizeof(au_qctrl64_t)) {
   VAR_2 = FUNC_1(2, "setqctrl:aq_hiwater",
       VAR_0->ar_arg_auditon.au_qctrl64.aq64_hiwater);
   FUNC_2(VAR_1, VAR_2);
   VAR_2 = FUNC_1(2, "setqctrl:aq_lowater",
       VAR_0->ar_arg_auditon.au_qctrl64.aq64_lowater);
   FUNC_2(VAR_1, VAR_2);
   VAR_2 = FUNC_1(2, "setqctrl:aq_bufsz",
       VAR_0->ar_arg_auditon.au_qctrl64.aq64_bufsz);
   FUNC_2(VAR_1, VAR_2);
   VAR_2 = FUNC_1(2, "setqctrl:aq_delay",
       VAR_0->ar_arg_auditon.au_qctrl64.aq64_delay);
   FUNC_2(VAR_1, VAR_2);
   VAR_2 = FUNC_1(2, "setqctrl:aq_minfree",
       VAR_0->ar_arg_auditon.au_qctrl64.aq64_minfree);
   FUNC_2(VAR_1, VAR_2);
   break;
  }


 case 130:
  VAR_2 = FUNC_0(2, "setqctrl:aq_hiwater",
      VAR_0->ar_arg_auditon.au_qctrl.aq_hiwater);
  FUNC_2(VAR_1, VAR_2);
  VAR_2 = FUNC_0(2, "setqctrl:aq_lowater",
      VAR_0->ar_arg_auditon.au_qctrl.aq_lowater);
  FUNC_2(VAR_1, VAR_2);
  VAR_2 = FUNC_0(2, "setqctrl:aq_bufsz",
      VAR_0->ar_arg_auditon.au_qctrl.aq_bufsz);
  FUNC_2(VAR_1, VAR_2);
  VAR_2 = FUNC_0(2, "setqctrl:aq_delay",
      VAR_0->ar_arg_auditon.au_qctrl.aq_delay);
  FUNC_2(VAR_1, VAR_2);
  VAR_2 = FUNC_0(2, "setqctrl:aq_minfree",
      VAR_0->ar_arg_auditon.au_qctrl.aq_minfree);
  FUNC_2(VAR_1, VAR_2);
  break;

 case 128:
  VAR_2 = FUNC_0(2, "setumask:as_success",
      VAR_0->ar_arg_auditon.au_auinfo.ai_mask.am_success);
  FUNC_2(VAR_1, VAR_2);
  VAR_2 = FUNC_0(2, "setumask:as_failure",
      VAR_0->ar_arg_auditon.au_auinfo.ai_mask.am_failure);
  FUNC_2(VAR_1, VAR_2);
  break;

 case 129:
  VAR_2 = FUNC_0(2, "setsmask:as_success",
      VAR_0->ar_arg_auditon.au_auinfo.ai_mask.am_success);
  FUNC_2(VAR_1, VAR_2);
  VAR_2 = FUNC_0(2, "setsmask:as_failure",
      VAR_0->ar_arg_auditon.au_auinfo.ai_mask.am_failure);
  FUNC_2(VAR_1, VAR_2);
  break;

 case 139:
  if ((size_t)VAR_0->ar_arg_len == sizeof(int64_t)) {
   VAR_2 = FUNC_1(2, "setcond",
       VAR_0->ar_arg_auditon.au_cond64);
   FUNC_2(VAR_1, VAR_2);
   break;
  }


 case 135:
  VAR_2 = FUNC_0(2, "setcond", VAR_0->ar_arg_auditon.au_cond);
  FUNC_2(VAR_1, VAR_2);
  break;

 case 136:
  VAR_2 = FUNC_0(2, "setclass:ec_event",
      VAR_0->ar_arg_auditon.au_evclass.ec_number);
  FUNC_2(VAR_1, VAR_2);
  VAR_2 = FUNC_0(2, "setclass:ec_class",
      VAR_0->ar_arg_auditon.au_evclass.ec_class);
  FUNC_2(VAR_1, VAR_2);
  break;

 case 132:
  VAR_2 = FUNC_0(2, "setpmask:as_success",
      VAR_0->ar_arg_auditon.au_aupinfo.ap_mask.am_success);
  FUNC_2(VAR_1, VAR_2);
  VAR_2 = FUNC_0(2, "setpmask:as_failure",
      VAR_0->ar_arg_auditon.au_aupinfo.ap_mask.am_failure);
  FUNC_2(VAR_1, VAR_2);
  break;

 case 134:
  VAR_2 = FUNC_0(2, "setfsize:filesize",
      VAR_0->ar_arg_auditon.au_fstat.af_filesz);
  FUNC_2(VAR_1, VAR_2);
  break;

 default:
  break;
 }
}
