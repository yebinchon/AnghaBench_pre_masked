
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; int tv_sec; } ;


 int FUNC_0 (char const*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (struct timeval*,int *) ;

__attribute__((used)) static void FUNC_3(struct timeval *VAR_0)
{
 const char *VAR_1;

 VAR_1 = FUNC_1("GIT_TEST_DATE_NOW");
 if (VAR_1) {
  VAR_0->tv_sec = FUNC_0(VAR_1);
  VAR_0->tv_usec = 0;
 }
 else
  FUNC_2(VAR_0, ((void*)0));
}
