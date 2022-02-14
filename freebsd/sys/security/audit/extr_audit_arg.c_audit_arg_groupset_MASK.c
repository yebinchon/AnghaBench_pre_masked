
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_3__ {scalar_t__ gidset_size; int * gidset; } ;
struct TYPE_4__ {TYPE_1__ ar_arg_groups; } ;
struct kaudit_record {TYPE_2__ k_ar; } ;
typedef int gid_t ;


 int VAR_0 ;
 int FUNC_0 (struct kaudit_record*,int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct kaudit_record* FUNC_2 () ;
 int * FUNC_3 (int,int ,int ) ;
 scalar_t__ VAR_3 ;

void
FUNC_4(gid_t *VAR_4, u_int VAR_5)
{
 u_int VAR_6;
 struct kaudit_record *VAR_7;

 FUNC_1(VAR_5 <= VAR_3 + 1,
     ("audit_arg_groupset: gidset_size > (kern.ngroups + 1)"));

 VAR_7 = FUNC_2();
 if (VAR_7 == ((void*)0))
  return;

 if (VAR_7->k_ar.ar_arg_groups.gidset == ((void*)0))
  VAR_7->k_ar.ar_arg_groups.gidset = FUNC_3(
      sizeof(gid_t) * VAR_5, VAR_1, VAR_2);

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  VAR_7->k_ar.ar_arg_groups.gidset[VAR_6] = VAR_4[VAR_6];
 VAR_7->k_ar.ar_arg_groups.gidset_size = VAR_5;
 FUNC_0(VAR_7, VAR_0);
}
