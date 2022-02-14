
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(volatile u64 *VAR_2)
{
 int VAR_3 = 0;

 while (*VAR_2 == 0 && VAR_3 < VAR_1) {
  FUNC_1(1);
  VAR_3 += 1;
 }

 if (VAR_3 == VAR_1) {
  FUNC_0("Completion-Wait loop timed out\n");
  return -VAR_0;
 }

 return 0;
}
