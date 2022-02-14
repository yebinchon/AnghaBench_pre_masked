
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,char*,char*,int *,char*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,char*,char*,int,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(void)
{
 git_reference *VAR_2;

 FUNC_0(0, FUNC_6(VAR_1));

 FUNC_1(FUNC_5(VAR_1));
 FUNC_2(VAR_1, VAR_0, 0,
  "a65fedf39aefe402d3bb6e24df4d4f5fe4547750",
  "a65fedf39aefe402d3bb6e24df4d4f5fe4547750",
  ((void*)0), "checkout: moving from master to a65fedf39aefe402d3bb6e24df4d4f5fe4547750");
 FUNC_0(1, FUNC_6(VAR_1));


 FUNC_1(FUNC_4(&VAR_2, VAR_1, "HEAD", "refs/heads/master",
             1, "REATTACH"));

 FUNC_2(VAR_1, VAR_0, 0,
  "a65fedf39aefe402d3bb6e24df4d4f5fe4547750",
  "a65fedf39aefe402d3bb6e24df4d4f5fe4547750",
  ((void*)0), "REATTACH");

 FUNC_0(0, FUNC_6(VAR_1));

 FUNC_3(VAR_2);
}
