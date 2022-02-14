
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_revwalk ;
typedef int git_repository ;
typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;

void FUNC_11(void)
{
 git_repository *VAR_4;
 git_revwalk *VAR_5;
 git_oid VAR_6, VAR_7[4];
 int VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  FUNC_4(&VAR_7[VAR_8], VAR_3[VAR_8]);
 }

 VAR_4 = FUNC_3("testrepo.git");
 FUNC_2(FUNC_6(&VAR_5, VAR_4));

 FUNC_4(&VAR_6, VAR_2);
 FUNC_2(FUNC_8(VAR_5, &VAR_6));
 FUNC_10(VAR_5, VAR_1);
 FUNC_9(VAR_5);

 VAR_8 = 0;
 while ((VAR_9 = FUNC_7(&VAR_6, VAR_5)) == 0) {
  FUNC_1(&VAR_7[VAR_8], &VAR_6);
  VAR_8++;
 }

 FUNC_0(VAR_8, 4);
 FUNC_0(VAR_9, VAR_0);

 FUNC_5(VAR_5);
}
