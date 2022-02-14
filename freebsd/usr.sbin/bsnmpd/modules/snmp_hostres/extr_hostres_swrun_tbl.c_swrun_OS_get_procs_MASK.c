
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swrun_entry {int flags; } ;
struct kinfo_proc {scalar_t__ ki_pid; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kinfo_proc*,struct swrun_entry*) ;
 struct kinfo_proc* FUNC_1 (int ,int ,int ,int*) ;
 struct swrun_entry* FUNC_2 (scalar_t__) ;
 struct swrun_entry* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct kinfo_proc *VAR_4, *VAR_5;
 int VAR_6;
 int VAR_7;
 struct swrun_entry *VAR_8;

 VAR_4 = FUNC_1(VAR_3, VAR_1, 0, &VAR_7);
 if (VAR_4 == ((void*)0) || VAR_7 < 0) {
  FUNC_4(VAR_2, "kvm_getprocs() failed: %m");
  return;
 }
 for (VAR_6 = 0, VAR_5 = VAR_4; VAR_6 < VAR_7; VAR_6++, VAR_5++) {





  VAR_8 = FUNC_3((int32_t)VAR_5->ki_pid + 1);
  if (VAR_8 == ((void*)0)) {

   VAR_8 = FUNC_2((int32_t)VAR_5->ki_pid + 1);
   if (VAR_8 == ((void*)0))
    continue;
  }
  VAR_8->flags |= VAR_0;

  FUNC_0(VAR_5, VAR_8);
 }
}
