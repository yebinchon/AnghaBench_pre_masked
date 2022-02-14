
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,char*,long) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(void)
{
 FILE *VAR_1 = FUNC_1(VAR_0, "w");

 if (VAR_1) {
  FUNC_2(VAR_1, "%ld\n", (long)FUNC_3());
  FUNC_0(VAR_1);
 }
}
