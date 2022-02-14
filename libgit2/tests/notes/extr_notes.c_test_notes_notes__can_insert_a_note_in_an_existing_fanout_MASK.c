
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_note ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,char*,int ,int ,int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,char*,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,char*) ;
 int * VAR_3 ;

void FUNC_6(void)
{
 size_t VAR_4;
 git_oid VAR_5, VAR_6;
 git_note *VAR_7;

 FUNC_0(FUNC_5(&VAR_6, "08b041783f40edfe12bb406c9c9a8a040177c125"));

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_0(FUNC_1(&VAR_5, VAR_1, "refs/notes/fanout", VAR_2, VAR_2, &VAR_6, VAR_3[VAR_4], 0));
  FUNC_0(FUNC_3(&VAR_7, VAR_1, "refs/notes/fanout", &VAR_6));
  FUNC_2(VAR_7);

  FUNC_4(&VAR_6, &VAR_5);
 }
}
