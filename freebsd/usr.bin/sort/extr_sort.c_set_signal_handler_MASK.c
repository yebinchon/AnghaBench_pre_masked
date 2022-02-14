
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; int * sa_sigaction; } ;
typedef int sa ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sigaction*,int ,int) ;
 int FUNC_1 (char*) ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int ,struct sigaction*,int *) ;

__attribute__((used)) static void
FUNC_3(void)
{
 struct sigaction VAR_11;

 FUNC_0(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.sa_sigaction = &VAR_10;
 VAR_11.sa_flags = VAR_0;

 if (FUNC_2(VAR_7, &VAR_11, ((void*)0)) < 0) {
  FUNC_1("sigaction");
  return;
 }
 if (FUNC_2(VAR_3, &VAR_11, ((void*)0)) < 0) {
  FUNC_1("sigaction");
  return;
 }
 if (FUNC_2(VAR_4, &VAR_11, ((void*)0)) < 0) {
  FUNC_1("sigaction");
  return;
 }
 if (FUNC_2(VAR_5, &VAR_11, ((void*)0)) < 0) {
  FUNC_1("sigaction");
  return;
 }
 if (FUNC_2(VAR_1, &VAR_11, ((void*)0)) < 0) {
  FUNC_1("sigaction");
  return;
 }
 if (FUNC_2(VAR_2, &VAR_11, ((void*)0)) < 0) {
  FUNC_1("sigaction");
  return;
 }
 if (FUNC_2(VAR_6, &VAR_11, ((void*)0)) < 0) {
  FUNC_1("sigaction");
  return;
 }
 if (FUNC_2(VAR_8, &VAR_11, ((void*)0)) < 0) {
  FUNC_1("sigaction");
  return;
 }
 if (FUNC_2(VAR_9, &VAR_11, ((void*)0)) < 0) {
  FUNC_1("sigaction");
  return;
 }
}
