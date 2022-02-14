
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aggent {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*,int,int *) ;
 int FUNC_1 (int *,int,int ) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int *,struct aggent*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(FILE *VAR_2, struct aggent *VAR_3)
{
 char VAR_4[VAR_0];

 while (FUNC_0(VAR_4, VAR_0, VAR_2) != ((void*)0)) {
  FUNC_1(VAR_2, FUNC_4(VAR_4) * -1, VAR_1);
  if (FUNC_2(VAR_4) != 0)
   break;
  if (FUNC_3(VAR_2, VAR_3) == -1)
   return (-1);
 }
 return (0);
}
