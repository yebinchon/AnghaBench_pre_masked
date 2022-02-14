
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,char*,char*,char*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,char*,int,char*) ;

void FUNC_6(void)
{
 git_reference *VAR_1, *VAR_2;

 FUNC_0(FUNC_3(&VAR_1, VAR_0, "refs/heads/master"));
 FUNC_0(FUNC_5(&VAR_2, VAR_1, "refs/heads/renamed", 0,
          "message"));

 FUNC_1(VAR_0, FUNC_4(VAR_2), 0,
  "a65fedf39aefe402d3bb6e24df4d4f5fe4547750",
  "a65fedf39aefe402d3bb6e24df4d4f5fe4547750",
  "foo@example.com", "message");

 FUNC_2(VAR_1);
 FUNC_2(VAR_2);
}
