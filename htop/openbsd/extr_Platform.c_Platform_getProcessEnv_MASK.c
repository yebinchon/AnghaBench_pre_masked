
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc {int dummy; } ;
typedef int pid_t ;
typedef int kvm_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 char** FUNC_1 (int *,struct kinfo_proc*,int ) ;
 struct kinfo_proc* FUNC_2 (int *,int ,int ,int,int*) ;
 int * FUNC_3 (int *,int *,int *,int ,char*) ;
 int FUNC_4 (char*,char*,size_t) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (size_t) ;
 char* FUNC_7 (char*,size_t) ;

char* FUNC_8(pid_t VAR_3) {
   char VAR_4[VAR_2];
   char *VAR_5;
   char **VAR_6;
   int VAR_7;
   kvm_t *VAR_8;
   struct kinfo_proc *VAR_9;
   size_t VAR_10 = 4096, VAR_11 = 0;

   if ((VAR_8 = FUNC_3(((void*)0), ((void*)0), ((void*)0), VAR_1, VAR_4)) == ((void*)0))
      return ((void*)0);

   if ((VAR_9 = FUNC_2(VAR_8, VAR_0, VAR_3,
                             sizeof(struct kinfo_proc), &VAR_7)) == ((void*)0)) { (void) FUNC_0(VAR_8);

      return ((void*)0);
   }

   if ((VAR_6 = FUNC_1(VAR_8, VAR_9, 0)) == ((void*)0)) {
      (void) FUNC_0(VAR_8);
      return ((void*)0);
   }

   VAR_5 = FUNC_6(VAR_10);
   for (char **VAR_12 = VAR_6; *VAR_12; VAR_12++) {
      size_t VAR_13 = FUNC_5(*VAR_12) + 1;

      if (VAR_11 + VAR_13 > VAR_10) {
         VAR_10 *= 2;
         VAR_5 = FUNC_7(VAR_5, VAR_10);
      }

      FUNC_4(VAR_5 + VAR_11, *VAR_12, VAR_13);
      VAR_11 += VAR_13;
   }

   if (VAR_11 < 2 || VAR_5[VAR_11 - 1] || VAR_5[VAR_11 - 2]) {
       if (VAR_11 + 2 < VAR_10)
           VAR_5 = FUNC_7(VAR_5, VAR_10 + 2);
       VAR_5[VAR_11] = 0;
       VAR_5[VAR_11+1] = 0;
   }

   (void) FUNC_0(VAR_8);
   return VAR_5;
}
