
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,int *,int *,int *) ;

void FUNC_6(void)
{
 git_oid VAR_2;

 FUNC_1(FUNC_4(VAR_1, "refs/heads/master"));
 FUNC_2(&VAR_2, "a65fedf39aefe402d3bb6e24df4d4f5fe4547750");
 FUNC_0(VAR_0, FUNC_5(VAR_1, "refs/heads/foo", &VAR_2, ((void*)0), ((void*)0)));
 FUNC_1(FUNC_3(VAR_1));
}
