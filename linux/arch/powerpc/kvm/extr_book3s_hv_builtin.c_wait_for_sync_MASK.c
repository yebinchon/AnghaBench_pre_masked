
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* phase; int allphases; } ;
struct kvm_split_mode {TYPE_2__ lpcr_sync; } ;
struct TYPE_4__ {int tid; } ;
struct TYPE_6__ {TYPE_1__ kvm_hstate; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static void FUNC_4(struct kvm_split_mode *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_0->kvm_hstate.tid;

 VAR_1->lpcr_sync.phase[VAR_3] |= VAR_2;
 VAR_2 = FUNC_0(VAR_2);
 while ((VAR_1->lpcr_sync.allphases & VAR_2) != VAR_2) {
  FUNC_1();
  FUNC_3();
 }
 FUNC_2();
}
