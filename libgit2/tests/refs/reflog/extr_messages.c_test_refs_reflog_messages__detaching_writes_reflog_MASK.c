
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_signature ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,char*,char*,int *,char const*) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,char*,char*) ;

void FUNC_7(void)
{
 git_signature *VAR_2;
 git_oid VAR_3;
 const char *VAR_4;

 FUNC_0(FUNC_6(&VAR_2, "me", "foo@example.com"));

 VAR_4 = "checkout: moving from master to e90810b8df3e80c413d903f631643c716887138d";
 FUNC_2(&VAR_3, "e90810b8df3e80c413d903f631643c716887138d");
 FUNC_0(FUNC_4(VAR_1, &VAR_3));
 FUNC_1(VAR_1, VAR_0, 0,
  "a65fedf39aefe402d3bb6e24df4d4f5fe4547750",
  "e90810b8df3e80c413d903f631643c716887138d",
  ((void*)0), VAR_4);

 VAR_4 = "checkout: moving from e90810b8df3e80c413d903f631643c716887138d to haacked";
 FUNC_0(FUNC_3(VAR_1, "refs/heads/haacked"));
 FUNC_1(VAR_1, VAR_0, 0,
  "e90810b8df3e80c413d903f631643c716887138d",
  "258f0e2a959a364e40ed6603d5d44fbb24765b10",
  ((void*)0), VAR_4);

 FUNC_5(VAR_2);
}
