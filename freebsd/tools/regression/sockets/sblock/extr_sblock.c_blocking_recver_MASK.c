
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int ch ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int,char*,int,int ) ;

__attribute__((used)) static void
FUNC_3(int VAR_1)
{
 ssize_t VAR_2;
 char VAR_3;

 VAR_2 = FUNC_2(VAR_1, &VAR_3, sizeof(VAR_3), 0);
 if (VAR_2 < 0)
  FUNC_0(-1, "FAIL: blocking_recver: recv");
 if (VAR_2 == 0)
  FUNC_1(-1, "FAIL: blocking_recver: recv: eof");
 if (VAR_2 != 1)
  FUNC_1(-1, "FAIL: blocking_recver: recv: %zd bytes", VAR_2);
 if (VAR_0)
  FUNC_1(-1, "FAIL: blocking_recver: interrupted wrong pid");
}
