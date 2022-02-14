
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvmppc_vcore {int entry_exit_map; int pcpu; } ;
struct kvm_split_mode {int do_restore; scalar_t__* napped; scalar_t__ lpcr_req; struct kvmppc_vcore** vc; } ;
struct TYPE_3__ {int ptid; int tid; struct kvmppc_vcore* kvm_vcore; struct kvm_split_mode* kvm_split_mode; } ;
struct TYPE_4__ {TYPE_1__ kvm_hstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (struct kvmppc_vcore*,int) ;
 int FUNC_2 (int) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;

void FUNC_3(int VAR_5)
{
 struct kvmppc_vcore *VAR_6 = VAR_3->kvm_hstate.kvm_vcore;
 int VAR_7 = VAR_3->kvm_hstate.ptid;
 struct kvm_split_mode *VAR_8 = VAR_3->kvm_hstate.kvm_split_mode;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;



 VAR_9 = 0x100 << VAR_7;
 do {
  VAR_10 = VAR_6->entry_exit_map;
 } while (FUNC_0(&VAR_6->entry_exit_map, VAR_10, VAR_10 | VAR_9) != VAR_10);


 if ((VAR_10 >> 8) != 0)
  return;






 if (VAR_5 != VAR_0)
  FUNC_1(VAR_6, VAR_10 & ~(1 << VAR_7));





 if (!VAR_8)
  return;

 for (VAR_11 = 0; VAR_11 < VAR_1; ++VAR_11) {
  VAR_6 = VAR_8->vc[VAR_11];
  if (!VAR_6)
   break;
  do {
   VAR_10 = VAR_6->entry_exit_map;

   if ((VAR_10 >> 8) != 0)
    break;
  } while (FUNC_0(&VAR_6->entry_exit_map, VAR_10,
     VAR_10 | VAR_2) != VAR_10);
  if ((VAR_10 >> 8) == 0)
   FUNC_1(VAR_6, VAR_10);
 }






 if (VAR_8->lpcr_req) {
  if (FUNC_0(&VAR_8->do_restore, 0, 1) == 0) {
   VAR_6 = VAR_3->kvm_hstate.kvm_vcore;
   VAR_13 = VAR_6->pcpu + VAR_7 - VAR_3->kvm_hstate.tid;
   for (VAR_12 = 1; VAR_12 < VAR_4; ++VAR_12) {
    if (VAR_8->napped[VAR_12])
     FUNC_2(VAR_13 + VAR_12);
   }
  }
 }
}
