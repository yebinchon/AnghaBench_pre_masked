
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int FILE ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int * FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,struct stat*) ;

FILE *
FUNC_4(void)
{
 struct stat VAR_4;
 FILE *VAR_5;


 if ((VAR_5 = FUNC_2(VAR_0, "r")) == ((void*)0)) {
  if (VAR_3) {
   if (FUNC_1(VAR_1[0]) != 0)
    return (((void*)0));
   if (FUNC_3(VAR_2, &VAR_4) == 0)
    return (((void*)0));
   if ((VAR_5 = FUNC_2(VAR_0, "r")) == ((void*)0))
    return (((void*)0));
  } else {
   VAR_5 = FUNC_0(VAR_0);
  }
 }
 return (VAR_5);
}
