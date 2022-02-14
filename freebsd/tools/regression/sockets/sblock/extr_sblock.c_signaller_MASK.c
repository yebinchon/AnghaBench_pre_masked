
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int pid_t ;
typedef int ch ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int,char*,int,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void
FUNC_6(pid_t VAR_1, int VAR_2)
{
 ssize_t VAR_3;
 char VAR_4;

 if (FUNC_3(2) != 0) {
  FUNC_4("signaller sleep(2)");
  return;
 }
 if (FUNC_1(VAR_1, VAR_0) < 0) {
  FUNC_4("signaller kill(%d)", VAR_1);
  return;
 }
 if (FUNC_3(1) != 0) {
  FUNC_4("signaller sleep(1)");
  return;
 }
 VAR_3 = FUNC_2(VAR_2, &VAR_4, sizeof(VAR_4), 0);
 if (VAR_3 < 0) {
  FUNC_4("signaller send");
  return;
 }
 if (VAR_3 != sizeof(VAR_4)) {
  FUNC_5("signaller send ret %zd", VAR_3);
  return;
 }
 if (FUNC_0(VAR_2) < 0) {
  FUNC_4("signaller close");
  return;
 }
 if (FUNC_3(1) != 0) {
  FUNC_4("signaller sleep(1)");
  return;
 }
}
