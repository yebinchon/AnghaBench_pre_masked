
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sys_state_madvise ;
typedef scalar_t__ ssize_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int,char**,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (char*,char const*,size_t) ;
 scalar_t__ FUNC_7 (int ,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void
FUNC_8(void) {
 if (!VAR_5) {
  if (FUNC_4() && VAR_7) {
   FUNC_3("<jemalloc>: no MADV_HUGEPAGE support\n");
   FUNC_0();
  }
  goto label_error;
 }

 static const char VAR_13[] = "always [madvise] never\n";
 static const char VAR_14[] = "[always] madvise never\n";
 static const char VAR_15[] = "always madvise [never]\n";
 char VAR_16[sizeof(VAR_13)];
 int VAR_17 = FUNC_5("/sys/kernel/mm/transparent_hugepage/enabled", VAR_1);

 if (VAR_17 == -1) {
  goto label_error;
 }

 ssize_t VAR_18 = FUNC_2(VAR_17, &VAR_16, sizeof(VAR_16));



 FUNC_1(VAR_17);


        if (VAR_18 < 0) {
  goto label_error;
        }

 if (FUNC_6(VAR_16, VAR_13, (size_t)VAR_18) == 0) {
  VAR_6 = VAR_10;
 } else if (FUNC_6(VAR_16, VAR_14, (size_t)VAR_18) == 0) {
  VAR_6 = VAR_9;
 } else if (FUNC_6(VAR_16, VAR_15, (size_t)VAR_18) == 0) {
  VAR_6 = VAR_11;
 } else {
  goto label_error;
 }
 return;
label_error:
 VAR_8 = VAR_6 = VAR_12;
}
