
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(void)
{
 static int VAR_0;






 static const int VAR_1 = 1024;

 VAR_0++;
 if (VAR_0 > VAR_1) {
  return 1;
 } else if (VAR_0 == 2) {
  FUNC_0("die() called many times. Recursion error or racy threaded death!");
  return 0;
 } else {
  return 0;
 }
}
