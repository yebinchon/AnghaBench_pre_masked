
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 () ;
 int VAR_9 ;

int
FUNC_12(int VAR_10, char *VAR_11[])
{
 int VAR_12, VAR_13;

 if (FUNC_5() != 0) {
  FUNC_4(VAR_9, "testaccess must run as root.\n");
  FUNC_3 (VAR_0);
 }

 VAR_12 = FUNC_11();
 if (VAR_12) {
  FUNC_1();
  FUNC_3 (VAR_0);
 }


 VAR_12 = FUNC_10(VAR_2, VAR_2, VAR_2);
 if (VAR_12) {
  FUNC_6("setresuid");
  FUNC_1();
 }


 VAR_12 = FUNC_8(0, ((void*)0));
 if (VAR_12) {
  FUNC_6("setgroups");
  FUNC_1();
 }


 VAR_12 = FUNC_9(VAR_8, VAR_8, VAR_8);
 if (VAR_12) {
  FUNC_6("setresgid");
  FUNC_1();
 }






 VAR_12 = FUNC_10(VAR_6, VAR_6, VAR_2);
 if (VAR_12) {
  FUNC_6("setresuid.1");
  FUNC_1();
  FUNC_3 (VAR_0);
 }

 VAR_13 = 0;

 VAR_12 = FUNC_0("test1", VAR_3);
 if (!VAR_12) {
  FUNC_4(VAR_9, "saved uid used instead of real uid\n");
  VAR_13++;
 }
 VAR_12 = FUNC_7();
 if (VAR_12) {
  FUNC_6("restoreprivilege");
  FUNC_1();
  FUNC_3 (VAR_0);
 }

 VAR_12 = FUNC_10(VAR_6, VAR_7, VAR_2);
 if (VAR_12) {
  FUNC_6("setresid.2");
  FUNC_1();
  FUNC_3 (VAR_0);
 }


 VAR_12 = FUNC_0("test2", VAR_3);
 if (VAR_12) {
  FUNC_4(VAR_9, "Effective uid was used instead of real uid in access().\n");
  VAR_13++;
 }
 VAR_12 = FUNC_0("test3", VAR_3);
 if (!VAR_12) {
  FUNC_4(VAR_9, "Effective uid was used instead of real uid in access().\n");
  VAR_13++;
 }
 VAR_12 = FUNC_7();
 if (VAR_12) {
  FUNC_6("restoreprivilege");
  FUNC_1();
  FUNC_3 (VAR_0);
 }

 VAR_12 = FUNC_9(VAR_4, VAR_5, VAR_8);
 if (VAR_12) {
  FUNC_6("setresgid.1");
  FUNC_1();
  FUNC_3 (VAR_0);
 }


 VAR_12 = FUNC_10(VAR_6, VAR_6, VAR_2);
 if (VAR_12) {
  FUNC_6("setresuid.3");
  FUNC_1();
  FUNC_3 (VAR_0);
 }


 VAR_12 = FUNC_0("test4", VAR_3);
 if (!VAR_12) {
  FUNC_4(VAR_9, "saved gid used instead of real gid\n");
 }
 VAR_12 = FUNC_0("test5", VAR_3);
 if (VAR_12) {
  FUNC_4(VAR_9, "Effective gid was used instead of real gid in access().\n");
  VAR_13++;
 }
 VAR_12 = FUNC_0("test6", VAR_3);
 if (!VAR_12) {
  FUNC_4(VAR_9, "Effective gid was used instead of real gid in access().\n");
  VAR_13++;
 }
 FUNC_4(VAR_9, "%d errors seen.\n", VAR_13);





 VAR_12 = FUNC_1();
 if (VAR_12) {
  FUNC_6("cleanup");
  FUNC_3 (VAR_0);
 }

 FUNC_3 (VAR_1);
}
