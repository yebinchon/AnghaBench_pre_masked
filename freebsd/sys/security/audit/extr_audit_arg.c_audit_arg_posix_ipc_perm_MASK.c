
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid_t ;
struct TYPE_3__ {int pipc_mode; int pipc_gid; int pipc_uid; } ;
struct TYPE_4__ {TYPE_1__ ar_arg_pipc_perm; } ;
struct kaudit_record {TYPE_2__ k_ar; } ;
typedef int mode_t ;
typedef int gid_t ;


 int VAR_0 ;
 int FUNC_0 (struct kaudit_record*,int ) ;
 struct kaudit_record* FUNC_1 () ;

void
FUNC_2(uid_t VAR_1, gid_t VAR_2, mode_t VAR_3)
{
 struct kaudit_record *VAR_4;

 VAR_4 = FUNC_1();
 if (VAR_4 == ((void*)0))
  return;

 VAR_4->k_ar.ar_arg_pipc_perm.pipc_uid = VAR_1;
 VAR_4->k_ar.ar_arg_pipc_perm.pipc_gid = VAR_2;
 VAR_4->k_ar.ar_arg_pipc_perm.pipc_mode = VAR_3;
 FUNC_0(VAR_4, VAR_0);
}
