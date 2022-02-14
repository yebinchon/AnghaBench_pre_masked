
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int so_domain; int so_type; int so_protocol; } ;
struct TYPE_4__ {TYPE_1__ ar_arg_sockinfo; } ;
struct kaudit_record {TYPE_2__ k_ar; } ;


 int FUNC_0 (struct kaudit_record*,int ) ;
 int VAR_0 ;
 struct kaudit_record* FUNC_1 () ;

void
FUNC_2(int VAR_1, int VAR_2, int VAR_3)
{
 struct kaudit_record *VAR_4;

 VAR_4 = FUNC_1();
 if (VAR_4 == ((void*)0))
  return;

 VAR_4->k_ar.ar_arg_sockinfo.so_domain = VAR_1;
 VAR_4->k_ar.ar_arg_sockinfo.so_type = VAR_2;
 VAR_4->k_ar.ar_arg_sockinfo.so_protocol = VAR_3;
 FUNC_0(VAR_4, VAR_0);
}
