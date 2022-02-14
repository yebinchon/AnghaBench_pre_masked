
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmd ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int
FUNC_4(FILE *VAR_1)
{
 char VAR_2[10];
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_2, sizeof(VAR_2));
 if (VAR_3)
  goto out;

 VAR_3 = FUNC_1(VAR_1, &VAR_0);

 out:
 FUNC_3(VAR_1, "\n");
 (void)FUNC_0(VAR_1);
 return (VAR_3);
}
