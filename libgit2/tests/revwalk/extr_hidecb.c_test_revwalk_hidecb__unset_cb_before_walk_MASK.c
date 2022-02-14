
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_revwalk ;
typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int * VAR_3 ;

void FUNC_7(void)
{
 git_revwalk *VAR_4;
 git_oid VAR_5;
 int VAR_6, VAR_7;

 FUNC_1(FUNC_4(&VAR_4, VAR_2));
 FUNC_1(FUNC_2(VAR_4, VAR_3, ((void*)0)));
 FUNC_1(FUNC_2(VAR_4, ((void*)0), ((void*)0)));
 FUNC_1(FUNC_6(VAR_4, &VAR_1));


 VAR_6 = 0;
 while ((VAR_7 = FUNC_5(&VAR_5, VAR_4)) == 0)
  VAR_6++;

 FUNC_0(VAR_6, 6);
 FUNC_0(VAR_7, VAR_0);

 FUNC_3(VAR_4);
}
