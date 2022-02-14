
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* v; } ;
struct vcpu_register_time_memory_area {TYPE_3__ addr; } ;
struct TYPE_6__ {int flags; } ;
struct pvclock_vsyscall_time_info {TYPE_2__ pvti; } ;
struct TYPE_5__ {int vclock_mode; } ;
struct TYPE_8__ {TYPE_1__ archdata; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct vcpu_register_time_memory_area*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct pvclock_vsyscall_time_info*) ;
 struct pvclock_vsyscall_time_info* VAR_4 ;
 TYPE_4__ VAR_5 ;

__attribute__((used)) static void FUNC_5(void)
{
 struct vcpu_register_time_memory_area VAR_6;
 struct pvclock_vsyscall_time_info *VAR_7;
 int VAR_8;

 VAR_7 = (struct pvclock_vsyscall_time_info *)FUNC_2(VAR_0);
 if (!VAR_7)
  return;

 VAR_6.addr.v = &VAR_7->pvti;

 VAR_8 = FUNC_0(VAR_3, 0, &VAR_6);
 if (VAR_8) {
  FUNC_3("xen: VCLOCK_PVCLOCK not supported (err %d)\n", VAR_8);
  FUNC_1((unsigned long)VAR_7);
  return;
 }






 if (!(VAR_7->pvti.flags & VAR_1)) {
  VAR_6.addr.v = ((void*)0);
  VAR_8 = FUNC_0(VAR_3,
      0, &VAR_6);
  if (!VAR_8)
   FUNC_1((unsigned long)VAR_7);

  FUNC_3("xen: VCLOCK_PVCLOCK not supported (tsc unstable)\n");
  return;
 }

 VAR_4 = VAR_7;
 FUNC_4(VAR_4);

 VAR_5.archdata.vclock_mode = VAR_2;
}
