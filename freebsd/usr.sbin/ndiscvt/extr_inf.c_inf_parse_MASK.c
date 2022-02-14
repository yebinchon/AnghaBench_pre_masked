
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,char*) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_6 () ;

int
FUNC_7 (FILE *VAR_5, FILE *VAR_6)
{
 FUNC_0(&VAR_3);
 FUNC_0(&VAR_2);
 FUNC_0(&VAR_0);

 VAR_1 = VAR_6;
 VAR_4 = VAR_5;
 FUNC_6();

 if (FUNC_1() == 0 &&
     FUNC_2() == 0 &&
     FUNC_3() == 0)
  return (-1);

 FUNC_5(VAR_6, "#ifdef NDIS_REGVALS\n");
 FUNC_4();
 FUNC_5(VAR_6, "#endif /* NDIS_REGVALS */\n");

 return (0);
}
