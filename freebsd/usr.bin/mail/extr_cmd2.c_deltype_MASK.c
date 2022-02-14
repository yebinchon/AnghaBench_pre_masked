
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int*) ;

int
FUNC_4(void *VAR_2)
{
 int *VAR_3 = VAR_2;
 int VAR_4[2];
 int VAR_5;

 VAR_5 = VAR_0 - &VAR_1[0] + 1;
 if (FUNC_0(VAR_3) >= 0) {
  VAR_4[0] = VAR_0 - &VAR_1[0] + 1;
  if (VAR_4[0] > VAR_5) {
   FUNC_2(VAR_0);
   VAR_4[1] = 0;
   return (FUNC_3(VAR_4));
  }
  FUNC_1("At EOF\n");
 } else
  FUNC_1("No more messages\n");
 return (0);
}
