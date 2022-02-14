
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {scalar_t__ rlim_cur; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,struct rlimit*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,struct rlimit*) ;

__attribute__((used)) static void FUNC_4(void)
{
 struct rlimit VAR_3;

 if (FUNC_1(VAR_0, &VAR_3) < 0) {
  FUNC_2("getrlimit");
  FUNC_0(1);
 }
 if ((VAR_3.rlim_cur == VAR_1) || (VAR_3.rlim_cur > VAR_2)) {
  VAR_3.rlim_cur = VAR_2;
  if (FUNC_3(VAR_0, &VAR_3) < 0) {
   FUNC_2("setrlimit");
   FUNC_0(1);
  }
 }
}
