
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


typedef scalar_t__ xdrproc_t ;
struct TYPE_12__ {scalar_t__ gidlist_val; } ;
struct TYPE_13__ {TYPE_1__ gidlist; } ;
typedef TYPE_2__ pname_to_uid_res ;
struct TYPE_11__ {scalar_t__ length; int value; } ;
struct TYPE_14__ {TYPE_10__ output_token; } ;
typedef TYPE_3__ init_sec_context_res ;
struct TYPE_15__ {TYPE_10__ interprocess_token; } ;
typedef TYPE_4__ export_sec_context_res ;
struct TYPE_16__ {TYPE_10__ exported_name; } ;
typedef TYPE_5__ export_name_res ;
struct TYPE_17__ {TYPE_10__ status_string; } ;
typedef TYPE_6__ display_status_res ;
struct TYPE_18__ {TYPE_10__ output_token; } ;
typedef TYPE_7__ delete_sec_context_res ;
typedef scalar_t__ caddr_t ;
struct TYPE_19__ {int actual_mechs; } ;
typedef TYPE_8__ acquire_cred_res ;
struct TYPE_20__ {TYPE_10__ output_token; } ;
typedef TYPE_9__ accept_sec_context_res ;
typedef int SVCXPRT ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,TYPE_10__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

int
FUNC_4(SVCXPRT *VAR_9, xdrproc_t VAR_10, caddr_t VAR_11)
{





 OM_uint32 VAR_12;

 if (VAR_10 == (xdrproc_t) VAR_7) {
  init_sec_context_res *VAR_13 = (init_sec_context_res *) VAR_11;
  FUNC_1(&VAR_12, &VAR_13->output_token);
 } else if (VAR_10 == (xdrproc_t) VAR_1) {
  accept_sec_context_res *VAR_14 = (accept_sec_context_res *) VAR_11;
  FUNC_1(&VAR_12, &VAR_14->output_token);
 } else if (VAR_10 == (xdrproc_t) VAR_3) {
  delete_sec_context_res *VAR_15 = (delete_sec_context_res *) VAR_11;
  FUNC_1(&VAR_12, &VAR_15->output_token);
 } else if (VAR_10 == (xdrproc_t) VAR_6) {
  export_sec_context_res *VAR_16 = (export_sec_context_res *) VAR_11;
  if (VAR_16->interprocess_token.length)
   FUNC_3(VAR_16->interprocess_token.value, 0,
       VAR_16->interprocess_token.length);
  FUNC_1(&VAR_12, &VAR_16->interprocess_token);
 } else if (VAR_10 == (xdrproc_t) VAR_5) {
  export_name_res *VAR_17 = (export_name_res *) VAR_11;
  FUNC_1(&VAR_12, &VAR_17->exported_name);
 } else if (VAR_10 == (xdrproc_t) VAR_2) {
  acquire_cred_res *VAR_18 = (acquire_cred_res *) VAR_11;
  FUNC_2(&VAR_12, &VAR_18->actual_mechs);
 } else if (VAR_10 == (xdrproc_t) VAR_8) {
  pname_to_uid_res *VAR_19 = (pname_to_uid_res *) VAR_11;
  if (VAR_19->gidlist.gidlist_val)
   FUNC_0(VAR_19->gidlist.gidlist_val);
 } else if (VAR_10 == (xdrproc_t) VAR_4) {
  display_status_res *VAR_20 = (display_status_res *) VAR_11;
  FUNC_1(&VAR_12, &VAR_20->status_string);
 }

 return (VAR_0);
}
