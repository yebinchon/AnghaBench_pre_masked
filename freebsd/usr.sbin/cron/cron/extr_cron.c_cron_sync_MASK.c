
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_sec; } ;


 int VAR_0 ;
 struct tm* FUNC_0 (int*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(int VAR_1) {
  struct tm *VAR_2;

 VAR_0 = FUNC_1((time_t*)0);
 if (VAR_1 != 0) {
  VAR_0 += 1;
 } else {
  VAR_2 = FUNC_0(&VAR_0);
  VAR_0 += (60 - VAR_2->tm_sec);
 }
}
