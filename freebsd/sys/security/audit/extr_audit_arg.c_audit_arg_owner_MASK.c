
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
struct TYPE_2__ {int ar_arg_gid; int ar_arg_uid; } ;
struct kaudit_record {TYPE_1__ k_ar; } ;
typedef int gid_t ;


 int VAR_0 ;
 int FUNC_0 (struct kaudit_record*,int) ;
 int VAR_1 ;
 struct kaudit_record* FUNC_1 () ;

void
FUNC_2(uid_t VAR_2, gid_t VAR_3)
{
 struct kaudit_record *VAR_4;

 VAR_4 = FUNC_1();
 if (VAR_4 == ((void*)0))
  return;

 VAR_4->k_ar.ar_arg_uid = VAR_2;
 VAR_4->k_ar.ar_arg_gid = VAR_3;
 FUNC_0(VAR_4, VAR_1 | VAR_0);
}
