
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pvclock_vsyscall_time_info {int pvti; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 struct pvclock_vsyscall_time_info* FUNC_3 () ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(char *VAR_1)
{
 struct pvclock_vsyscall_time_info *VAR_2 = FUNC_3();
 u64 VAR_3;

 if (!VAR_2)
  return;

 VAR_3 = FUNC_1(&VAR_2->pvti) | 0x01ULL;
 FUNC_4(VAR_0, VAR_3);
 FUNC_0("kvm-clock: cpu %d, msr %llx, %s", FUNC_2(), VAR_3, VAR_1);
}
