
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int*,int,struct kinfo_proc*,size_t*,int *,int ) ;
 struct kinfo_proc* FUNC_2 (size_t) ;

struct kinfo_proc *FUNC_3(size_t *VAR_3) {
   int VAR_4[4] = { VAR_0, VAR_1, VAR_2, 0 };
   struct kinfo_proc *VAR_5 = ((void*)0);





   *VAR_3 = 0;
   if (FUNC_1(VAR_4, 4, ((void*)0), VAR_3, ((void*)0), 0) < 0)
      FUNC_0("Unable to get size of kproc_infos");

   VAR_5 = FUNC_2(*VAR_3);
   if (VAR_5 == ((void*)0))
      FUNC_0("Out of memory for kproc_infos");

   if (FUNC_1(VAR_4, 4, VAR_5, VAR_3, ((void*)0), 0) < 0)
      FUNC_0("Unable to get kinfo_procs");

   *VAR_3 = *VAR_3 / sizeof(struct kinfo_proc);

   return VAR_5;
}
