
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * gidset; } ;
struct TYPE_4__ {TYPE_1__ ar_arg_groups; int * ar_arg_envv; int * ar_arg_argv; int * ar_arg_text; int * ar_arg_upath2; int * ar_arg_upath1; } ;
struct kaudit_record {TYPE_2__ k_ar; int * k_udata; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_4, int VAR_5, void *VAR_6)
{
 struct kaudit_record *VAR_7;

 FUNC_0(sizeof(*VAR_7) == VAR_5, ("audit_record_dtor: wrong size"));

 VAR_7 = VAR_4;
 if (VAR_7->k_ar.ar_arg_upath1 != ((void*)0))
  FUNC_1(VAR_7->k_ar.ar_arg_upath1, VAR_2);
 if (VAR_7->k_ar.ar_arg_upath2 != ((void*)0))
  FUNC_1(VAR_7->k_ar.ar_arg_upath2, VAR_2);
 if (VAR_7->k_ar.ar_arg_text != ((void*)0))
  FUNC_1(VAR_7->k_ar.ar_arg_text, VAR_3);
 if (VAR_7->k_udata != ((void*)0))
  FUNC_1(VAR_7->k_udata, VAR_0);
 if (VAR_7->k_ar.ar_arg_argv != ((void*)0))
  FUNC_1(VAR_7->k_ar.ar_arg_argv, VAR_3);
 if (VAR_7->k_ar.ar_arg_envv != ((void*)0))
  FUNC_1(VAR_7->k_ar.ar_arg_envv, VAR_3);
 if (VAR_7->k_ar.ar_arg_groups.gidset != ((void*)0))
  FUNC_1(VAR_7->k_ar.ar_arg_groups.gidset, VAR_1);
}
