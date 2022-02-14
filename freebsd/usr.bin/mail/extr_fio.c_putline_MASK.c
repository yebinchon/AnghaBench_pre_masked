
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,int,int,int *) ;
 int FUNC_3 (char*) ;

int
FUNC_4(FILE *VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(VAR_1);
 (void)FUNC_2(VAR_1, sizeof(*VAR_1), VAR_3, VAR_0);
 if (VAR_2) {
  FUNC_1(VAR_0, "\n");
  VAR_3++;
 }
 if (FUNC_0(VAR_0))
  return (-1);
 return (VAR_3);
}
