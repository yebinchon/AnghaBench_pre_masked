
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_oid ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,char*,char*,int *,char const*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,char*) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int **,int *,int *,char const*) ;

void FUNC_6(void)
{
 git_reference *VAR_1, *VAR_2, *VAR_3;
 git_oid VAR_4;
 const char *VAR_5 = "You've been logged, mate!";

 FUNC_4(&VAR_4, VAR_0, "refs/heads/haacked");
 FUNC_0(FUNC_3(&VAR_3, VAR_0, "refs/heads/haacked"));

 FUNC_0(FUNC_3(&VAR_1, VAR_0, "refs/heads/master"));

 FUNC_0(FUNC_5(&VAR_2, VAR_1, &VAR_4, VAR_5));

 FUNC_1(VAR_0, "refs/heads/master", 0,
  "a65fedf39aefe402d3bb6e24df4d4f5fe4547750",
  "258f0e2a959a364e40ed6603d5d44fbb24765b10",
  ((void*)0), VAR_5);

 FUNC_2(VAR_3);
 FUNC_2(VAR_1);
 FUNC_2(VAR_2);
}
