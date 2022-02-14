
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_split_mode {scalar_t__ do_restore; int host_lpcr; } ;
struct TYPE_3__ {scalar_t__ tid; int * kvm_split_mode; } ;
struct TYPE_4__ {TYPE_1__ kvm_hstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct kvm_split_mode*,int ) ;

void FUNC_5(struct kvm_split_mode *VAR_5)
{

 FUNC_4(VAR_5, VAR_0);

 FUNC_1(VAR_3, 0);
 FUNC_1(VAR_2, VAR_5->host_lpcr);
 FUNC_0();

 if (VAR_4->kvm_hstate.tid == 0) {
  VAR_5->do_restore = 0;
  FUNC_3();
 }

 FUNC_4(VAR_5, VAR_1);
 FUNC_2();
 VAR_4->kvm_hstate.kvm_split_mode = ((void*)0);
}
