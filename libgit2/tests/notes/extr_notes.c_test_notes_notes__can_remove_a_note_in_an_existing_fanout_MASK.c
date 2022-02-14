
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_note ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int **,int ,char*,int *) ;
 int FUNC_3 (int ,char*,int ,int ,int *) ;
 int FUNC_4 (int *,char*) ;

void FUNC_5(void)
{
 git_oid VAR_2;
 git_note *VAR_3;

 FUNC_1(FUNC_4(&VAR_2, "8496071c1b46c854b31185ea97743be6a8774479"));
 FUNC_1(FUNC_3(VAR_0, "refs/notes/fanout", VAR_1, VAR_1, &VAR_2));

 FUNC_0(FUNC_2(&VAR_3, VAR_0, "refs/notes/fanout", &VAR_2));
}
