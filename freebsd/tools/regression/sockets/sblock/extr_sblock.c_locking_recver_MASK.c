
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int ch ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int,char*,int,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_6(int VAR_4)
{
 ssize_t VAR_5;
 char VAR_6;

 if (FUNC_5(1) != 0)
  FUNC_0(-1, "FAIL: locking_recver: sleep");
 VAR_5 = FUNC_4(VAR_4, &VAR_6, sizeof(VAR_6), 0);
 if (VAR_5 < 0 && VAR_1 != VAR_0)
  FUNC_0(-1, "FAIL: locking_recver: recv");
 if (VAR_5 < 0 && VAR_1 == VAR_0) {
  FUNC_3(VAR_3, "PASS\n");
  FUNC_2(0);
 }
 if (VAR_5 == 0)
  FUNC_1(-1, "FAIL: locking_recver: recv: eof");
 if (!VAR_2)
  FUNC_1(-1, "FAIL: locking_recver: not interrupted");
}
