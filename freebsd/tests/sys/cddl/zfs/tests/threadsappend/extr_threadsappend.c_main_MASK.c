
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_6 ;
 int FUNC_2 (char*,int,int) ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int *,int ,void*) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int VAR_9 ;
 long FUNC_6 (int ) ;
 int FUNC_7 () ;

int
FUNC_8(int VAR_10, char **VAR_11)
{
 pthread_t VAR_12[2];
 int VAR_13 = 0;
 long VAR_14 = 0;
 int VAR_15;

 if (VAR_10 != 2) {
  FUNC_7();
 }

 VAR_14 = FUNC_6(VAR_4);
 if (VAR_14 < 0) {
  (void) FUNC_1(VAR_9,
      "Invalid return from sysconf(_SC_NPROCESSORS_ONLN)"
      " : errno (decimal)=%d\n", VAR_5);
  FUNC_0(1);
 }
 if (VAR_14 < 2) {
  (void) FUNC_1(VAR_9,
      "Must execute this binary on a multi-processor system\n");
  FUNC_0(1);
 }

 VAR_8 = FUNC_2(VAR_11[VAR_7++], VAR_2|VAR_1|VAR_0|VAR_3, 0777);
 if (VAR_8 == -1) {
  (void) FUNC_1(VAR_9,
      "zfs_threadsappend: "
      "open(%s, O_RDWR|O_CREAT|O_APPEND|O_TRUNC, 0777)"
      " failed\n", VAR_11[VAR_7]);
  FUNC_3("open");
  FUNC_0(1);
 }

 for (VAR_15 = 0; VAR_15 < 2; VAR_15++) {
  VAR_13 = FUNC_4(&VAR_12[VAR_15], ((void*)0), VAR_6, (void *)&VAR_15);
  if (VAR_13 != 0) {
   (void) FUNC_1(VAR_9,
       "zfs_threadsappend: thr_create(#%d) "
       "failed error=%d\n", VAR_15+1, VAR_13);
   FUNC_0(1);
  }
 }

 for (VAR_15 = 0; VAR_15 < 2; VAR_15++) {
  if (FUNC_5(VAR_12[VAR_15], ((void*)0)) != 0)
   break;
 }

 return (0);
}
