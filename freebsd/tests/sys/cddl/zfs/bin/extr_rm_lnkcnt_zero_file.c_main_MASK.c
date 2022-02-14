
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_nlink; } ;
typedef int pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 char* VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int VAR_6 ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *,int *,int ,void*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,struct stat*) ;
 int VAR_7 ;
 int VAR_8 ;

int
FUNC_9(int VAR_9, char **VAR_10)
{
 int VAR_11;
 pthread_t VAR_12;

 if (VAR_9 == 1) {
  (void) FUNC_4("Usage: %s <filebase>\n", VAR_10[0]);
  FUNC_0(-1);
 }

 VAR_5 = VAR_10[1];
 VAR_11 = FUNC_2(VAR_5, VAR_0 | VAR_2 | VAR_1, 0644);
 if (VAR_11 < 0) {
  FUNC_3("creating test file");
  FUNC_0(-1);
 }

 if (FUNC_6(4)) {
  FUNC_1(VAR_7, "failed to set concurrency\n");
  FUNC_0(-1);
 }
 (void) FUNC_5(&VAR_12, ((void*)0), VAR_6, ((void*)0));
 (void) FUNC_5(&VAR_12, ((void*)0), VAR_4, ((void*)0));
 (void) FUNC_5(&VAR_12, ((void*)0), VAR_8, (void *) &VAR_11);

 while (VAR_3) {
  int VAR_13;
  struct stat VAR_14;

  VAR_13 = FUNC_8(VAR_5, &VAR_14);
  if (VAR_13 == 0 && (VAR_14.st_nlink > 2 || VAR_14.st_nlink < 1)) {
   (void) FUNC_4("st.st_nlink = %d, exiting\n", (int)VAR_14.st_nlink);

   FUNC_0(0);
  }
  (void) FUNC_7(1);
 }

 return (0);
}
