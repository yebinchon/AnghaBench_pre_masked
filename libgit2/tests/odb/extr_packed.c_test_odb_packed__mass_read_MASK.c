
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_odb_object ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *) ;
 int FUNC_6 (int *,int ) ;
 int * VAR_1 ;

void FUNC_7(void)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); ++VAR_2) {
  git_oid VAR_3;
  git_odb_object *VAR_4;

  FUNC_2(FUNC_6(&VAR_3, VAR_1[VAR_2]));
  FUNC_1(FUNC_3(VAR_0, &VAR_3) == 1);
  FUNC_2(FUNC_5(&VAR_4, VAR_0, &VAR_3));

  FUNC_4(VAR_4);
 }
}
